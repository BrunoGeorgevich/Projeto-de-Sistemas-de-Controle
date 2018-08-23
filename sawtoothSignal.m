% This function generates sawtooth signal
% freq: signal frequency
% amp: signal amplitude
% width: total number of values generated from this signal
function ret = sawtoothSignal(freq, amp)
    T = (1/freq);
    dt = 1/1000;
    time = 0:dt:T-dt;
    ret = amp * sawtooth(2*pi*freq*time);
    %plot(time, ret), xlabel('Time'), ylabel('Sawtooth wave')
end

% function y = sawtooth(x)
% 
% y = ((mod(x,2*pi)/(pi*2))*2)-1;
% 
% end