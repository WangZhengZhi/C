//
//  main.c
//  words_number
//
//  Created by 王正直 on 2017/3/29.
//  Copyright © 2017年 王侯将相. All rights reserved.
//

#include <stdio.h>
#define MAX 100
int main(void)
{
    char str[MAX];
    printf("please enter u words");
    gets(str);
    int i;
    int j=1;
    for(i=0;str[i]!='\0';i++)
    {
       if (str[i]==' ')
       {
           j++;
       }
           
    }
    printf("%d\n",j);
    
    
}
