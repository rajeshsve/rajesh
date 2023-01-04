#include<stdio.h>
void main()
{
	int a[5],b[5],i,j,c=0;
	printf("enter the A elements");
	for(i=0;  i<5;  i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the B elements");
	for(i=0; i<5;   i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;  i<5;  i++)
	{
	 for(j=0;  j<5;  j++)
	{
		if(a[i]==b[j])
		{
			printf("%d",a[i]);
		}
	}
}	
}
