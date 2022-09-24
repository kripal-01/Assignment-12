// 3. Write a recursive function to print first N odd natural numbers
#include<stdio.h>
void odd(int);
int main()
{
		printf("-----------------------------------\n");
	odd(10);
	return 0;
}
void odd(int a)
{

	 if(a==0) 
	 return;  

		odd(a-1);
		printf("%d  ",2*a-1);
	
}
