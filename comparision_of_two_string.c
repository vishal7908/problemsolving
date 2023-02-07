#include<stdio.h>
#include<string.h>
int lencmp(char *,char *,int,int);
int main()
{
  char str1[30];
  char str2[30];
  int l1,l2,t;
  printf("input first string:\n");
  gets(str1);
  l1=strlen(str1);
  printf("input second string:\n");
  gets(str2);
  l2=strlen(str2);
  t=lencmp(str1,str2,l1,l2); 
  if(t==1)
  {
    printf("successfully compare");
  }
  else{
    printf("Not compareble!");
  } 

}
int lencmp(char str1[],char str2[],int l1,int l2)
{
  int i,j;
  int count=0;
  if(l1!=l2)
  {
    return 0;
  }
  else
  {
    for(i=0,j=0;i<l1;i++,j++)
    {
      if(str1[i]!=str2[j])
      {
        return 0;
      }
      
    }
    
  }
  return 1;


}