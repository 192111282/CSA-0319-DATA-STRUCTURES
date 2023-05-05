#include<stdio.h>
int main()
{
	int i,j,k,m,n,l,a[5][5],b[5][5],c[5][5];
	printf("enter the number rows and coloms of n,m,l ");
	scanf("%d%d%d",&n,&m,&l);
	printf("enter the elements of a");
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
	printf("enter the elements of b");
	for(j=0;j<m;j++)
	{
		for(k=0;k<l;k++)
			scanf("%d",&b[j][k]);
	}
	for(i=0;i<n;i++)
	{
		for(k=0;k<l;k++)
		{
			c[i][k]=0;
			for(j=0;j<m;j++)
			{
				c[i][k]=c[i][k]+a[i][j]*b[j][k];
			}
		}
	}
	printf("\n\n Output C Matrix\n\n");
	
	for(i=0;i<n;i++)
	{
		for(k=0;k<l;k++)
		{
			printf("%d\t",c[i][k]);
		}
		printf("\n");
	}
	
}
