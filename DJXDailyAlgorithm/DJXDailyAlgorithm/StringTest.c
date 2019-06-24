//
//  StringTest.c
//  DJXDailyAlgorithm
//
//  Created by ioser on 2018/12/18.
//  Copyright © 2018年 dongjianxiong. All rights reserved.
//

#include "StringTest.h"
#include <String.h>
//判断无符号是否溢出
int uadd_ok(unsigned x,unsigned y)
{
    unsigned sum=x+y;
    return sum>=x;
}

//判断有符号是否溢出
int tadd_ok(int x,int y)
{
    int sum=x+y;
    int neg_over=x<0&&y<0&&sum>=0;
    int pos_over=x>=0&&y>=0&&sum<0;
    return !neg_over&&!pos_over;
}

char * LoopMove (char const *pStr, int steps )

{
    unsigned long len = strlen(pStr);
    unsigned long n = len - steps;
    char tmp[100];
    strcpy (tmp, pStr + n );
    strcpy (tmp + steps, pStr);
    *(tmp + len) = '\0';
    return tmp;
    
//    unsigned long len = strlen(pStr);
//    unsigned long n = len - steps;
//    char tmp[len];
//    strcpy(tmp, pStr + n);
//    strcpy(tmp+steps, pStr);
//    *(tmp + len) = '\0';
//    strcpy(pStr, tmp);
//    //请填充...
}
