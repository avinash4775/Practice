/*
A kid is going to his Nani house. He wants to carry some toys with him in a carry bag. But he can lift upto 5 kg weight in it. 
Find out the maximum number of toys he can go with, to his nani’s house.
*/


#include <stdio.h>

int main()
{
    int arr[10],i,weight=0,num1=0,count=0;
    printf("Enter the number of toys: ");
    scanf("%d",&num1);
    printf("Enter the weight of each toys:");
    for(i=0;i<num1;i++)
    scanf("%d",&arr[i]);

    
    for(i=0;i<num1;i++){
        if(weight<=5){
            weight=weight+arr[i];
            if(weight<=5)
            count++;
        }
    }
    printf("%d toys will be taken by the boy",count);

    return 0;
}
