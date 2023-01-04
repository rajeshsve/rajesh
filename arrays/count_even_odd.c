#include<stdio.h>
void main()
{
	int a[10],i,even=0,odd=0;
	printf("enter the elements of an array\n");
	for(i=0; i<10; i++)
	{
		scanf("%d", &a[i]);
	}
	for(i=0;  i<10;  i++)
	{
	 if(a[i]%2==0)
		 even++;
	 else
		 odd++;
	}
	printf("no of even num=%d,no of odd num=%d",even,odd);
}
