function [ itae_aux ] = ITAE( value_array, time_array)

    value_array_len = length(value_array);
    time_array_len = length(time_array);
    
    itae_aux = 0;
    
    for i = 1:value_array_len
        itae_aux = itae_aux + abs(value_array(i))*time_array(i);
    end     

    itae = itae_aux;
end

