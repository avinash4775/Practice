
#include <stdio.h>

int main()
{
    int arr1[20],arr2[20];
    int i=0,j,count=0,num1,num2;
    printf("Enter the number of element in the arr1: ");
    scanf("%d",&num1);
    printf("Enter the element of the arr1: ");
    for(i=0;i<num1;i++)
    scanf("%d",&arr1[i]);
    
    printf("Enter the number of element in the arr2: ");
    scanf("%d",&num2);
    printf("Enter the element of the arr2: ");
    for(i=0;i<num2;i++)
    scanf("%d",&arr2[i]);
    
    printf("Elements  that are common  in arr1 and arr2 : ");
    for(i=0;i<num1;i++){
        for(j=0;j<num2;j++){
            if(arr1[i]==arr2[j])
            {
            count++;
             break;
            }
            }
        if(count>0)
        printf("%d, ",arr1[i]);
        count=0;
    }
    
    return 0;
}
