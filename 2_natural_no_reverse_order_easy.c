// 2. Write a recursive function to print first N natural numbers in reverse order
#include<stdio.h>
void natural(int n);
int main()
{
	natural(7);
	return 0;
}
void natural(int n)
{
	if(n==0)
	return;	
		printf("%d ",n);
	natural(n-1);	
}
