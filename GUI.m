function varargout = GUI(varargin)
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @GUI_OpeningFcn, ...
                   'gui_OutputFcn',  @GUI_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end

function GUI_OpeningFcn(hObject, eventdata, handles, varargin)
handles.output = hObject;
guidata(hObject, handles);
set(handles.edit_tank_height, 'Enable', 'off');
set(handles.axes2)
imshow('ct.png')
set_param('Tanques_quick_start/switch_input_signal', 'Value', '2');

function varargout = GUI_OutputFcn(hObject, eventdata, handles)
varargout{1} = handles.output;

function start_btn_Callback(hObject, eventdata, handles)  
    popup_signal_value = get(handles.popupSignal, 'Value');
    popup_mode_value = get(handles.popupMode, 'Value');
            
    if(popup_signal_value == 1 && popup_mode_value==1)
      disp(get(handles.edit_voltage,'String'));
      erro_message_dialog = errordlg('Selecione um Sinal Válido!','Sinal Invalido!');
      set(handles.start_btn, 'Enable', 'off');  
    else
        
       set(handles.start_btn, 'Enable', 'off');
       set(handles.stop_btn, 'Enable', 'on');
       
       rtwbuild('Tanques_quick_start');
       set_param(gcs,'SimulationMode','external');
       set_param(gcs,'SimulationCommand','connect');
       set_param(gcs,'SimulationCommand','start');
       disp('Sistema Iniciado com Sucesso!')
%        open_system('Tanques_quick_start/Tensão na Bomba (V)')
%        open_system('Tanques_quick_start/Altura do Tanque 1 (cm)')
%        open_system('Tanques_quick_start/Sinal de Erro')
    end

function stop_btn_Callback(hObject, eventdata, handles)
 set_param(gcs,'SimulationCommand','stop');
 
 set(handles.start_btn, 'Enable', 'on');
 set(handles.stop_btn, 'Enable', 'off'); 
 
 disp('Sistema Parado com Sucesso!')
 
function edit_voltage_Callback(hObject, eventdata, handles)

function edit_voltage_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
    
function disable_parameters_components(handles)
    set(handles.edit_voltage,'Enable','off');
    set(handles.edit_period,'Enable','off');
    set(handles.edit_offset,'Enable','off');
    set(handles.edit_tank_height,'Enable','off');
    set(handles.edit_prs_amplitude_max, 'Enable', 'off');
    set(handles.edit_prs_amplitude_min, 'Enable', 'off');
    set(handles.edit_prs_period_max, 'Enable', 'off');
    set(handles.edit_prs_period_min, 'Enable', 'off');

