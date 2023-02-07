#include<stdio.h>
int least_tasty_chocolates(int *,int );
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
   k=least_tasty_chocolates(arr,n);
  printf("%d",k);

}
int least_tasty_chocolates(int a[],int n)
{
  int l,u;
  l=0;
  u=(n-1);
 while(l!=u){
   if(a[l]>a[u])
  {
    l++;

  }
  else 
  {
    u--;
  }
  return l;
}
}
