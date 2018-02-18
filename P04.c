/* 4. 	Design and develop an algorithm to evaluate polynomial 
	f(x) = (a4)(x^4) + (a3)(x^3) + (a2)(x^2) + (a1)x + a0, for a given 
	value of x and its coefficients using Horner’s method. Implement a 
	C program for the same and execute the program with different set of
	values of coefficients and x. */



#include <stdio.h>
int main()
{
	int n,i,x,a[10],poly=0;
	printf("\n Enter the degree of the polynomial : ");
	scanf("%d",&n);
	printf("\n Enter the %d coefficients\n",n+1);
	for(i = 0 ; i <= n ; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n Enter the value of x :");
	scanf("%d",&x);
	poly=a[0];
	for(i = 1 ; i <= n ; i++)
	{
		poly = poly* x+a[i];
	}
	printf("\n The sum of polynomial = %d",poly);

	return 0;
}
