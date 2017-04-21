#include <stdio.h>
int function_max(int a,int b,int c,int max)
{


    //a>b>c----a>b a>c b>c
    //a<b<c----c>b c>a b>a
    //b>a>c-----b>a b>c a>c

    if((a>b)&&(a>c)&&(b>c))
    {
        max=a;

    }

    if((b>a)&&(b>c)&&(a>c))
    {
       max=b;
    }
    else
    {
       max=c;
    }

    return max;


}
int main(void)
{
    int a=6;
    int b=5;
    int c=100;
    int max;
    int maxnum;
    maxnum=function_max(a,b,c,max);
    printf("%d",maxnum);

    return 0;
}

