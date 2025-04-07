#include<stdio.h>
int main()
{
 int a[10];
 int n,key,i,mid;
 
 printf("Enter n value:");
 scanf("%d",&n);
 printf("Enter %d array elements:\n",n);
	for(i=0;i<n;i++)
	{
		printf("Enter %d element:",i+1);
		scanf("%d",&a[i]);
	}
	printf("Array Elements are:\n");
	for(i=0;i<n;i++)
	{
 		printf("%d\t",a[i]);
	}
	printf("\n");

 int low=0;
 int high=n-1;
	printf("Enter Key to Search:");
         scanf("%d",&key);
	while(low<=high)
	{
	
		mid=(low+high)/2;
		if(key==a[mid])
		{
			printf("KEY FOUND AT %d POSITION \n",mid);
	                break;
		}
		else if(key<a[mid])
		{
			high=mid-1;
		}
		else if(key>a[mid])
		{
			low=mid+1;
		}
	}
	return 0;
}




