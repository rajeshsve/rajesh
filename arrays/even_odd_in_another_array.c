#include<stdio.h>
void main()
{
	int a[10],b[10],c[10],i;
	printf("enter the A elements");
	for(i=0;   i<10;   i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;   i<10;   i++)
	{
		if(a[i]%2==0)
			b[i-1]=a[i];
		else
			c[i-1]=a[i];
	}
	printf("even numbers of an array\n");
	for(i=0;   i<10;   i++)
	{
		printf("%d\t",b[i]);
	}
	printf("\nodd numbers of an array");
	for(i=0;  i<10;  i++)
	{
		printf("%d\t",c[i]);
	}
}
