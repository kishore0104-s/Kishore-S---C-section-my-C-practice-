#include<stdio.h>
int main(){
  int wt,na,nc,wc=50,wn=75;
  printf("enter the max cap,no of ad and no of child");
  scanf("%d%d%d",&wt,&na,&nc);
  if((na* wn)+(nc*wc)>wt){
      printf("the boat is unstable");}
  else{
      printf("the boat is stable");}
  return 0;}
   
