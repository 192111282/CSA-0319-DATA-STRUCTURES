#include<stdio.h>
int main()
{
	int a[50];
	int i,n,key,flag=0,first,last,mid;
	printf("enter the no of elements");
	scanf("%d",&n);
	printf("enter the numbers");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the key");n
	scanf("%d",&key);
	first=0;
	last=n-1;
	while(first<=last)
	{
		mid=(first+last)/2;
		if(a[mid]==key)
		{
			flag=1;
			break;
		}
		else if(a[mid]<key)
		first=mid+1;
		else if(a[mid]>key)
		last=mid-1;
    }
	if(flag==1)
	printf("the key element found");
	else
	printf("the key element is not found");
    return 0;	
}
