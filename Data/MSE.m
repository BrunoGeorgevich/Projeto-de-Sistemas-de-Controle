function [ mse ] = MSE(value_array)

    value_array_len = length(value_array);
    
    mse_aux = 0;
    
    for i = 1:value_array_len
        mse_aux = mse_aux + value_array(i)^2;
    end     

    mse = mse_aux/value_array_len;
end

