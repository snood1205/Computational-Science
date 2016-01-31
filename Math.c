#include <stdio.h>
#define PI  3.14159265358979323846
#define E   2.71828182845904523536
#define true 1
#define false 0
#define NaN 0./0.

/* Function Declarations */
unsigned long fact(unsigned int a);
long ffact(int a);
double mod(double a, double);

double dpow(double a, int b);
double surd(int x, int n);

char chabs(char n);
int iabs(int n);
short sabs(short n);
long labs(long n);
float flabs(float n);
double dabs(double n);
long double ldabs(long double n);

double sin(double n);
double cos(double n);
double tan(double n);
double cot(double n);
double sec(double n);
double csc(double n); 

double sinh(double n);
double cosh(double n);
double tanh(double n);
double coth(double n);
double sech(double n);
double csch(double n);

double arcsin(double n);
double asin(double n, int offset);
double arccos(double n);
double acos(double n, int offset);
double arctan(double n);
double atan(double n, int offset);
double arccot(double n);
double acot(double n, int offset);
double arcsec(double n);
double asec(double n, int offset);
double arccsc(double n);
double acsc(double n, int offset); 


int main(int argc, char *argv[])
{
	FILE *f = fopen("sinh.txt", "w");


	for(double i = -10; i <= 10; i += 0.01)
	{
		fprintf(f, "%.16G\t%.16G\n", i, sinh(i));
	}
	fclose(f);
	return 0;
}

/* Misc. Functions */
unsigned long fact(unsigned int a)
{
	if(a == 0 || a == 1)
	{
		return 1;
	}
	unsigned long prod = 1;
	for(unsigned int i = 2; i <= a; i++)
	{
		prod *= i;
	}
	return prod;
}

long ffact(int a)
{
	if(a % 2 == 0)
	{
		long prod = 1;
		for(int i = 2; i <= a; i += 2)
		{
			prod *= i;
		}
		return prod
	}
	long prod = 1;
	for(int i = 3; i <= a; i += 2)
	{
		prod *= i;
	}
	return prod;
}

double mod(double a, double b)
{
	int neg = false;
	if(a < 0)
	{
		a *= -1;
		neg = true;
	}
	while(a > b)
	{
		a -= b;
	}
	if(neg)
	{
		return b - a;
	}
	return a;
}

/* Exponent Funtions */

double dpow(double a, int b)
{
	double prod = 1;
	int neg = false;
	if(b < 0)
	{
		neg = true;
		b *= -1;
	}
	for(int i = 0; i < b; i++)
	{
		prod *= a;
	}
	if(neg)
	{
		return 1.0/prod;
	}
	return prod;
}

double surd(int x, int n)
{
	int im = false;
	int neg = false;
	if(n % 2 == 0 && x < 0)
	{
		im = true;
		x *= -1;
	} 
	else if(x < 0)
	{
		neg = true;
		x *= -1;
	}
	double xp = (double) x /((double) n);
	double x0 = (double) x;
	double atol = 1;
	while(dabs(atol) > 1e-10)
	{
		double xn = (xp * (-1 + n + dpow(xp,-n) * x0))/n;
		atol = xp - xn;
		xp = xn;
	}
	return xp;
}

/* Absolute Values */
/* Integer Types */

char chabs(char n)
{
	if(n < 0)
	{
		n *= -1;
	}
	return n;
}

int iabs(int n)
{
	if(n < 0)
	{
		n *= -1;
	}
	return n;
}

short sabs(short n)
{
	if(n < 0)
	{
		n *= -1;
	}
	return n;
}

long labs(long n)
{
	if(n < 0)
	{
		n *= -1;
	}
	return n;
}

/* Float Point Types */

float flabs(float n)
{
	if(n < 0)
	{
		n *= -1;
	}
	return n;
}

double dabs(double n)
{
	if(n < 0)
	{
		n *= -1;
	}
	return n;
}