function popupSignal_Callback(hObject, eventdata, handles)    
    popup_signal_value = get(handles.popupSignal, 'Value');
    popup_mode_value = get(handles.popupMode, 'Value');

    %if get_param(gcs,'SimulationStatus') == 'external'
    %    set_param(gcs,'SimulationCommand','stop');
    %set(handles.edit_voltage, 'Enable', 'on');

    set_param('Tanques_quick_start/switch_input_signal', 'Value', '1');
    set_param('Tanques_quick_start/Controller Enabler ', 'Value', '1');
    
    set(handles.start_btn, 'Enable', 'on');

    period = get(handles.edit_period,'String');
    offset = get(handles.edit_offset,'String');
    voltage = get(handles.edit_voltage,'String');

    frequency = 1/str2num(period)*2*pi;
    sfrequency = num2str(frequency);

    if(popup_mode_value == 2) %malha fechada
        set(handles.voltage_label, 'String', 'Altura (cm)');
       
    end

    %set_param('Tanques_quick_start/Signal Generator', 'Frequency', sfrequency);
    %set_param('Tanques_quick_start/Signal Generator', 'Amplitude', voltage);
    %set_param('Tanques_quick_start/edit_offset','Value', edit_offset);

    disable_parameters_components(handles)
    
    switch popup_signal_value
        case 2 %Step
            set_param('Tanques_quick_start/switch_input_signal', 'Value', '2');        
            voltage = get(handles.edit_voltage,'String');
            setpoint = get(handles.edit_tank_height,'String');

            if(popup_mode_value == 1)
                set(handles.edit_voltage, 'Enable', 'on');
                set(handles.edit_tank_height, 'Enable', 'off');
            elseif(popup_mode_value == 2)
                set(handles.edit_voltage, 'Enable', 'off');
                set(handles.edit_tank_height, 'Enable', 'on');
            end
            %setpoint = get(handles.edit_tank_height,'String');        
            %disp(get(handles.edit_voltage,'String'));        
            if(isempty(str2num(period)) || isempty(str2num(voltage)) ||  isempty(str2num(offset)))
                disp(get(handles.edit_voltage,'String'));
                f = errordlg('Entre com uma tensao valida!','Entrada Invalida!');
                set(handles.start_btn, 'Enable', 'off');
            else
                %disp('entrei aqui!')
                set_param('Tanques_quick_start/step', 'Value', voltage);
                set_param('Tanques_quick_start/step', 'Value', setpoint);
            end                        
        case 3
            set_param('Tanques_quick_start/Signal Generator', 'WaveForm', 'sine');
            set(handles.edit_period,'Enable','on');
            set(handles.edit_offset,'Enable','on');
            set(handles.edit_voltage, 'Enable', 'on');

            if(isempty(str2num(period)) || isempty(str2num(voltage)) ||  isempty(str2num(offset)))
                disp(get(handles.edit_voltage,'String'));
                f = errordlg('Verifique se os valores são validos!','Entrada Invalida!');
                set(handles.start_btn, 'Enable', 'off');
            else
                %disp('entrei aqui!')
                set_param('Tanques_quick_start/Signal Generator', 'Amplitude', voltage);
                set_param('Tanques_quick_start/Signal Generator', 'Frequency', sfrequency); 
                set_param('Tanques_quick_start/offset', 'Value', offset); 
            end
        case 4
            set_param('Tanques_quick_start/Signal Generator', 'WaveForm', 'square');
            set(handles.edit_period,'Enable','on');
            set(handles.edit_offset,'Enable','on');
            set(handles.edit_voltage, 'Enable', 'on'); 
              if(isempty(str2num(period)) || isempty(str2num(voltage)) ||  isempty(str2num(offset)))
                disp(get(handles.edit_voltage,'String'));
                f = errordlg('Verifique se os valores são validos!','Entrada Invalida!');
                set(handles.start_btn, 'Enable', 'off');
            else
                disp('entrei aqui!')
                set_param('Tanques_quick_start/Signal Generator', 'Amplitude', voltage);
                set_param('Tanques_quick_start/Signal Generator', 'Frequency', sfrequency); 
                set_param('Tanques_quick_start/offset', 'Value', offset);           
            end
        case 5
            set_param('Tanques_quick_start/Signal Generator', 'WaveForm', 'sawtooth');
            set(handles.edit_period,'Enable','on');
            set(handles.edit_offset,'Enable','on');
            set(handles.edit_voltage, 'Enable', 'on'); 
              if(isempty(str2num(period)) || isempty(str2num(voltage)) ||  isempty(str2num(offset)))
                disp(get(handles.edit_voltage,'String'));
                f = errordlg('Verifique se os valores são validos!','Entrada Invalida!');
                set(handles.start_btn, 'Enable', 'off');
            else
                %disp('entrei aqui!')
                set_param('Tanques_quick_start/Signal Generator', 'Amplitude', voltage);
                set_param('Tanques_quick_start/Signal Generator', 'Frequency', sfrequency); 
                set_param('Tanques_quick_start/offset', 'Value', offset);             
            end
        case 6
            set(handles.edit_prs_amplitude_max, 'Enable', 'on');
            set(handles.edit_prs_amplitude_min, 'Enable', 'on');
            set(handles.edit_prs_period_max, 'Enable', 'on');
            set(handles.edit_prs_period_min, 'Enable', 'on');
            set(handles.edit_voltage, 'Enable', 'off');
            set_param('Tanques_quick_start/switch_input_signal', 'Value', '3');

            ampmax=get(handles.edit_prs_amplitude_max,'String');
            ampmin=get(handles.edit_prs_amplitude_min,'String');
            permin=get(handles.edit_prs_period_min,'String');
            permax=get(handles.edit_prs_period_max,'String');

            if(isempty(str2num(ampmax)) || isempty(str2num(ampmin)) ||  isempty(str2num(permin))|| isempty(str2num(permax)))
                disp(get(handles.edit_voltage,'String'));
                f = errordlg('Verifique se os valores são validos!','Entrada Invalida!');
                set(handles.start_btn, 'Enable', 'off');
            else
                %disp('entrei aqui!')
                set_param('Tanques_quick_start/amax', 'Value', ampmax);
                set_param('Tanques_quick_start/amin', 'Value', ampmin); 
                set_param('Tanques_quick_start/pmax', 'Value', permax);
                set_param('Tanques_quick_start/pmin', 'Value', permin);
            end     
    end

