X_e = [1;1];
Y_e = [0;0];

A = [-0.057753 0;0.057753 -0.057753];
B = [0.741573;0];
C = [0 1];
D = 0;
Ts = 0.1;
sys = c2d(ss(A, B, C, D), Ts, 'zoh')
O = [sys.c; sys.c*sys.a]

L = [1;1];
    
%sys.a
%X_e
%L
%Y
%Y_e
        
%  X_next_e = sys.a*X_e + L*(Y - Y_e) + sys.b*u
X_next = (sys.a-L*sys.c);
Y_e = C*X_e;

%%
A = [-0.057753 0;0.057753 -0.057753];
B = [0.741573;0];
C = [0 1];
D = 0;
Ts = 0.1;
sys = c2d(ss(A, B, C, D), Ts, 'zoh')

%Initial conditions for plant
X_O = [0.0001 0.0001];

%Initial conditions for observer
X_OB = [0.002 0.004];

X_e = [1;1];
Y_e = [0;0];

observer_poles = [-1 0];

%L = place(sys.a', sys.c', observer_poles);
L = place(A', C', observer_poles);
L = L';
L = [1.1; 0.2]
%eig(A-L*C)
%eig(A)


