/* 3b. Design and develop a C program to read a year as an input and find
	whether it is leap year or not. Also consider end of the centuries. */
	
#include<stdio.h>
int main()
{
  int year;
  system("clear");
  printf("\nEnter a 4 digit year:\t");
  scanf("%d",&year);
  if(year<=999 || year>9999)					//condition to check if it is not a 4 digit year
	{
		printf("\nNot a 4 digit year\n");
		exit(0);
	}
	else
	{
	  if((year%4==0)&&(year%100!=0)||year%400==0)
	    printf("\nIt is a Leap year\n");
	  else
	    printf("\nIt is not a leap year\n");
	}
	return 0;
}
