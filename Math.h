#define PI  3.14159265358979323846
#define E   2.71828182845904523536
#define true 1
#define false 0
#define NaN 0./0.

/* Function Declarations */
/* Binary Comp. */
char chmin(char a, char b);
int imin(int a, int b);
short smin(short a, short b);
long lmin(long a, long b);
float flmin(float a, float b);
double dmin(double a, double b);
long double ldmin(long double a, long double b);
char chmax(char a, char b);
int imax(int a, int b);
short smax(short a, short b);
long lmax(long a, long b);
float flmax(float a, float b);
double dmax(double a, double b);
long double ldmax(long double a, long double b);
/* Array Comp */
char chmina(char a[], int length);
int imina(int a[], int length);
short smina(short a[], int length);
long lmina(long a[], int length);
float flmina(float a[], int length);
double dmina(double a[], int length);
long double ldmina(long double a[], int length);
char chmaxa(char a[], int length);
int imaxa(int a[], int length);
short smaxa(short a[], int length);
long lmaxa(long a[], int length);
float flmaxa(float a[], int length);
double dmaxa(double a[], int length);
long double ldmaxa(long double a[], int length);
/* Sorts */
char * chbubblesort(char a[], int length);
int * ibubblesort(int a[], int length);
short * sbubblesort(short a[], int length);
long * lbubblesort(long a[], int length);
float * flbubblesort(float a[], int length);
double * dbubblesort(double a[], int length);
long double * ldbubblesort(long double a[], int length);
/* Rounding functions */
int flfloor(float n);
int dfloor(double n);
int ldfloor(long double n);
int flceil(float n);
int dceil(double n);
int ldceil(long double n);
/* Misc */
int order_of_magnitude(double n);
double inv(double n);
unsigned long fact(unsigned int a);
long ffact(int a);
double mod(double a, double b);
/* Exp */
double dpow(double a, int b);
double surd(double x, int n);
double root(double x, int n);
double sqrt(double n);
double exp(double n);
double ln(double n);
double logn(double n, double b);
double log10(double n);
double log2(double n);
/* Abs */
char chabs(char n);
int iabs(int n);
short sabs(short n);
long labs(long n);
float flabs(float n);
double dabs(double n);
long double ldabs(long double n);
/* Trig */
double sin(double n);
double cos(double n);
double tan(double n);
double cot(double n);
double sec(double n);
double csc(double n); 
/* Hyp. Trig */
double sinh(double n);
double cosh(double n);
double tanh(double n);
double coth(double n);
double sech(double n);
double csch(double n);
/* Inv. Trig */
double arcsin(double n);
double aoffsin(double n, int offset);
double arccos(double n);
double aoffcos(double n, int offset);
double arctan(double n);
double aofftan(double n, int offset);
double arccot(double n);
double aoffcot(double n, int offset);
double arcsec(double n);
double aoffsec(double n, int offset);
double arccsc(double n);
double aoffcsc(double n, int offset); 
/* Inv. Hyp. Trig */
double arcsinh(double n);
double arccosh(double n);
double arctanh(double n);
double arccoth(double n);
double arcsech(double n);
double arccsch(double n);
/* Logic */
int f(int a);
int identity(int a);
int not(int a);
int t(int a);
int and(int a, int b);
int or(int a, int b);
int nand(int a, int b);
int nor(int a, int b);
int xor(int a, int b);
int xnor(int a, int b);
int implies(int a, int b);
int iff(int a, int b);
/* Periodic Funtions */
double sawtooth(double a);
double square(double a);
double triangle(double a);
int sign(double a);
/* Number Theory */
int isprime(int a);

/* Binary Comparators */
char chmin(char a, char b)
{
	return a < b ? a : b;
}

int imin(int a, int b)
{
	return a < b ? a : b;
}

short smin(short a, short b)
{
	return a < b ? a : b;
}

long lmin(long a, long b)
{
	return a < b ? a : b;
}

float flmin(float a, float b)
{
	return a < b ? a : b;
}

double dmin(double a, double b)
{
	return a < b ? a : b;
}

long double ldmin(long double a, long double b)
{
	return a < b ? a : b;
}

char chmax(char a, char b)
{
	return a > b ? a : b;
}

int imax(int a, int b)
{
	return a > b ? a : b;
}

short smax(short a, short b)
{
	return a > b ? a : b;
}

long lmax(long a, long b)
{
	return a > b ? a : b;
}

float flmax(float a, float b)
{
	return a > b ? a : b;
}

double dmax(double a, double b)
{
	return a > b ? a : b;
}

long double ldmax(long double a, long double b)
{
	return a > b ? a : b;
}

/* Array Comparators */
char chmina(char a[], int length)
{
	char min = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		min = chmin(min, a[i]);
	}
	return min;
}

int imina(int a[], int length)
{
	int min = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		min = imin(min, a[i]);
	}
	return min;
}

short smina(short a[], int length)
{
	short min = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		min = smin(min, a[i]);
	}
	return min;
}

long lmina(long a[], int length)
{
	long min = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		min = lmin(min, a[i]);
	}
	return min;
}

