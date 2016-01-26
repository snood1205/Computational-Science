from sympy import *
x = symbols('x')
def interpolate(xl,yl):
	x = symbols('x')
	if len(xl) != len(yl):
		raise ArithmeticError("There must be an equal number of x and y points")
	n = len(xl)
	p = 0
	for i in range(0,n):
		sub = 1
		xi = xl[i]
		for j in range(0,n):
			if j != i:
				sub *= (x-xl[j])/(xi - xl[j])
		p += sub*yl[i]
	return p
interpolate([1,2,3],[1,2,3])
