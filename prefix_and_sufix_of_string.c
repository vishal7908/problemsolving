#include<stdio.h>
#include<string.h>
void prefix(char *,int);
int main()
{
  char str1[30];
  int l1;

  printf("input first string:\n");
  gets(str1);
  l1=strlen(str1);
  prefix(str1,l1);
  sufix(str1,l1);
  return 0;
}
void prefix(char str1[],int l1)
{
  for(int i=0 ; i<l1 ; i++)
  {
    for ( int j = 0; j <=i; j++)
    {
      printf("%c",str1[j]);
    }
    printf("\n");
    
  }
}