from sympy import *
x = symbols('x')
def divided_difference(xl,yl,a,b):
	p = 0
	for i in range(a,b+1):
		sub = yl[i]
		den = 1
		for j in range(a,b+1):
			if j != i:
				den *= (xl[i] - xl[j])
		sub /= den
		p += sub
	return p

def interpolate(xl,yl):
	x = symbols('x')
	if len(xl) != len(yl):
		raise ArithmeticError("There must be an equal number of x and y points")
	n = len(xl)
	p = 0
	for j in range(0,n):
		sub = 1
		for i in range(0,j):
			sub *= (x - xl[i])
		sub *= divided_difference(xl,yl,0,j)
		p += sub
	return p

xl = [0,1,2,3,4,5,6,7,8,9,10]
yl = []
for i in xl:
	yl.append(10**i)
print(interpolate(xl,yl))
