//
//  DJXStack.c
//  DJXDailyAlgorithm
//
//  Created by umeng on 16/8/1.
//  Copyright © 2016年 dongjianxiong. All rights reserved.
//

#include "DJXStack.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

#define DJX_IncreaseStackSize 10


DJXStack * InitStack(DJXStack *djx_s, int stackSize)
{
    
    djx_s->base = (DJX_ElemType *)malloc(sizeof(DJX_ElemType) *stackSize);
    if (!djx_s->base) {
        exit(1);
    }
    djx_s->top = djx_s->base;
    djx_s->stackSize = stackSize;
    return djx_s;
}

void PushStack(DJXStack *djx_s, DJX_ElemType data)
{
    if (djx_s->top - djx_s->base >= djx_s->stackSize) {
        djx_s->base = realloc(djx_s->base, sizeof(DJX_ElemType)*(djx_s->stackSize + DJX_IncreaseStackSize));
        if (!djx_s->base) {
            exit(1);
        }
        djx_s->stackSize += DJX_IncreaseStackSize;
    }
    *(djx_s->top) = data;
    djx_s->top++;

}

void PopStack(DJXStack *djx_s, DJX_ElemType *data)
{
    if (djx_s->top == djx_s->base) {
        return;
    }
    *data = *(--djx_s->top);
}

void ClearStack(DJXStack *djx_s)
{
    djx_s->top = djx_s->base;
}

void DestroyStack(DJXStack *djx_s)
{
    while (djx_s->top != djx_s->base) {
        DJX_ElemType *top = djx_s->top;
        djx_s->top --;
        top = NULL;
    }
    free(djx_s->top);
}

int LenOfStack(DJXStack *djx_s)
{
    return (int)(djx_s->top - djx_s->base);
}

void TraverseStack(DJXStack *djx_s)
{
    DJX_ElemType *stack = djx_s->top;
    while (stack != djx_s->base) {
        stack--;
        printf("---%d----",*(stack));
    }
}
