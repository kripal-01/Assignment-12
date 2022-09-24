// 9. Write a recursive function to print octal of a given decimal number
#include<stdio.h>
void decimal_to_binary(int n)
{
	if(n>0)
	{
		decimal_to_binary(n/8);	
	printf("%d",n%8);	
	}


	

	
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