function popupSignal_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function popupMode_Callback(hObject, eventdata, handles)
value=get(hObject,'Value');
%if get_param(gcs,'SimulationStatus') == 'external'
%    set_param(gcs,'SimulationCommand','stop');

switch value
    case 1
         set_param('Tanques_quick_start/Controller Enabler ', 'Value', '1');
        %set_param('Tanques_quick_start/Signal Generator', 'Wave form', 'step');
        set(handles.edit_tank_height, 'Enable', 'off');
        set(handles.popupSignal,'Enable','on');
        set(handles.edit_voltage,'Enable','on');
        set(handles.start_btn,'Enable','on');
        set(handles.edit_period,'Enable','on');
        set(handles.edit_offset,'Enable','on');
        %set(handles.popupSignal, 'Value','2');
      
    case 2
        set_param('Tanques_quick_start/Controller Enabler ', 'Value', '3');
        set(handles.edit_tank_height, 'Enable', 'on'); 
        %set(handles.popupSignal,'Enable','off');
        %set(handles.edit_voltage,'Enable','off');
        %set(handles.edit_period,'Enable','off');
        %set(handles.edit_offset,'Enable','off');
        set(handles.edit_prs_amplitude_max, 'Enable', 'off');
        set(handles.edit_prs_amplitude_min, 'Enable', 'off');
        set(handles.edit_prs_period_max, 'Enable', 'off');
        set(handles.edit_prs_period_min, 'Enable', 'off');
        %set(handles.edit_voltage, 'Enable', 'off');
        set_param('Tanques_quick_start/switch_input_signal', 'Value', '3');
        set(handles.edit_tank_height, 'Enable', 'on');
        setpoint = get(handles.edit_tank_height,'String');
        disp(get(handles.edit_tank_height,'String'));
        if(isempty(str2num(setpoint)))
            disp(get(handles.edit_voltage,'String'));
            f = errordlg('Entre com uma altura[cm] valida!','Entrada Invalida!');
            set(handles.start_btn, 'Enable', 'off');
        else
            set_param('Tanques_quick_start/step', 'Value', setpoint);
            set(handles.start_btn, 'Enable', 'on');
        end
    
        %radom
end

function popupMode_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit_tank_height_Callback(hObject, eventdata, handles)

function edit_tank_height_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit_offset_Callback(hObject, eventdata, handles)

function edit_offset_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit_period_Callback(hObject, eventdata, handles)

function edit_period_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function update_btn_Callback(hObject, eventdata, handles)