float flmina(float a[], int length)
{
	float min = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		min = flmin(min, a[i]);
	}
	return min;
}

double dmina(double a[], int length)
{
	double min = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		min = dmin(min, a[i]);
	}
	return min;
}

long double ldmina(long double a[], int length)
{
	long double min = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		min = ldmin(min, a[i]);
	}
	return min;
}

char chmaxa(char a[], int length)
{
	char max = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		max = chmax(max, a[i]);
	}
	return max;
}

int imaxa(int a[], int length)
{
	int max = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		max = imax(max, a[i]);
	}
	return max;
}

short smaxa(short a[], int length)
{
	short max = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		max = smax(max, a[i]);
	}
	return max;
}

long lmaxa(long a[], int length)
{
	long max = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		max = lmax(max, a[i]);
	}
	return max;
}

float flmaxa(float a[], int length)
{
	float max = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		max = flmax(max, a[i]);
	}
	return max;
}

double dmaxa(double a[], int length)
{
	double max = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		max = dmax(max, a[i]);
	}
	return max;
}

long double ldmaxa(long double a[], int length)
{
	long double max = a[0];
	int i;
	for(i = 0; i < length; i++)
	{
		max = ldmax(max, a[i]);
	}
	return max;
}

/* Sorts */
char * chbubblesort(char a[], int length)
{
	char temp;
	int i;
	int j;
	for(i = 0; i < length; i++)
	{
		for(j = 1; j < length - i; j++)
		{
			if(a[j] < a[j - 1])
			{
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	return a;
}

int * ibubblesort(int a[], int length)
{
	int temp;
	int i;
	int j;
	for(i = 0; i < length; i++)
	{
		for(j = 1; j < length - i; j++)
		{
			if(a[j] < a[j - 1])
			{
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	return a;
}

short * sbubblesort(short a[], int length)
{
	short temp;
	int i;
	int j;
	for(i = 0; i < length; i++)
	{
		for(j = 1; j < length - i; j++)
		{
			if(a[j] < a[j - 1])
			{
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	return a;
}

long * lbubblesort(long a[], int length)
{
	long temp;
	int i;
	int j;
	for(i = 0; i < length; i++)
	{
		for(j = 1; j < length - i; j++)
		{
			if(a[j] < a[j - 1])
			{
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	return a;
}

float * flbubblesort(float a[], int length)
{
	float temp;
	int i;
	int j;
	for(i = 0; i < length; i++)
	{
		for(j = 1; j < length - i; j++)
		{
			if(a[j] < a[j - 1])
			{
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	return a;
}

double * dbubblesort(double a[], int length)
{
	double temp;
	int i;
	int j;
	for(i = 0; i < length; i++)
	{
		for(j = 1; j < length - i; j++)
		{
			if(a[j] < a[j - 1])
			{
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	return a;
}

long double * ldbubblesort(long double a[], int length)
{
	long double temp;
	int i;
	int j;
	for(i = 0; i < length; i++)
	{
		for(j = 1; j < length - i; j++)
		{
			if(a[j] < a[j - 1])
			{
				temp = a[j];
				a[j] = a[j-1];
				a[j-1] = temp;
			}
		}
	}
	return a;
}

/* Rounding Functions */
int flfloor(float n)
{
	return (int)(n - (float)mod(n,1));
}

int dfloor(double n)
{
	return (int)(n - mod(n,1));
}

int ldfloor(long double n)
{
	return (int)(n - mod(n,1));
}

int flceil(float n)
{
	return flfloor(n) + 1;
}

int dceil(double n)
{
	return dceil(n) + 1;
}

int ldceil(long double n)
{
	return ldfloor(n) + 1;
}

/* Miscellaneous Functions */
int order_of_magnitude(double n)
{
	int int_n = (int) n;
	int prod = 1;
	int i;
	for(i = 0; ;i++)
	{
		prod *= 0.1;
		if(int_n * prod < 10)
		{
			return i;
		}
	}
}

double inv(double n)
{
	double x0 = n*0.283*order_of_magnitude(n);
	double xp = x0;
	double atol = 1;
	double xn;
	while(dabs(atol) > 1e-10)
	{
		xn = xp + xp*(1-n*xp);
		atol = xn - xp;
		xp = xn;
	}
	return xp;
}

unsigned long fact(unsigned int a)
{
	if(a == 0 || a == 1)
	{
		return 1;
	}
	unsigned long prod = 1;
	unsigned int i;
	for(i = 2; i <= a; i++)
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
		int i;
		for(i = 2; i <= a; i += 2)
		{
			prod *= i;
		}
		return prod;
	}
	long prod = 1;
	int i;
	for(i = 3; i <= a; i += 2)
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
	int i;
	for(i = 0; i < b; i++)
	{
		prod *= a;
	}
	if(neg)
	{
		return 1.0/prod;
	}
	return prod;
}

double surd(double x, int n)
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
	double xp = x /((double) n);
	double x0 = x;
	double atol = 1;
	while(dabs(atol) > 1e-10)
	{
		double xn = (xp * (-1 + n + dpow(xp,-n) * x0))/n;
		atol = xp - xn;
		xp = xn;
	}
	return xp;
}

double root(double x, int n)
{
	return surd(x,n);
}

double sqrt(double n)
{
	return surd(n,2);
}

double exp(double n)
{
	double sum = 0;
	int i;
	for(i = 0; i <= 50; i++)
	{
		sum += dpow(n, i)/fact(i);
	}
	return sum;
}

double ln(double n)
{
	double sum = 0;
	int i;
	for(i = 1; i <= 50; i++)
	{
		 sum += dpow(-1,i)*dpow(n-1,i)/(double)i;
	}
	return sum;
}

double logn(double n, double b)
{
	return ln(n)/ln(b);
}

double log10(double n)
{
	return logn(n,10);
}

double log2(double n)
{
	return logn(n,2);
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
	int i;
	for(i = 1; i <= 30; i++)
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
	int i;
	for(i = 0; i <= 30; i++)
	{
		sum += dpow(n,2*i+1)/fact(2*i+1);
	}
	return sum;
}

double cosh(double n)
{
	double sum = 0;
	int i;
	for(i = 0; i <= 30; i++)
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
	int i;
	for(i = 1; i < 30; i++)
	{
		sum += (double)ffact(2*i - 1) * (dpow(n,2*i+1))/((double) ffact(2*i)*(2*i + 1));
	}
	return sum;
}

double aoffsin(double n, int offset)
{
	return arcsin(n) + 2*PI*offset;
}

double arccos(double n)
{
	return PI/2 - arcsin(n);
}

double aoffcos(double n, int offset)
{
	return arccos(n) + 2*PI*offset;
}

double arctan(double n)
{
	double sum = 0;
	int i;
	for(i = 0; i <= 30; i++)
	{
		sum += dpow(-1,i) * dpow(n,2*i+1) / (2*i + 1);
	}
	return sum;
}

double aofftan(double n, int offset)
{
	return arctan(n) + 2*PI*offset;
}

double arccot(double n)
{
	return PI/2 - arctan(n);
}

double aoffcot(double n, int offset)
{
	return arccot(n) + 2*PI*offset;
}

double arcsec(double n)
{
	return arccos(1/n);
}

double aoffsec(double n, int offset)
{
	return arcsec(n) + 2*PI*offset;
}

double arccsc(double n)
{
	return arcsin(1/n);
}

double aoffcsc(double n, int offset)
{
	return arccsc(n) + 2*PI*offset;
}

/* Inverse Hyperbolic Trigonometric Functions */
double arcsinh(double n)
{
	return ln(n + sqrt(1 + n*n));
}

double arccosh(double n)
{
	return ln(n + sqrt(n*n - 1));
}

double arctanh(double n)
{
	if(n < -1 || n > 1)
	{
		return NaN;
	}
	double sum = 0;
	int i;
	for(i = 1; i < 100; i++)
	{
		sum += dpow(n,2*i-1)/(2*i-1);
	}
	return sum;
}

double arccoth(double n)
{
	if(n > -1 && n < 1)
	{
		return NaN;
	}
	return arctanh(1/n);
}

double arcsech(double n)
{
	return arccosh(1/n);
}

double arccsch(double n)
{
	return arcsinh(1/n);
}

/* Logical Operations */
/* Unary Operations */
int f(int a)
{
	return false;
}

int identity(int a)
{
	return a;
}

int not(int a)
{
	if(a)
	{
		return false;
	}
	return true;
}

int t(int a)
{
	return true;
}

/* Binary Operations */
int and(int a, int b)
{
	if(a && b)
	{
		return true;
	}
	return false;
}

int or(int a, int b)
{
	if(a || b)
	{
		return true;
	}
	return false;
}

int nand(int a, int b)
{
	return not(and(a,b));
}

int nor(int a, int b)
{
	return not(or(a,b));
}

int xor(int a, int b)
{
	if(a != b)
	{
		return true;
	}
	return false;
}

int xnor(int a, int b)
{
	if(a == b)
	{
		return true;
	}
	return false;
}

int implies(int a, int b)
{
	if(a && !b)
	{
		return false;
	}
	return true;
}

int iff(int a, int b)
{
	return xnor(a,b);
}

/* Periodic Functions */
double sawtooth(double a)
{
	return a - dfloor(a);
}

double square(double a)
{
	if(dfloor(mod(a,2)) == 1)
	{
		return -1;
	}
	return 1;
}

double triangle(double a)
{
	return dabs(mod(a,4)-2) - 1;
}

int sign(double a)
{
	if(a < 0)
	{
		return -1;
	}
	if(a > 0)
	{
		return 1;
	}
	return 0;
}

/* Number Theory */
int isprime(int n)
{
	if(n == 1)
	{
		return false;
	}
	if(n == 2 || n == 3)
	{
		return true;
	}
	if(n % 2 == 0 || n % 3 == 0)
	{
		return false;
	}
	int i = 5;
	while(i*i <= n)
	{
		if(n % i == 0 || n % (i+2) == 0)
		{
			return false;
		}
		i += 6;
	}
	return true;
}
