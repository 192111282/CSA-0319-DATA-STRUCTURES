#include<stdio.h>
int main()
{
	int i,n,a[50],key,flag=0;
	printf("enter the number of size");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
    }
	printf("the array is");
	for(i=0;i<=n-1;i++)
	{
	printf("\n%d",a[i]);
    }
	printf("\n enter key element is");
	scanf("%d",&key);
	for(i=0;i<=n;i++)
	{
		if(a[i]==key)
		{
			flag++;
			break;
		}
	}
	    if(flag==1)
		    printf("the key element is in array");
		else
		    printf("the key element is not in array");
}
