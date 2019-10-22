#include<stdio.h>
int main(void)
{
    int distance,time;
    printf("Enter time:\n");
    scanf("%d",&time);
    distance = 1.0/2*10*time*time;
    printf("Distance = %d,\n",distance);

    return 0;
}