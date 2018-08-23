% This function generates random signal
% Use stairs(ret) to plot the function output
% min: signal min value
% max: signal max value
function ret = randomSignal(min, max)
    %ret = [];  
    %for i = 1:100
    %    length = randi([3 20]);
    %    amp = (max-min).*rand + min;
    %    A = amp * ones(1, length);
    %    ret = horzcat(ret, A);
    %end
    ret = (max-min).*rand + min;
    %ret = 
    %stairs(ret), xlabel('Time'), ylabel('Random wave');
end