ativarFiltro(handles)
periodo = get(handles.edit_period,'String');
voltage = get(handles.edit_voltage,'String');
offset = get(handles.edit_offset,'String');
level = get(handles.edit_tank_height,'String');
ampmax=get(handles.edit_prs_amplitude_max,'String');
ampmin=get(handles.edit_prs_amplitude_min,'String');
permin=get(handles.edit_prs_period_min,'String');
permax=get(handles.edit_prs_period_max,'String');
updateSS(handles)
updateTank(handles)
%if get_param(gcs,'SimulationStatus') == 'external'
%set_param(gcs,'SimulationCommand','stop');
malha = get(handles.popupMode,'Value');

% State Spaces
ativar = get(handles.checkboxSS,'Value');
disp(ativar)
if(ativar==1)
    set_param('Tanques_quick_start/Controller Enabler ','Value', num2str(4));
end

 

    switch malha
        case 1
            if (isempty(str2num(periodo)) || isempty(str2num(voltage)) ||  isempty(str2num(offset))||isempty(str2num(ampmax)) || isempty(str2num(ampmin)) ||  isempty(str2num(permin))|| isempty(str2num(permax)))
                f = errordlg('Verifique se as entradas são validas!','Entrada Invalida!');
                %set(handles.update_btn, 'Enable', 'off');
                set(handles.start_btn, 'Enable', 'off');                
            else
                frequency = 1/str2num(periodo)*2*pi;                
                set_param('Tanques_quick_start/Signal Generator','Amplitude', voltage);
                set_param('Tanques_quick_start/Signal Generator', 'Frequency', num2str(frequency));
                set_param('Tanques_quick_start/offset','Value',offset);
                set_param('Tanques_quick_start/step','Value', voltage);
                set_param('Tanques_quick_start/amax', 'Value',ampmax);
                set_param('Tanques_quick_start/amin', 'Value',ampmin); 
                set_param('Tanques_quick_start/pmax', 'Value',permax);
                set_param('Tanques_quick_start/pmin', 'Value',permin);
                set(handles.start_btn, 'Enable', 'on');
            end
        case 2
            if(isempty(str2num(level)))
                disp(get(handles.edit_voltage,'String'));
                f = errordlg('Entre com uma altura[cm] valida!','Entrada Invalida!');
                set(handles.start_btn, 'Enable', 'off');
            else
                set_param('Tanques_quick_start/step', 'Value', level);
                set(handles.update_btn, 'Enable', 'on');
            end
    end
    
function edit_prs_amplitude_min_Callback(hObject, eventdata, handles)

function edit_prs_amplitude_min_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit_prs_period_min_Callback(hObject, eventdata, handles)

function edit_prs_period_min_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit_prs_period_max_Callback(hObject, eventdata, handles)

function edit_prs_period_max_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function edit_prs_amplitude_max_Callback(hObject, eventdata, handles)

function edit_prs_amplitude_max_CreateFcn(hObject, eventdata, handles)
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function voltage_label_CreateFcn(hObject, eventdata, handles)



function edit14_Callback(hObject, eventdata, handles)

function edit14_CreateFcn(hObject, eventdata, handles)

if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function popupmenuControlador_Callback(hObject, eventdata, handles)

popup_controll_value = get(handles.popupmenuControlador, 'Value');
%popup_mode_value = get(handles.popupMode, 'Value');
 set(handles.editKi, 'Enable', 'on');
 set(handles.editKd, 'Enable', 'on');
 set(handles.editTi, 'Enable', 'on');
 set(handles.editTd, 'Enable', 'on');
 updateTank(handles)
 set_param('Tanques_quick_start/Controller Enabler ', 'Value', '2');
