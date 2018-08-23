% This function generates sinusoidal signal
% Use stairs(ret) to plot the function output
% freq: signal frequency
% amp: signal amplitude
% width: total number of values generated from this signal
function ret = sineSignal(width, freq, amp)
    T = width*(1/freq);
    dt = 1/1000;
    time = 0:dt:T-dt;
    ret = amp*sin(2*pi*freq*time);
    %plot(time, ret), xlabel('Time'), ylabel('Sine wave')
end