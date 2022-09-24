// 7. Write a recursive function to print squares of first N natural numbers
#include<stdio.h>
void sq(int n);
int main()
{
	printf("-----------------------------------------------\n\n");
	int n;
	printf("enter no.  ");
	scanf("%d",&n);
	printf("-----------------------------------------------\n\n");
	sq(n);
	return 0;
}
void sq(int n)
{
if(n>0)
{
		sq(n-1);
		printf("%d  ",n*n);
		
}
	
	

}
