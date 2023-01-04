#include<stdio.h>
void main()
{
        int a[5],b[5],i;
        printf("enter the elements of an array\n");
        for(i=0; i<5; i++)
        {
                scanf("%d", &a[i]);
        }
        for(i=0;  i<5;  i++)
        {
         b[i]=a[i];
        }
	for(i=0; i<5;  i++)
        printf("copy elements are=%d\n",b[i]);
}

