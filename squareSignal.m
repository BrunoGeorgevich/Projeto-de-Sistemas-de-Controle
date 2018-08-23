% This function generates square signal
% freq: signal frequency
% amp: signal amplitude
% width: total number of values generated from this signal
function ret = squareSignal(width, freq, amp)
    T = width*(1/freq);
    dt = 1/1000;
    time = 0:dt:T-dt;
    ret = amp*square(2*pi*freq*time);
    %plot(time, ret), xlabel('Time'), ylabel('Square wave')
end