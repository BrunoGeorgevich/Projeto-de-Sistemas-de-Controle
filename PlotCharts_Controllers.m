% controller_name = 'PID';
% controller_title = strcat('\fontsize{30}',strrep('PID','_','-'))
% folder = strcat('/home/bruno/Documentos/Workspaces/Matlab_Projects/projeto-de-sistemas-de-controle/Data/',controller_name,'/Tank_2/PID/')
function [] = PlotCharts_Controllers( controller_name, controller_title, folder)
    for i = 1:2
        load(strcat(folder, 'Height_Data_Config_',num2str(i),'.mat'))
        load(strcat(folder, controller_name, '_Data_',num2str(i),'.mat'))
        fig = figure('rend','painters','pos',[0 0 1920 1080])

        plot(Tank_2_Height_Data.time, Tank_2_Height_Data.signals.values, 'k')
        set(gca,'fontsize',16)
        title(strcat(controller_title, ' - Altura do Tanque 2'))
        xlabel('\fontsize{30}Tempo (s)')
        ylabel('\fontsize{30}Altura (cm)')
        grid

        set(fig,'PaperOrientation','landscape');
        print(fig,strcat(folder,controller_name, '_Altura_', num2str(i)),'-bestfit','-dpdf','-r0')

        fig2 = figure('rend','painters','pos',[0 0 1920 1080])

        plot(I_PD_Data.time, I_PD_Data.signals.values, 'k')
        set(gca,'fontsize',16)
        title(strcat(controller_title, ' - Saída do Controlador'))
        xlabel('\fontsize{30}Tempo (s)')
        ylabel('\fontsize{30}Tensão (V)')
        grid

        set(fig2,'PaperOrientation','landscape');
        print(fig2,strcat(folder,controller_name, '_Tensao_', num2str(i)),'-bestfit','-dpdf','-r0')
    end

    close all
end