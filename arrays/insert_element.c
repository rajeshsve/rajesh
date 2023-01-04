#include<stdio.h>
void main()
{
	int a[6],i,pos,num;
	 printf("enter the  position,number");
	 scanf("%d%d",&pos,&num);
	printf("enter the  element");
	for(i=0;  i<5;  i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=5;  i>pos;  i--)
	{
		a[i]=a[i-1];
	
	}
	a[pos]=num;
	for(i=0;  i<6;  i++)
	{
		printf("%d\n",a[i]);
	}
}
