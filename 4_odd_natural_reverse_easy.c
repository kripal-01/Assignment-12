// 4. Write a recursive function to print first N odd natural numbers in reverse order

#include<stdio.h>
void odd(int);
int main()
{
	
		printf("____________________________\n");	
		printf("____________________________\n\n");
	odd(10);
	return 0;
}
void odd(int a)
{

	    
if(a==0)
return;
			printf("%d  ",2*a-1);
		odd(a-1);
	
	
}
