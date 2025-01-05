#include<stdio.h>
int main()
{
    int a[10],i,sum=0;
    printf("Enter 10 numbers of an array:\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        sum=sum+a[i];
    }
    printf("Sum of 10 numbers of an array is %d\n",sum);
    return 0;
}