switch popup_controll_value
    case 2%P
        [valor]=choiceBtn(handles);
        set_param('Tanques_quick_start/Controller Entry', 'Value', '1');
        set_param('Tanques_quick_start/PID_Kd','Gain','0')
        set_param('Tanques_quick_start/PID_Ki','Gain','0')
        set(handles.editKi, 'Enable', 'off');
        set(handles.editKd, 'Enable', 'off');
        set(handles.editTi, 'Enable', 'off');
        set(handles.editTd, 'Enable', 'off');
        kp=get(handles.editKp,'String');
        msg_error(kp,'Tanques_quick_start/PID_Kp','Gain',handles)
     
    case 3%PD
        
        [valor]=choiceBtn(handles);
        set_param('Tanques_quick_start/Controller Entry', 'Value', '1');
        set_param('Tanques_quick_start/PID_Ki','Gain','0')
        set(handles.editKi, 'Enable', 'off');
        set(handles.editTi, 'Enable', 'off');
        kp=get(handles.editKp,'String');
        kd=get(handles.editKd,'String');  
        if (valor == 1)
            
            msg_error(kp,'Tanques_quick_start/PID_Kp','Gain',handles);
            msg_error(kd,'Tanques_quick_start/PID_Kd','Gain',handles);
            
        else
            td=get(handles.editTd,'String');
            if(str2num(kp)==0)
                kd= 0.0001*str2num(td);
            else
                kd= str2num(kp)*str2num(td);
            end
            
            set_param('Tanques_quick_start/PID_Kd','Gain',num2str(kd));
        end
       
    case 4%PI
        [valor]=choiceBtn(handles);
        set_param('Tanques_quick_start/Controller Entry', 'Value', '1');
        set_param('Tanques_quick_start/PID_Kp','Gain','0')
        set(handles.editKd, 'Enable', 'off');
        set(handles.editTd, 'Enable', 'off');
        kp=get(handles.editKp,'String');
        ki=get(handles.editKi,'String');  
        if (valor == 1)
            
            msg_error(kp,'Tanques_quick_start/PID_Kp','Gain',handles);
            msg_error(ki,'Tanques_quick_start/PID_Ki','Gain',handles);
            
        else
            ti=get(handles.editTi,'String');
            if(str2num(kp)==0)
                ki= str2num(ti)/0.001;
            else
                ki=str2num(ti)/str2num(kp);
            end
            
            set_param('Tanques_quick_start/PID_Ki','Gain',num2str(ki));
        end
    case 5%PID
        [valor]=choiceBtn(handles);
        set_param('Tanques_quick_start/Controller Entry', 'Value', '1');
        kp=get(handles.editKp,'String');
        kd=get(handles.editKd,'String');  
        ki=get(handles.editKi,'String');
        
        if (valor == 1)
            
            msg_error(kp,'Tanques_quick_start/PID_Kp','Gain',handles);
            msg_error(ki,'Tanques_quick_start/PID_Ki','Gain',handles);
            msg_error(kd,'Tanques_quick_start/PID_Kd','Gain',handles);
            
        else
            ti=get(handles.editTi,'String');
            td=get(handles.editTd,'String');
            if(str2num(kp)==0)
                ki= str2num(ti)/0.001;
                kd= str2num(td)/0.001;
            else
                ki=str2num(ti)/str2num(kp);
                 kd=str2num(td)*str2num(kp);
            end
            
            set_param('Tanques_quick_start/PID_Ki','Gain',num2str(ki));
            set_param('Tanques_quick_start/PID_Kd','Gain',num2str(kd));
        end
        
    case 6 %PI-D
        
        [valor]=choiceBtn(handles);
        set_param('Tanques_quick_start/Controller Entry', 'Value', '2');
        kp=get(handles.editKp,'String');
        kd=get(handles.editKd,'String');  
        ki=get(handles.editKi,'String');
        
        if (valor == 1)
            
            msg_error(kp,'Tanques_quick_start/PI-D_Kp','Gain',handles);
            msg_error(ki,'Tanques_quick_start/PI-D_Ki ','Gain',handles);
            msg_error(kd,'Tanques_quick_start/PI-D_Kd','Gain',handles);
            
        else
            ti=get(handles.editTi,'String');
            td=get(handles.editTd,'String');
            if(str2num(kp)==0)
                ki= str2num(ti)/0.001;
                kd= str2num(td)/0.001;
            else
                ki=str2num(ti)/str2num(kp);
                 kd=str2num(td)*str2num(kp);
            end
            
            set_param('Tanques_quick_start/PI-D_Ki','Gain',num2str(ki));
            set_param('Tanques_quick_start/PI-D_Kd','Gain',num2str(kd));
        end
    case 7 %I-PD
        [valor]=choiceBtn(handles);
        set_param('Tanques_quick_start/Controller Entry', 'Value', '3');
        kp=get(handles.editKp,'String');
        kd=get(handles.editKd,'String');  
        ki=get(handles.editKi,'String');
        
        if (valor == 1)
            
            msg_error(kp,'Tanques_quick_start/I-PD_Kp','Gain',handles);
            msg_error(ki,'Tanques_quick_start/I-PD_Ki','Gain',handles);
            msg_error(kd,'Tanques_quick_start/I-PD_Kd','Gain',handles);
            
        else
            ti=get(handles.editTi,'String');
            td=get(handles.editTd,'String');
            if(str2num(kp)==0)
                ki= str2num(ti)/0.001;
                kd= str2num(td)/0.001;
            else
                ki=str2num(ti)/str2num(kp);
                kd=str2num(td)*str2num(kp);
            end
            
            set_param('Tanques_quick_start/I-PD_Ki','Gain',num2str(ki));
            set_param('Tanques_quick_start/I-PD_Kd','Gain',num2str(kd));
        end
     
        
