#include<stdio.h>
int main(){
 int n,s1=0,s2=0;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);}
  for(int i=0;i<n;i++){
     if(arr[i]%2==0){
       s1=s1+arr[i];}
     else{
       s2=s2+arr[i];}
     }
  printf("the sum of even: %d\n",s1);
  printf("the sum of odd: %d\n",s2);
  return 0;}
