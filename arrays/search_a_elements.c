#include<stdio.h>
void main()
{
	int a[20],i,size,key,c=0;
	printf("enter the size");
	scanf("%d",&size);
	printf("enter the elements of an array");
	for (i=0;   i<size;   i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the key");
	scanf("%d",&key);
	for(i=0;   i<size;  i++)
	{
		if(a[i]==key)
		c++;
	}
	if(c==1)
	 printf("key found=%d",key);
	else
	  printf("key not found=%d",key);
}
