#include<stdio.h>
void main()
{
        int a[5],temp,i,j,c=0;
	printf("enter the araay elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
	    for(j=i+1;j<5;j++)
	     {
		 if(a[i]>a[j])
		 {
			 temp=a[i];
			 a[i]=a[j];
			 a[j]=temp;
		 }
	     }
       	 }
	 for(i=0;i<5;i++)
	 {
		 c=0;
		if(a[i]!=a[i+1])
		{
		  c++;
		}
		if(c==1)
		{
			printf("%d",a[i]);
		}
	 }
			



}

