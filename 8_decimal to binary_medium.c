// 8. Write a recursive function to print binary of a given decimal number
#include<stdio.h>
void decimal_to_binary(int n)
{
	if(n>0)
	{
		decimal_to_binary(n/2);	
	printf("%d",n%2);	
	}
//if(n==0)
//return ;
//
//decimal_to_binary(n>>1);
//printf("%d",n&1);

	

	
}
int main()
{
	int a;
	printf("--------------------------\n");
	printf("enter no.  ");
	scanf("%d",&a);
	
	decimal_to_binary(a);
	return 0;
}