end


function popupmenuControlador_CreateFcn(hObject, eventdata, handles)

if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editKp_Callback(hObject, eventdata, handles)

function editKp_CreateFcn(hObject, eventdata, handles)

if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editKd_Callback(hObject, eventdata, handles)

function editKd_CreateFcn(hObject, eventdata, handles)

if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editKi_Callback(hObject, eventdata, handles)

function editKi_CreateFcn(hObject, eventdata, handles)

if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editTd_Callback(hObject, eventdata, handles)

function editTd_CreateFcn(hObject, eventdata, handles)

if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editTi_Callback(hObject, eventdata, handles)

function editTi_CreateFcn(hObject, eventdata, handles)

if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function msg_error(strvalue,blk,param,handles)
    if(isempty(str2num(strvalue)))
        f = errordlg('Entre com uma valor valido!','Entrada Invalida!');
        set(handles.start_btn, 'Enable', 'off');
    else
        set_param(blk, param, strvalue);
        set(handles.update_btn,'Enable','on');
        set(handles.start_btn,'Enable','on');
    end
    
function valor=choiceBtn(handles)
statusbtnGanho = get(handles.radiobuttonGanho,'Value');
if(statusbtnGanho==1)
 set(handles.editTi, 'Enable', 'off');
 set(handles.editTd, 'Enable', 'off');
 set(handles.editKi, 'Enable', 'on');
 set(handles.editKd, 'Enable', 'on');
 valor=1;
else
 set(handles.editKi, 'Enable', 'off');
 set(handles.editKd, 'Enable', 'off');
 set(handles.editTi, 'Enable', 'on');
 set(handles.editTd, 'Enable', 'on');
 valor=2;
end

function radiobuttonGanho_CreateFcn(hObject, eventdata, handles)


function editSP_Callback(hObject, eventdata, handles)


function editSP_CreateFcn(hObject, eventdata, handles)

if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


function radiobuttonT1_CreateFcn(hObject, eventdata, handles)
 


function radiobutton13_CreateFcn(hObject, eventdata, handles)


function updateTank(handles)
    rbtnT1 = get(handles.radiobuttonT1,'Value');
    SP=get(handles.editSP,'String');
    
    
    msg_error(SP,'Tanques_quick_start/step','Value',handles)
    set_param('Tanques_quick_start/step','Value',SP);
  
    
    if(rbtnT1 == 1 )
        set_param('Tanques_quick_start/Tank Entry','Value','1');
    else
        set_param('Tanques_quick_start/Tank Entry','Value','2');
    end
    
