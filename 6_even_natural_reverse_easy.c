// 6. Write a recursive function to print first N even natural numbers in reverse order


#include<stdio.h>
void even(int n);
int main()
{
	printf("-----------------------------------------------\n\n");
	int n;
	printf("enter no.  ");
	scanf("%d",&n);
	printf("-----------------------------------------------\n\n");
	even(n);
	return 0;
}
void even(int n)
{
	if(n==0)
	return ;
		printf("%d  ",2*n);
		even(n-1);
		
	

}
