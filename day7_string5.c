#include<stdio.h>
#include<string.h>
int main()
{
 char str[30];
 int l,i;
 printf("input the string\n ");
 gets(str);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]>='a'&& str[i]<='z')
    {
      str[i]=str[i]-32;
    }
  }
  puts(str);
}