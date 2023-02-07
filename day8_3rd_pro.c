/*  Given a non-negative integer num, repeatedly add all its digits until the result has only one digit. 
 For example, if we conisder 98, we get 9+8 = 17 after first addition. Then we get 1+7 = 8. 
 We stop at this point because we are left with one digit.*/

#include<stdio.h>
#include<math.h>
 int add_sum_of_digit(int);
int main()
{
  int n,t;
  printf("input the no.");
  scanf("%d",&n);
  do
  {
    n=add_sum_of_digit(n);

  } while (n>9);
  
  printf("%d",n);  

}
int add_sum_of_digit(int n)
{
  int r;
  
}