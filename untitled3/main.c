#include <stdio.h>
//比较三个数字中MAX MIN 使用指针
int function(int num1,int num2,int num3,int *min,int *max)
{
    *max=num1;
    *min=num2;
    if(*max<num2)
    {
        *max=num2;
    }
    if(*max<num3)
    {
        *max=num3;
    }
    if(*min>num1)
    {
        *min=num1;
    }
    if(*min>num3)
    {
        *min=num3;
    }
    printf("max=%d,min=%d",*max,*min);
}

int main()
{
    int *min;
    int *max;
    int num1=8,num2=10,num3=3;
    function(num1,num2,num3,&max,&min);


}
