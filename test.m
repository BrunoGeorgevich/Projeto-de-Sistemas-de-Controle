for x=1:20
      y(x)=((mod(x,2*pi)/(pi*2))*2)-1;
end

figure(1)

title('\fontsize{20}tets')
plot(y)

