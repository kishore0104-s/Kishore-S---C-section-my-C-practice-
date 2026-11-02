#include<stdio.h>
int main(){
int n,s;
  scanf("%d%d",&n,&s);
  int arr[n],f=0;
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);}
  for(int i=0;i<n;i++){
    if(arr[i]==s){
      f++;
      }break;
    }if(f==0){
        printf("not found");}
     else{
        printf("found");}
      return 0;
      }
