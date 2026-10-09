#include<stdio.h>
int main()
{ 
   int x,y,o;
   printf("1-a 2-s 3-m 4-d 5-r");
   scanf("%d%d%d",&x,&y,&o);
   switch(o){
     case 1:
         printf("sum%d\n",x+y);
         break;
     case 2:
         printf("diff%d\n",x-y);
         break;
     case 3:
         if(y!=0)
         {
           printf("multi%d\n",x*y);
         }
         else
         { printf("invalid enter a non zero value");}
          break;
      case 4:
          printf("div%f\n",(float)x/y);
          break;
      case 5:
          printf("rem%d\n",x%y);
          break;
      default :
          printf("enter a value from 1 to 5");
          
}
return 0;
   } 
    
   
