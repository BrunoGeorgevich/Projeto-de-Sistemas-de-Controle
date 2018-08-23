function valor = updategui()
rto = get_param('Tanques_quick_start/MATLAB Function1','RuntimeObject');
str = num2str(rto.OutputPort(1).Data);
 %andressa = disp(str)
valor = str


