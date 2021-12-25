/*CASE STUDY 11
Two friends like to pool their money and go to the ice cream parlor. They always choose two distinct flavors and they spend all of their money.
Given a list of prices for the flavors of ice cream, select the two that will cost all of the money they have.
*/


#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int t;
    scanf("%d",&t);   // t denotes number of test case
    while(t--){
        int m,n,cost[10000],i,j,sum=0,count=0;   // m denotes total money , n denotes total flavour offered, cost[1000] array that store cost of all flavour
        scanf("%d",&m);
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        scanf("%d",&cost[i]);
        for(i=1;i<=n;i++){
            for(j=1;j<=n;j++){
                if(i==j)
                continue;
                sum=cost[i]+cost[j];
                if(sum==m){
                printf("%d %d\n",i,j);
                count++;
                break;
                }
                sum=0;
            }
            if(count>0)
            break;
        }
        
    }
    return 0;
}
