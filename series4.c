#include<stdio.h>
#include<math.h>
int main()
{
  int i,x,p=1;
  int f=1;
  int s=1;
  printf("input the no.of terms");
  scanf("%d",&x);
 for(i=1;i<=x;i++)
 {
  p=p*x;
  f=f*i;
  s=s+((pow(-1,i)*p)/f);
 }
 printf("%d",s);
  

}