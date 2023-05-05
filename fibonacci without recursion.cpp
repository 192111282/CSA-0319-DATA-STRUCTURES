#include<stdio.h>
int main()
{
	int a,b,c,i,n;
		a=0;
		b=1;
		
		printf("Enter the value of n");
		scanf("%d",&n);
		
		printf("%d\t%d\t",a,b);
		
		for(i=3;i<=n;i++)
		{
			c=a+b;
			printf("%d\t",c);
			a=b;
			b=c;
		}
		return 0;
}
