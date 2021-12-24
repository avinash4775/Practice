/*
Given an array of n numbers.
The problem is to move all the 0’s to the end of the array while maintaining the order of the other elements.
Only single traversal of the array is required.
*/

#include <stdio.h>

int main(){
    int arr[20],i=0,num1,arr2[20],j=0;
    printf("Enter the no of  element in the array:");
    scanf("%d",&num1);
    printf("Enter the element of the array: ");
    for(i=0;i<num1;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num1;i++){
        if(arr[i]!=0){
        arr2[j]=arr[i];
        j++;
        }
    }
   
    for(i=j;i<num1;i++){
        arr2[j++]=0;
    }
   
    for(i=0;i<num1;i++)
    printf("%d,",arr2[i]);
   
    return 0;
}
