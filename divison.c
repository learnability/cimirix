#include<stdio.h>
float div(float m, float n){
  if(n!=0)
  div= m/n;
  return div;
  }
  
  int main(){
  float a,b,ans;
  printf("Enter ur first number\n");
  scanf("%f",&a);
  printf("Enter ur second number \n");
  scanf("%f",&b);
  ans=div(a,b)
  printf("%f", ans);
  return 0;
  }
