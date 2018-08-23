% clear all
% clc

x = [1 5 2 3 4 5 6 8];
t = 0:0.001:30;

figure('rend','painters','pos',[0 0 1920 1080])

plot(erro.time, erro.signals.values,'k')
set(gca,'fontsize',16)
title('\fontsize{30}Sinal de Entrada')
xlabel('\fontsize{30}Tempo (s)')
ylabel('\fontsize{30}Amplitude (V)')
%ylim([0 30])
ylim([-4.5 4.5])
xlim([0 30])
grid

 addpath C:\Program' Files'\MATLAB\R2014a\export_fig\
 export_fig erro.pdf -transparent -q 100
% 
% figure('rend','painters','pos',[0 0 1920 1080])
% 
% plot(altura.time, altura.signals.values,'k')
% set(gca,'fontsize',16)
% title('\fontsize{30}Altura do Tanque 1')
% xlabel('\fontsize{30}Tempo (s)')
% ylabel('\fontsize{30}Altura (cm)')
% xlim([0 30])
% 
% grid
% 
% addpath C:\Program' Files'\MATLAB\R2014a\export_fig\
% export_fig altura.pdf -transparent -q 100
% 
% figure('rend','painters','pos',[0 0 1920 1080])
% 
% plot(tensao.time, tensao.signals.values,'k')
% set(gca,'fontsize',16)
% title('\fontsize{30}Tensão no Motor')
% xlabel('\fontsize{30}Tempo (s)')
% ylabel('\fontsize{30}Amplitude (V)')
% ylim([-4.5 4.5])
% xlim([0 30])
% grid
% 
% addpath C:\Program' Files'\MATLAB\R2014a\export_fig\
% export_fig tensao.pdf -transparent -q 100
% 
% figure('rend','painters','pos',[0 0 1920 1080])
% 
% plot(setpoint_altura.time, setpoint_altura.signals.values(:,1),'r', setpoint_altura.time, setpoint_altura.signals.values(:,2),'b')
% set(gca,'fontsize',16)
% title('\fontsize{30}Setpoint/Altura do Tanque 1')
% xlabel('\fontsize{30}Tempo (s)')
% ylabel('\fontsize{30}Amplitude (V)')
% legend('\fontsize{30}Setpoint','\fontsize{30}Altura do Tanque 1')
% ylim([-4.5 4.5])
% xlim([0 30])
% grid
% 
% addpath C:\Program' Files'\MATLAB\R2014a\export_fig\
% export_fig setpoint_altura.pdf -transparent -q 100
% 
close all