//  Created by www.runoob.com on 15/11/9.
//  Copyright ? 2015年 菜鸟教程. All rights reserved.

 
#include<stdio.h>
int main()
{
    void fun();
    for(int i=0;i<3;i++)
        fun();
    return 0;
}
void fun()
{
    int i=0;
    static int static_i=0;
    printf("i=%d\n",i);
    printf("static_i=%d\n",static_i);
    i++;
    static_i++;
}
