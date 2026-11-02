#include<stdio.h>
int main(){
  int n;
  scanf("%d",&n);
  int arr[n];
  for(int i=0;i<n;i++){
     scanf("%d",&arr[i]);}
  int l=arr[0],s=arr[0];
  for(int i=0;i<n;i++){
  if(arr[i]>l){
    l=arr[i];}}
  for(int i=0;i<n;i++){
   if(arr[i]<s){
     s=arr[i];}}
 printf("largest= %d\n", l);
 printf("smallest %d", s);
 return 0;
    }
