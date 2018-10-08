clear all; clc

A = [[-0.057753 0];[0.057753 -0.057753]]
B = [0.741573;0]
C = [0 1]
D = 0
Ts = 0.1
sys = c2d(ss(A, B, C, D), Ts, 'zoh')
O = [sys.c;sys.c*sys.a]
rank(O)

a = sys.a
b = sys.b
c = sys.c
d = sys.d
polos_observer = [0.9 0.9]
L = acker(a', c', polos_observer)'


aa = [ 0 c; [0;0] a]
bb = [0;b]

U = [bb aa*bb (aa^2)*bb]
polos_control = [0.9048 0.9920 0.9980]

% qA = aa^3 + 2.89*aa^2 + 2.79*aa + eye(3)*0.90
% K = acker(aa, bb, polos_control)
% K = [0 0 1]*inv(U)*qA
K = [0.8 -0.8 1.4]
% K = [6 -0.05 0.12]

ke=K(1)
k=[K(2) K(3)]
