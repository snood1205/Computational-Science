import matplotlib.pyplot as plt 
import numpy as np

def Heaviside(n):
	if n >= 0: return 1
	return 0
def f(x): x*(-x + 2)*(1 - Heaviside(x - 2)) - (-x + 4)*(x - 
    2)*(-Heaviside(x - 4) + Heaviside(x - 2)) + (-x + 6)*(x - 
    4)*(-Heaviside(x - 6) + Heaviside(x - 4)) - (-x + 8)*(x - 
    6)*(-Heaviside(x - 8) + Heaviside(x - 6)) + (-x + 10)*(x - 
    8)*(Heaviside(x - 8))
def g(x): np.sin((np.pi/2)*x)

xr = np.arange(0,10,0.01)

fig1 = plt.subplot(111)
fig1.plot(f(xr),xr,'k-')
fig1.plot(g(xr),xr,'k-')
