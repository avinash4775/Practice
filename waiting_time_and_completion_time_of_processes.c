#include <stdio.h>

int main()
{
     int num,arr[20],i,wait[20],comp[20],sum1=0;
     wait[0]=0;
    printf("Enter the number of process array:");
    scanf("%d",&num);
    printf("Enter time  of each process:");
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
   for(i=1;i<num;i++)
   { sum1=sum1+arr[i-1];
      wait[i]=sum1;
   }
   comp[0]=arr[0];
  for(i=1;i<num;i++)
   { 
      comp[i]=wait[i]+arr[i];
   }
   printf("waiting time of each process is:\n");
  
for(i=0;i<num;i++)
{
    printf("%d ",wait[i]);
}
 printf("\ncompletion time of each process is:\n");
  
for(i=0;i<num;i++)
{
    printf("%d ",comp[i]);
}
    return 0;
}
