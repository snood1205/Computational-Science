from sympy import *
x = symbols('x')


def polyper(xl,yl):
	if len(xl) != len(yl): raise ArithmeticError("No one-to-one correspondance from x to y")
	n = len(xl)
	if n >=3:
		p = interpolate(xl[0:3],yl[0:3])*(Heaviside(x-xl[0]) - Heaviside(x-xl[2]))
		for i in range(2,n-1,2):
			p += interpolate(xl[i:i+3],yl[i:i+3])*(Heaviside(x-xl[i]) - Heaviside(x-xl[i+2]))
		if n % 2 == 0:
			p += interpolate(xl[-2:],yl[-2:])*(Heaviside(x-xl[-2]) - Heaviside(x-xl[-1]))
	return p

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

xl = [0,1,2,3,4,5,6,7,8,9,10]
yl = [0,1,0,-1,0,1,0,-1,0,1,0]

print(interpolate(xl,yl))
