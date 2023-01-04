#include<stdio.h>
void main()
{
        int a[10],i,neg=0;
        printf("enter the elements of an array\n");
        for(i=0; i<10; i++)
        {
                scanf("%d", &a[i]);
        }
        for(i=0;  i<10;  i++)
        {
         if(a[i]<0)
                 neg++;
        }
        printf("no of negative elements=%d", neg);
}

