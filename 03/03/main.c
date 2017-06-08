//
//  main.c
//  03
//
//  Created by 王正直 on 2017/4/4.
//  Copyright © 2017年 王侯将相. All rights reserved.
//

#include <stdio.h>
int main(void)
{
    int str1[]={1};
    int str2[]={1,2,3};
    int str3[]={1,2,3,4,5};
    int str4[]={1,2};
    int str[100];
    int i;
    for(i=0;i<sizeof(str3);i++)
    {
        str[i]=str3[i];
        printf("%d",str[i]);
    }
    printf("hello world");
    
    
}
