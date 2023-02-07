//1-x2/2!+x4/4!-x6/6!.....
#include<stdio.h>
#include<math.h>
int fact(int);
int main()
{
  int i,n,x;
  int f;
  float sum=0;
  printf("input the no. of terms:\n");
  scanf("%d",&n);
  printf("input the value of x\n");
  scanf("%d",&x);
  for(i=1;i<=n;i++){
  f=fact((2*i)-2);
  sum=sum+(((-1)*pow(-1,i))*(pow(x,(2*i-2))))/f;
  }
  printf(" sum of series = %f",sum);

}
int fact(int n)
{
 
  if(n==0){
    return 1;
  }
  else{
     int f=1;

  for(int i=1;i<=n;i++)
  {
   
   f=f*i;
  }
  return f;
  }
}