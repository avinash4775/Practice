#include <stdio.h>

int main()
{
    int arr[20];
    int i=0,j,count=0,num;
    printf("Enter the number of element in the array: ");
    scanf("%d",&num);
    printf("Enter the element of the array: ");
    for(i=0;i<num;i++)
    scanf("%d",&arr[i]);
    printf("Number that are not repeated in array: ");
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(arr[i]==arr[j])
            count++;
        }
        if(count==1)
        printf("%d, ",arr[i]);
        count=0;
    }
    
    return 0;
}
