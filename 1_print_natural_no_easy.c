// Recursion in C Language
// 1. Write a recursive function to print first N natural numbers
#include<stdio.h>
void natural(int n);
int main()
{
	natural(7);
	return 0;
}




void natural(int n)
{
	if(n>0)
	{
	natural(n-1);	
printf("%d ",n);	
	}


}
