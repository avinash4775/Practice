
#include <stdio.h>

int palindrome(int num)
{

    int data=num, rev=0,val=0;
    
    while(num!=0){
        val=num%10;
        rev=rev*10+val;
        num=num/10;
    }

    if(data==rev)
    printf("multiplication is palindrome");
    else
    printf("multiplication is not palindrome");

    return 0;
}

int main(){
    int n1,n2,multi=0;
    printf("Enter the two number: ");
    scanf("%d %d",&n1,&n2);
    multi=n1*n2;

    palindrome(multi);
}


