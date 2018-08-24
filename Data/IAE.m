function [ iae ] = IAE(value_array)

    value_array_len = length(value_array);
    
    iae_aux = 0;
    
    for i = 1:value_array_len
        iae_aux = iae_aux + abs(value_array(i));
    end     

    iae = iae_aux;
end

