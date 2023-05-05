#include<stdio.h>
int fact(int n)
{
	if(n==0)
	return 1;
	else if(n==1)
	return 1;
	else
	return(fact(n)*fact(n-1));
}
int main()
{
int n,i;
printf("enter the number");
scanf("&d",&n);
for(i=n;i!=0;i--)
{
printf("factorial of &d ",fact(i));
}
}


