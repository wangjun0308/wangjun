#include <stdio.h>
int main(void)
{
    int x;
    float y;
    printf("Enter x(x>=0):\n");
    scanf("%d",&x);
    if(x<=50){
         y=0.53*x;
    }
    else{
         y=0.58*(x-50)+(0.53*50);
    }
    printf("y=%f\n",x,y);
    return 0;
}