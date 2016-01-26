import numpy as np
import numpy.linalg as la
import scipy.linalg as sla
import timeit 

def qrsolve(a,b):
	q, r = la.qr(a,mode='reduced')
	return np.dot(np.dot(la.inv(r),la.inv(q)),b)

def lusolve(a,b):
	l, u = sla.lu(a,permute_l=True)
	return np.dot(np.dot(la.inv(u),la.inv(l)),b)

def solve(a,b):
	return np.dot(la.inv(a),b)

def chsolve(a,b):
	u = sla.cholesky(a)
	return np.dot(np.dot(u,u.T),b)

def psolve(a,b):
	u,p  = sla.polar(a);
	return np.dot(np.dot(la.inv(p),la.inv(u)),b)

def pro(a,b):
	return la.solve(a,b)

a = np.random.random((10000,10000))
b = np.random.random((10000,1))
x = pro(a,b)

ax = np.dot(a,x)

sub = ax - b

qr = timeit.timeit("qrsolve(a,b)", setup="from __main__ import qrsolve, a, b",number=1)
lu = timeit.timeit("lusolve(a,b)", setup="from __main__ import lusolve, a, b",number=1)
reg = timeit.timeit("solve(a,b)", setup="from __main__ import solve, a, b",number=1)
pro = timeit.timeit("pro(a,b)",setup="from __main__ import pro, a, b",number=1)
pol = timeit.timeit("psolve(a,b)",setup="from __main__ import psolve, a, b",number=1)
print("QR:",qr,"\nLU:",lu,"\nReg:",reg,"\nProgrammed:",pro,"\nPolar:",pol)

count = 0
for i in sub:
	if i > 1e-4:
		print(i)
		count += 1
print(count)
