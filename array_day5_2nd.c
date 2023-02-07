#include<stdio.h>
int multi_sum(int *,int );
int main()
{
  int arr[20];
  int n,i,k;
  printf("input the size of arr");
  scanf("%d",&n);
  printf("input the array elemants");
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);

  }
   k=multi_sum(arr,n);
  printf("%d",k);
  return 0;

}
int multi_sum(int ar[],int n) 
{
  int l=0;
  int u=(n-1);
  int mid;
  int sum1=0;
  int sum2=0;
  int multi;
  if(n%2==0){
  mid=(l+u)/2;
  } 
  else{
    mid=(l+u)/2;
    u=n;
  }
  for(int i=0;i<mid;i++)
  {
    sum1=sum1+ar[i];

  }
  for(int j=mid;j<n;j++)
  {
    sum2=sum2+ar[j];
  }
  multi=sum1*sum2;
  return multi;
  


}