/* 7. 	Develop an algorithm, implement and execute a C program that reads N
	integer numbers and arrange them in ascending order using Bubble Sort. */

#include <stdio.h>
int main()
{
	int n,i,j,a[10],b[10],temp;
	printf("\n Enter the no. of elements : ");
	scanf("%d",&n);
	printf("\n Enter %d elements ",n);	
	for(i = 0 ; i < n ; i++)
	{	
		scanf("%d",&a[i]);
		b[i]=a[i];
	}
	for(i = 0 ; i < n-1 ; i++)
	{
		for(j = 0 ; j < n-i; j++)
		{
			if(a[j] > a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
		}
	}
	printf("\n The original elements are\n ");
	for(i = 0 ; i < n ; i++)
	printf("%d \n",b[i]);
	printf("\n The Sorted elements are ");
	for(i = 0 ; i < n ; i++)
	printf("%d \n",a[i]);

	return 0;
}
