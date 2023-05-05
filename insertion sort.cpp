#include<stdio.h>
int main()
{
	int a[50];
	int i,n,j,temp;
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=1;i<n;i++)
	{
	  j=i;	
	  {
	  	while(a[j]<a[j-1]&&j>0)
	  	{
	  		temp=a[j];
	  		a[j]=a[j-1];
	  		a[j-1]=temp;
	  		j--;
		  }
	  }
	}
	 printf("the sorted order is ");
		  for(i=0;i<n;i++)
		  printf("\t%d",a[i]);
		  return 0;
}
