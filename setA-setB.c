#include <stdio.h>

int main()
{
    int setA[20],setB[20],i,j,num1=0,num2=0,count=0,count1=0;
    printf("Enter the number of element in the setA: ");
    scanf("%d",&num1);
    printf("Enter the elements in setA: ");
    for(i=0;i<num1;i++)
    scanf("%d",&setA[i]);
    
    printf("Enter the number of element in the setB: ");
    scanf("%d",&num2);
    printf("Enter the elements in setB: ");
    for(i=0;i<num2;i++)
    scanf("%d",&setB[i]);
    
    printf("Elements of setA that doesn't belong to setB are: ");
    
    for(i=0;i<num1;i++){
        for(j=0;j<num2;j++){
            if(setA[i]==setB[j])
            count++;
        }
        if(count==0){
        printf("%d",setA[i]);
        count1++;
        }
        count=0;
    }
    
    if(count1==0)
    printf("\nNo any element");


    return 0;
}
