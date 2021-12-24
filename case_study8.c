/*
Two arrays are provided to you as input, you need to print the pairs (a,b) such that a + b = k, where k is a value input by the user.
Note: No repetition of pairs should be there.

Constraints: Integer values are between 0 to 99 and 0<= k < 200
‘a’ is in array 1
‘b’ is in array 2 
If no such pair exists then print NIL
No repetition of pairs should be there.
*/

#include <stdio.h>

int main()
{
    int arr1[20],arr2[20],num1,num2,value=0,sum=0,i,j,count=0;
    printf("Enter the no of  elments in the array 1: ");
    scanf("%d",&num1);
    printf("Enter the   elments in the array 1: ");
    for(i=0;i<num1;i++)
    scanf("%d",&arr1[i]);
    printf("Enter the no of  elments in the array 2: ");
    scanf("%d",&num2);
    printf("Enter the   elments in the array 2: ");
    for(i=0;i<num2;i++)
    scanf("%d",&arr2[i]);
    
    printf("Enter the value that you want as sum: ");
    scanf("%d",&value);
    
    for(i=0;i<num1;i++){
        for(j=0;j<num2;j++)
        {
            sum=arr1[i]+arr2[j];
            if(sum==value){
            printf("%d,%d\n",arr1[i],arr2[j]);
             count++;
             break;
            }
            sum=0;
        }
    }
    if(count==0){
        printf("There is no any pair available");
    }
    
    return 0;
}
