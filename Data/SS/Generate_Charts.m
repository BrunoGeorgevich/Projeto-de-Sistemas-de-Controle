reference = 22;
type = 'Ruim';
config_num = 2;
config = strcat("Configuração ", num2str(config_num));

load(strcat('D:\Documents\Workspaces\Matlab_Projects\projeto-de-sistemas-de-controle\Data\SS\',type,'\Controller\Space_State_Controller-',num2str(reference),'.mat'));
load(strcat('D:\Documents\Workspaces\Matlab_Projects\projeto-de-sistemas-de-controle\Data\SS\',type,'\Observer\State_Observer-',num2str(reference),'.mat'));
load(strcat('D:\Documents\Workspaces\Matlab_Projects\projeto-de-sistemas-de-controle\Data\SS\',type,'\Others\Pump_Voltage-',num2str(reference),'.mat'));
load(strcat('D:\Documents\Workspaces\Matlab_Projects\projeto-de-sistemas-de-controle\Data\SS\',type,'\Others\Tank_Height_1-',num2str(reference),'.mat'));
load(strcat('D:\Documents\Workspaces\Matlab_Projects\projeto-de-sistemas-de-controle\Data\SS\',type,'\Others\Tank_Height_2-',num2str(reference),'.mat'));

start_point = 1;
end_point = 2001;
itae_ssc = ITAE(reference - Tank_2_Height_Data.signals.values(start_point:end_point), Tank_2_Height_Data.time(start_point:end_point));
mse_ssc = MSE(reference - Tank_2_Height_Data.signals.values(start_point:end_point));
iae_ssc = IAE(reference - Tank_2_Height_Data.signals.values(start_point:end_point));
ise_ssc = ISE(reference - Tank_2_Height_Data.signals.values(start_point:end_point)); 

%    disp(strcat(num2str(reference), ',', num2str(config_num), ',', num2str(itae_ssc), ',',num2str(mse_ssc), ',',num2str(iae_ssc), ',',num2str(ise_ssc)))

itae_so = ITAE(State_Observer.signals.values(:,2) - State_Observer.signals.values(:,1), State_Observer.time);
mse_so = MSE(State_Observer.signals.values(:,2) - State_Observer.signals.values(:,1));
iae_so = IAE(State_Observer.signals.values(:,2) - State_Observer.signals.values(:,1));
ise_so = ISE(State_Observer.signals.values(:,2) - State_Observer.signals.values(:,1));

% disp(strcat(num2str(reference), ',', num2str(config_num), ',', num2str(itae_so), ',',num2str(mse_so), ',',num2str(iae_so), ',',num2str(ise_so)))

fig = figure('rend','painters','pos',[0 0 1920 1080])

plot(Space_State_Controller.time, Space_State_Controller.signals.values, 'b')
set(gca,'fontsize',16)
title(strcat("Altura do Tanque 2 com Relação ao Tempo com Setpoint em ", num2str(reference), " cm - ", config))
xlabel('\fontsize{30}Tempo (s)')
ylabel('\fontsize{30}Altura (cm)')
grid

set(fig,'PaperOrientation','landscape');
print(fig,strcat('Seguidor de Referência - ', num2str(reference), ' - ', type),'-bestfit','-dpdf','-r0')

fig2 = figure('rend','painters','pos',[0 0 1920 1080])

plot(State_Observer.time, State_Observer.signals.values)
legend({'Observada', 'Mensurada'},'Location','southwest')
set(gca,'fontsize',16)
title(strcat("Altura do Tanque 2 Observada com o Setpoint em ", num2str(reference), " cm - ", config))
xlabel('\fontsize{30}Tempo (s)')
ylabel('\fontsize{30}Altura (cm)')
grid

set(fig2,'PaperOrientation','landscape');
print(fig2,strcat('Observador de Estado - ', num2str(reference), ' - ', type),'-bestfit','-dpdf','-r0')

fig3 = figure('rend','painters','pos',[0 0 1920 1080])

plot(Tank_1_Height_Data.time, Tank_1_Height_Data.signals.values)
set(gca,'fontsize',16)
title(strcat("Altura do Tanque 1 com o Setpoint em ", num2str(reference), " cm - ", config))
xlabel('\fontsize{30}Tempo (s)')
ylabel('\fontsize{30}Altura (cm)')
grid

set(fig3,'PaperOrientation','landscape');
print(fig3,strcat('Altura do Tanque 1 - ', num2str(reference), ' - ', type),'-bestfit','-dpdf','-r0')

fig4 = figure('rend','painters','pos',[0 0 1920 1080])

plot(Tank_2_Height_Data.time, Tank_2_Height_Data.signals.values)
set(gca,'fontsize',16)
title(strcat("Altura do Tanque 2 com o Setpoint em ", num2str(reference), " cm - ", config))
xlabel('\fontsize{30}Tempo (s)')
ylabel('\fontsize{30}Altura (cm)')
grid

set(fig4,'PaperOrientation','landscape');
print(fig4,strcat('Altura do Tanque 2 - ', num2str(reference), ' - ', type),'-bestfit','-dpdf','-r0')

fig5 = figure('rend','painters','pos',[0 0 1920 1080])

plot(tensao.time, tensao.signals.values)
set(gca,'fontsize',16)
title(strcat("Variação na Tensão de Entrada da Bomba com o Setpoint em ", num2str(reference), " cm - ", config))
xlabel('\fontsize{30}Tempo (s)')
ylabel('\fontsize{30}Altura (cm)')
grid

set(fig5,'PaperOrientation','landscape');
print(fig5,strcat('Tensao - ', num2str(reference), ' - ', type),'-bestfit','-dpdf','-r0')

clear all; clc
close all