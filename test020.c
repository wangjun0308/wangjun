#include<stdio.h>
#define len 5
int findmax(int x[],int n);

int main(void)
{
    int a[len],max,i;
    printf("Enter array a:\n");
    for(i=0;i<len;i++){
        scanf("%d",&a[i]);
    }
    max=findmax(a,len);
    printf("%d",max);
    return 0;
}
int findmax(int x[],int n)
{
    int m,i;
    m=x[0];
    for(i=1;i<n;i++){
        if(x[i]>m){
            m=x[i];
        }
    }
    return m;
}