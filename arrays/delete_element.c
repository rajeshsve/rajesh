#include<stdio.h>
void main()
{
	int a[5],i;
	printf("enter an element");
	for (i=0;  i<5;  i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=3;  i<5;  i++)
	{
		a[i]=a[i+1];
	}
	for(i=0;  i<5;  i++)
	{
		printf("%d",a[i]);
	}
}

