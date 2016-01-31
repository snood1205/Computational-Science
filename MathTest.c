#include <stdio.h>
#include "Math.h"

void chmin_test()
{
	char a[] = {'a','a','b',(char)0,(char)127};
	char b[] = {'b','a','a','e','e'};
	char e[] = {'a','a','a',(char)0,'e'};
	for(int i = 0; i < 5; i++)
	{
		if(chmin(a[i],b[i]) != e[i])
		{
			printf("Error!\n a: %c\t b: %c\n expected: %c\t actual: %c\n",a[i],b[i],e[i],chmin(a[i],b[i]));
		}
	}
}

void imin_test()
{
	int a[] = {0,1,-1,2532,-2147483648,2147483647};
	int b[] = {1,-1,0,223,2147483647,-2147483647};
	int e[] = {0,-1,-1,223,-2147483648,-2147483647};
	for(int i = 0; i < 6; i++)
	{
		if(imin(a[i],b[i]) != e[i])
		{
			printf("Error!\n a: %d\t b: %d\n expected: %d\t actual: %d\n",a[i],b[i],e[i],imin(a[i],b[i]));
		}
	}
}

int main()
{
	chmin_test();
	imin_test();
	return 0;
}
