#include <stdio.h>
#define len 5
int main(void)
{
    int a[len], i,max;
    printf("Enter array a:\n");
    for (i = 0; i < len; i++)
    {
        scanf("%d", &a[i]);
    }
    max=a[0];
    for (i = 1; i <len; i++)
    {
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("max is %d\n",max);

    return 0;
}