#include<stdio.h>
int main(void)
{
   float x;
   int t,y;
   printf("Enter x,t:\n");
   scanf("%f%d",&x,&t);
   if(x<=3){
       y=10+t/5*2;
   }
   if(x>3&&x<=10){
       y=10+(x-3)*2+t/5*2;
   }
   if(x>10){
       y=10+7*2+(x-10)*3+t/5*2;
   }
   printf("y=%d\n",y);
   return 0;
}
