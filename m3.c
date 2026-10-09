#include<stdio.h>
int main()
{
   float p;
   int m;
   scanf("%f%d",&p,&m);
   if(p>=80&&m<=50)
   {
     printf("eligible");
   }
   else
   {
     printf("not eligible");
   }
   return 0;
   }
