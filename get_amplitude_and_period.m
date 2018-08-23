function [amp, per] = get_amplitude_and_period(amin, amax, pmin, pmax)   
   per = (pmax-pmin).*rand + pmin;
   amp = (amax-amin).*rand + amin;   
end