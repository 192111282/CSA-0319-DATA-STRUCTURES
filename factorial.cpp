#include<stdio.h>
int main()
{
	int fact=1,n,i;
	printf("enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	fact=fact*i;
	printf("factorial of %d is %d",n,fact);
	return 0;
}
