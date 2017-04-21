#include <stdio.h>
int swap(*a,*b)
{
 int c;
 c=*a;
 *a=*b;
 *b=c;
}
int main(void)
{
     int a=1;
     int b=2;
     swap(&a,&b);
     printf("%d,%d",a,b);
}

