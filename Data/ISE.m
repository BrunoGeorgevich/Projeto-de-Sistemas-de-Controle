function [ ise ] = ISE(value_array)

    value_array_len = length(value_array);
    
    ise_aux = 0;
    
    for i = 1:value_array_len
        ise_aux = ise_aux + value_array(i)^2;
    end     

    ise = ise_aux;
end

