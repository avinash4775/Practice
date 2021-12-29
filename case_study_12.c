/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.

You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

*/

#include <stdio.h>

int main()
{
    int price[20],j=0,n,min=0,max=0,profit=0;
    printf("Enter the number of days: ");
    scanf("%d",&n);
    printf("Enter the price of stock on each day:");
    for(j=0;j<n;j++)
    scanf("%d",&price[j]);
    min=price[0];
    max=price[0];
    for(j=0;j<n;j++)
    {
        if(price[j]<min)
        min=price[j];
        else if(price[j]>max)
        max=price[j];
        }
        
        profit=max-min;
        printf("Maximum profit that we can achieve is %d ",profit);
    

    return 0;
}
