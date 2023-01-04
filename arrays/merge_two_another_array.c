#include<stdio.h>
void main()
{
	int a[10],b[10],i,j;
	printf("enter a arrays\n");
	for(i=0;  i<5;  i++)
	{
		scanf("%d",&a[i]);
	} 
	printf("enter b arrays");
 	for(i=5;   i<10;  i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=5;   i<10;   i++)
	{
		a[i]=b[i];
	}
	for(i=0;  i<10;   i++)
	{
		printf("%d\t",a[i]);
	}
}

