#include<stdio.h>
#include<math.h>
int isprime(int x)
{
    int i;
    for(i=2;i<=sqrt(x);i++){
        if(x%i==0){
            return 0;
        }
    }return 1;

}
int main(void)
{
    int i,flag;
    for(i=2;i<=100;i++){
        flag=isprime(i);
        if(flag==1){
            printf("%5d",i);
        }
    }
    return 0;
}