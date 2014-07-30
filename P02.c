/* 2. 	Design and develop an algorithm to find the reverse of an integer
	number NUM and check whether it is PALINDROME or NOT. Implement
	a C program for the developed algorithm that takes an integer
	number as input and output the reverse of the same with suitable
	messages. Ex: Num: 2014, Reverse: 4102, Not a Palindrome */
	
#include <stdio.h>
void main()
{
	int n,rev=0,rem,a;
	printf("Enter a number : ");
	scanf("%d",&n);
	a = n;
	while(n != 0)
	{
		rem=n%10;
		rev= rev*10+rem;
		n = n / 10;
	}
	if(a==rev)
		printf("\n The given Number %d is Palindrome",a);
	else
  	printf("\n The given Number %d is not Palindrome",a);
}
