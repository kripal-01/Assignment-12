// 10. Write a recursive function to print reverse of a given number
#include<stdio.h>
void rev(int n)
{
	if(n>0){
		printf("%d",n%10);
		rev(n/10);
	}

}
int main()
{int a;
printf("enter no   ");
scanf("%d",&a);
	rev(a);
	return 0;
}
