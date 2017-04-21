#include <stdio.h>
#include <math.h>
int angle(int a,int b,int c,int *type)
{

    if((a*a+b*b==c*c)||(a*a+c*c==b*b)||(b*b+c*c==a*a))
    {
        *type=1;//1代表直角三角形
    }
    if((a==b)||(a==c)||(b==c))
    {
        if((a==b)&&(b==c)&&(a==c))
        {
          *type=3;//3代表等边三角形
        }

        else
        {
            *type=2;//2代表等腰三角形
        }


    }

    /*switch(*type)
{
    case 1:printf("直角三角形");
        break;
    case 2:printf("等腰三角形");
        break;
    case 3:printf("等边三角形");
        break;
    default:printf("输入有错误");
}*/




}

int main()
{
    int a=4;
    int b=4;
    int c=4;
    int *type;
    int style;
    angle(a,b,c,&type);
    printf("%d",type);
    style=type;

    switch(style)
    {
        case 1:printf("直角三角形");
            break;
        case 2:printf("等腰三角形");
            break;
        case 3:printf("等边三角形");
            break;
        default:printf("输入有错误");
    }



}

