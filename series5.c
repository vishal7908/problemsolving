/**
 * @file series5.c
 * @author VISHAL CHAURASIYA (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-11-14
 * 
 * @copyright Copyright (c) 2022
 * series
 * ====== x-x3/3!+x5/5!-x7/7!..........
 */

#include<stdio.h>
#include<math.h>

int main()
{
  int i,x;
  int n;
  float f;
  float s=0;
  printf("input value x of terms");
  scanf("%d",&x);
  printf("input the no.of terms");
  scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
  f=fact((2*i)-1);
  s=s+ (-1)*pow(-1,i)*pow(x,(2*i-1))/f;
  
   
 }
 printf("%f",s);
 return 0;
  
}
int fact(int y)
{
  int k=1;
  int f1=1;
  for(k=1;k<=y;k++)
  {
    f1=f1*k;
  }
  return f1;
}