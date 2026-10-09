#include<stdio.h>
int main(){
       int a,b,c,d,tot;
       float dis=1,totafdis;
       printf("enter  4 expenses");
       scanf("\n%d\n%d\n%d\n%d",&a,&b,&c,&d);
       tot=a+b+c+d;
       totafdis=tot-(tot*dis);
       printf("total price=%f",totafdis);
       return 0;}
