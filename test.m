clear all; clc

A = [[-0.057753 0];[0.057753 -0.057753]]
B = [0.741573;0]
C = [ 0 1]
D = 0
Ts = 0.1
sys = c2d(ss(A, B, C, D), Ts, 'zoh')
O = [sys.c;sys.c*sys.a]
rank(O)

a = sys.a
b = sys.b
c = sys.c
d = sys.d

E = eig(sys.a)'

qA = (sys.a + E(1))*(sys.a + E(1))

k = [0.9 0.9]

L = acker(a', c', k)'
% L = qA*inv(O)*[0;1]
%L = [1.1; 0.2]

X_O = 0


% L = [l1;l2]
% Ao = A - L*C
% equ_desejada = det(s*eye(2) - Ao)