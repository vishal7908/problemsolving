#include<stdio.h>
#include<math.h>
int main()
{
    int i,s=0,x;
    printf("input the value of x");
    scanf("%d",&x);
    for(i=0;i<=10;i++)
    {
        s=s+pow(x,i);

    }
    printf("%d",s);
    
}