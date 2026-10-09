#include<stdio.h>
int main()
{
   int x,y,z,r,pr,pro;
   float per;
   scanf("%d%d%d%d",&x,&y,&z,&r);
   pr=x*y;
   pro=(pr-(z*x))-r;
   per=(pro/pr)*100;
   printf("profit percentage%f",per);
   return 0;
   }
          
