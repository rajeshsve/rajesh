#include<stdio.h>
void main()
{
	int a[10],i,j,c=0;
	    printf("enter the elements");
	for(i=0;   i<10;   i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0; i<10; i++)
	{
	  for(j=i+1; j<10;  j++)
	  {
		if(a[i]==a[j])
		{
		c++;
		}
	  }
	}
		printf("number of duplicates=%d",c);
	
}

