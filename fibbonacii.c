#include <stdio.h>

int main()
{
    
    int sum[50],num=0,i;
    printf("Enter the number of elements in the fibbonacci :");
    scanf("%d",&num);
    sum[0]=0;
    sum[1]=1;
    for(i=2;i<num;i++)
    {
        sum[i]=sum[i-1]+sum[i-2];
    }
    for(i=0;i<num;i++)
    printf("%d  ",sum[i]);

    return 0;
}
