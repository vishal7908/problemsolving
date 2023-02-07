#include<stdio.h>
#include<string.h>
void rev_str(char *);
int main()
{
 char str[30];
 int l,i;
 printf("input the string\n ");
 gets(str);
 rev_str( str);
  return 0;

}
void rev_str(char str[])
{
  int u;
  int l=0;
  char temp;
  u=strlen(str);
  printf("%d",u);
  while(l<u)
  {
    temp=str[l];
    str[l]=str[u];
    str[u]=temp;
    l++;
    u--;
    
  }
  puts(str);
 


}