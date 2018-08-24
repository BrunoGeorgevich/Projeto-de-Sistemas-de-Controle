% controller_name = 'PID';
% aux = 'PID/'
% folder = strcat('/home/bruno/Documentos/Workspaces/Matlab_Projects/projeto-de-sistemas-de-controle/Data/',controller_name,'/Tank_2/',aux)
function [ mse_values, itae_values, iae_values, ise_values ] = Metrics(folder)
    mse_values = {};
    ise_values = {};
    iae_values = {};
    itae_values = {};

    disp(controller_name)

    for i = 1:2
        load(strcat(folder, 'Height_Data_Config_',num2str(i),'.mat'))

        itae_values = [itae_values, ITAE(Tank_2_Height_Data.time, Tank_2_Height_Data.signals.values)];
        mse_values  = [mse_values, MSE(Tank_2_Height_Data.signals.values)];
        ise_values  = [ise_values, ISE(Tank_2_Height_Data.signals.values)];
        iae_values  = [iae_values, IAE(Tank_2_Height_Data.signals.values)];
    end

    disp('ITAE')
    disp(itae_values)
    disp('MSE')
    disp(mse_values)
    disp('ISE')
    disp(ise_values)
    disp('IAE')
    disp(iae_values)
    disp('-------------------------------------')
end