long double ldabs(long double n)
{
	if(n < 0)
	{
		n *= -1;
	}
	return n;
}

/* Trigonometric Functions */
double sin(double n)
{
	int neg = false;
	if(n < 0)
	{
		neg = true;
		n *= -1;
	}
	if(n > 2*PI)
	{
		n = mod(n,2*PI);
	}
	if(n > PI/2 && n < PI)
	{
		n = PI/2 - mod(n,PI/2);
	}
	else if(n >= PI && n < 3*PI/2)
	{
		n = mod(n,PI/2);
		neg = true;
	}
	else if(n >= 3*PI/2)
	{
		n = PI/2 - mod(n,PI/2);
		neg = true;
	}
	double sum = 0;
	for(int i = 1; i <= 30; i++)
	{
		sum += dpow(-1,i-1) * (dpow(n,2*i-1))/((double)fact(2*i-1));
	}
	if(neg)
	{
		return -1 * sum;
	}
	return sum;
}

double cos(double n)
{
	return sin(n + PI/2);
}

double tan(double n)
{
	if(cos(n) == 0)
	{
		return NaN;
	}
	return sin(n)/cos(n);
}

double cot(double n)
{
	if(sin(n) == 0)
	{
		return NaN;
	}
	return cos(n)/sin(n);
}

double sec(double n)
{
	if(cos(n) == 0)
	{
		return NaN;
	}
	return 1/cos(n);
}

double csc(double n)
{
	if(sin(n) == 0)
	{
		return NaN;
	}
	return 1/sin(n);
}

/* Hyperbolic Trigonometric Funtions */
double sinh(double n)
{
	double sum = 0;
	for(int i = 0; i <= 30; i++)
	{
		sum += dpow(n,2*i+1)/fact(2*i+1);
	}
	return sum;
}

double cosh(double n)
{
	double sum = 0;
	for(int i = 0; i <= 30; i++)
	{
		sum += dpow(n,2*i)/fact(2*i);
	}
	return sum;
}

double tanh(double n)
{
	if(cosh(n) == 0)
	{
		return NaN;
	}
	return sinh(n)/cosh(n);
}

double coth(double n)
{
	if(sinh(n) == 0)
	{
		return NaN;
	}
	return cosh(n)/sinh(n);
}

double sech(double n)
{
	if(cosh(n) == 0)
	{
		return NaN;
	}
	return 1/cosh(n);
}

double csch(double n)
{
	if(sinh(n) == 0)
	{
		return NaN;
	}
	return 1/sinh(n);
}

/* Inverse Trigonometric Functions */
double arcsin(double n)
{
	double sum = n;
	for(int i = 1; i < 30; i++)
	{
		sum += (double)ffact(2*i - 1) * (dpow(n,2*i+1))/((double) ffact(2*i)*(2*i + 1));
	}
	return sum;
}

double asin(double n, int offset)
{
	return arcsin(n) + 2*PI*offset;
}

double arccos(double n)
{
	return PI/2 - arcsin(n);
}

double acos(double n, int offset)
{
	return arccos(n) + 2*PI*offset;
}

double arctan(double n)
{
	double sum = 0;
	for(int i = 0; i <= 30; i++)
	{
		sum += dpow(-1,i) * dpow(n,2*i+1) / (2*i + 1);
	}
	return sum;
}

double atan(double n, int offset)
{
	return arctan(n) + 2*PI*offset;
}

double arccot(double n)
{
	return PI/2 - arctan(n);
}

double acot(double n, int offset)
{
	return arccot(n) + 2*PI*offset;
}

double arcsec(double n)
{
	return arccos(1/n);
}

double asec(double n, int offset)
{
	return arcsec(n) + 2*PI*offset;
}

double arccsc(double n)
{
	return arcsin(1/n);
}

double acsc(double n, int offset)
{
	return arccsc(n) + 2*PI*offset;
}
