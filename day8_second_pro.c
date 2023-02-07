#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,k,t;
  int r;
  printf("input the value of a and b\n");
  scanf("%d%d",&a,&b);
  printf("input the Kth element\n");
  scanf("%d",&k);
  t=pow(a,b);
  printf("%d",t);
while(k!=0 && t>0)
  {
    r=t%10;
    t=t/10;
    k--;  
  }
  if(k!=0 && t==0) 
  {
    printf("index not found");

  }
  else{
    printf("%d",r);
  } 


}