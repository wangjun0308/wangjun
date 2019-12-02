#include<stdio.h>
int main(void)
{
    int a,b,c;
    for(a=0;a<=20;a++){
        for(b=0;b<=33;b++){
            c=100-a-b;{
                if(a*5+b*3+c/3.0==100){
                    printf("a:%d,b:%d,c:%d\n",a,b,c);
                }

            }

        }

    }
    return 0;
}