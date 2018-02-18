/* 8. 	Develop, implement and execute a C program that reads two matrices
	A (m x n) and B (p x q) and Compute product of matrices A and B.
	Read matrix A and matrix B in row major order and in column major
	order respectively. Print both the input matrices and resultant matrix
	with suitable headings and output should be in matrix format only.
	Program must check the compatibility of orders of the matrices for
	multiplication. Report appropriate message in case of incompatibility. */


#include <stdio.h>
void main()
{
	int a[10][10],b[10][10],c[10][10];
	int m,n,p,q,i,j,k;
	printf("\n Enter the order of the matrix A :");
	scanf("%d%d",&m,&n);
	printf("\n Enter the order of the matrix B :");
	scanf("%d%d",&p,&q);
	if(n==p)
	{
		printf("\n Enter the elements of matrix A \n");
		for(i = 0 ; i < m ; i++)
		{
			for(j = 0 ; j < n ; j++)
  			scanf("%d",&a[i][j]);
		}
		printf("\n Enter the elements of matrix B \n");
	  for(i = 0 ; i < p ; i++)
		{
			for(j = 0 ; j < q ; j++)
		  	scanf("%d",&b[i][j]);
		}
		for(i = 0 ; i < m ; i++)
		{
			for(j = 0 ; j < q ; j++)
			{
				c[i][j]=0;
				for(k = 0 ; k < n ; k++)
			  	c[i][j] += a[i][k] * b[k][j];
			}
		}
		printf("\n MATRIX A \n");
		for(i = 0 ; i < m ; i++)
		{
			for(j = 0 ; j < n ; j++)
			{
				printf(" %d \t", a[i][j]);
			}
			printf("\n");
		}	
		printf("\n MATRIX B \n");
		for(i = 0 ; i < p ; i++)
		{
			for(j = 0 ; j < q ; j++)
			{
				printf(" %d \t", b[i][j]);
			}
			printf("\n");
		}
		printf("\n MATRIX C \n");
		for(i = 0 ; i < m ; i++)
		{
			for(j = 0 ; j < q ; j++)
			{
				printf(" %d \t", c[i][j]);
			}
			printf("\n");
		}
	}
	else
		printf("Matrix A & B is not multiplicable");
}
