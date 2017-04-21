#include <stdio.h>
int swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;


}//交换2个数字的值

int main()
{
    int *a;
    int *b;
  printf("input u number\n");
    scanf("%d,%d",&a,&b);
    swap(&a,&b);
    printf("after swap %d,%d",a,b);

}
