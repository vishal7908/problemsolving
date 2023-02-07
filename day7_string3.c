#include<stdio.h>
#include<string.h>
int main()
{
 char str[30];
 int l,i;
 printf("input the string\n ");
 gets(str);
 l=strlen(str);
 int i=0;
 int count=0;
 while(str[i]!='\0')
 {
  if(str[i]==" ")
  {
    count++;
  }
 }
 printf("%d",count+1);

}