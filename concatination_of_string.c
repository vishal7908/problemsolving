#include<stdio.h>
#include<string.h>
void concatination(char *,char *,int,int);
int main()
{
  char str1[30];
  char str2[30];
  int l1,l2;

  printf("input first string:\n");
  gets(str1);
  l1=strlen(str1);
  printf("input second string:\n");
  gets(str2);
  l2=strlen(str2);
  concatination(str1,str2,l1,l2);
  return 0;

}
void concatination(char str1[],char str2[],int l1,int l2)
{
  int i,j;
  for(i=l1,j=0;i<l1+l2;i++,j++)//there is a problem.......
  {
    str1[i]=str2[j];
  }
  str1[i+1]='\0';
  puts(str1);


}