function ativarFiltro(handles)
        condicional =get(handles.radiobuttonCondicional,'Value');
        backcalculation = get(handles.radiobuttonWindup,'Value');
        none = get(handles.radiobuttonNone,'Value');
      
        if(condicional == 1)
            set_param('Tanques_quick_start/PI-D/Integrator','UpperSaturationLimit','10');
            set_param('Tanques_quick_start/PID/Integrator','UpperSaturationLimit','10');
            set_param('Tanques_quick_start/I-PD/Integrator','UpperSaturationLimit','10');
        elseif(backcalculation == 1)
            set_param('Tanques_quick_start/PI-D/Integrator','UpperSaturationLimit','inf');
            set_param('Tanques_quick_start/PID/Integrator','UpperSaturationLimit','inf');
            set_param('Tanques_quick_start/I-PD/Integrator','UpperSaturationLimit','inf');
        elseif(none == 1)
            set_param('Tanques_quick_start/PI-D/Integrator','UpperSaturationLimit','inf');
            set_param('Tanques_quick_start/PID/Integrator','UpperSaturationLimit','inf');
            set_param('Tanques_quick_start/I-PD/Integrator','UpperSaturationLimit','inf');
        end
    
  
function uipanelTanque_CreateFcn(hObject, eventdata, handles)

function radiobuttonWindup_CreateFcn(hObject, eventdata, handles)


function radiobuttonCondicional_CreateFcn(hObject, eventdata, handles)


function radiobuttonNone_CreateFcn(hObject, eventdata, handles)

function editGainK1_Callback(hObject, eventdata, handles)
% hObject    handle to editGainK1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editGainK1 as text
%        str2double(get(hObject,'String')) returns contents of editGainK1 as a double


% --- Executes during object creation, after setting all properties.
function editGainK1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editGainK1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editGainK2_Callback(hObject, eventdata, handles)
% hObject    handle to editGainK2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editGainK2 as text
%        str2double(get(hObject,'String')) returns contents of editGainK2 as a double


% --- Executes during object creation, after setting all properties.
function editGainK2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editGainK2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editGainKe_Callback(hObject, eventdata, handles)
% hObject    handle to editGainKe (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editGainKe as text
%        str2double(get(hObject,'String')) returns contents of editGainKe as a double


% --- Executes during object creation, after setting all properties.
function editGainKe_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editGainKe (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in checkboxSS.
function checkboxSS_Callback(hObject, eventdata, handles)
% hObject    handle to checkboxSS (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hint: get(hObject,'Value') returns toggle state of checkboxSS
function updateSS(handles)
k1gui=get(handles.editGainK1,'String');
k2gui=get(handles.editGainK2,'String');
Kegui=get(handles.editGainKe,'String');
l1gui=get(handles.editGainL1,'String');
l2gui=get(handles.editGainL2,'String');

l1 = str2num(l1gui)
l2 = str2num(l2gui)
kee=str2num(Kegui);
kk=[str2num(k1gui) str2num(k2gui)];
L = [l1;l2]
assignin('base', 'ke', kee);
assignin('base', 'k',kk);
assignin('base','L',L);



function editGainL1_Callback(hObject, eventdata, handles)
% hObject    handle to editGainL1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editGainL1 as text
%        str2double(get(hObject,'String')) returns contents of editGainL1 as a double


% --- Executes during object creation, after setting all properties.
function editGainL1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editGainL1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function editGainL2_Callback(hObject, eventdata, handles)
% hObject    handle to editGainL2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of editGainL2 as text
%        str2double(get(hObject,'String')) returns contents of editGainL2 as a double


% --- Executes during object creation, after setting all properties.
function editGainL2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to editGainL2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
