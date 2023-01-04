#include<stdio.h>
void main()
{
	int a[10],i,j,c,x;
	printf("enter an element");
	for(i=0;  i<10;  i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;  i<10;  i++)
	{
		c=0;
	  for(j=0;  j<10;  j++)
	  {
		  if(a[i]==a[j])
			  c++;
		//  printf("%d\t%d\n",a[i],a[j]);//
		  x=a[i];
	  }
	if(c==1)
		printf("unique number is=%d\n",x);
	}
}
