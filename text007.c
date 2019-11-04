#include<stdio.h>
int main(void)
{
    int max,i, j ,k;
    printf("Enter i,j,k:\n");
    scanf("%d%d%d",&i,&j,&k);
    if(i>j){
        if(i>k)
        max=i;
        else{
            max=k;
        }
    }
    else{
        if(j>k)
        max=j;
        else{
            max=k;
        }
    
    }
    printf("max = %d",max);

    return 0;
}