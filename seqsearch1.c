#include<stdio.h>
#include<string.h>
int main()
{
	char a,key;
	int i,n;
	printf("enter the string :");
	scanf("%s",a);
	
	
	printf("your string is %s\n",a);
	n=strlen(a);
	
	printf("\nenter key to search: ");
	scanf("%s",key);
	for(i=0;i<n;i++)
	{
	  if(a[i]==key)
	  {
	  printf("the enter key %s is present at position %d\n",key,i);
	   break;                              //break 
	  }
	  
	}
	return 0;
	}
