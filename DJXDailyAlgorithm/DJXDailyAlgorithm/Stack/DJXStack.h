//
//  DJXStack.h
//  DJXDailyAlgorithm
//
//  Created by umeng on 16/8/1.
//  Copyright © 2016年 dongjianxiong. All rights reserved.
//

#ifndef DJXStack_h
#define DJXStack_h

#include <stdio.h>

#endif /* DJXStack_h */

#define DJX_StackSize 100

typedef int DJX_ElemType;//数据类型

/**
 *定义顺序栈结构
 */
typedef struct {

    DJX_ElemType *top;//栈顶
    DJX_ElemType *base;//栈底
    int stackSize;//栈容量
    
}DJXStack;

/**
 * 初始化顺序栈
 */
extern DJXStack * InitStack(DJXStack *djx_s, int stackSize);

/**
 * 入栈操作
 */
extern void PushStack(DJXStack *djx_s, DJX_ElemType data);

/**
 * 出栈操作
 */
extern void PopStack(DJXStack *djx_s, DJX_ElemType *data);

/**
 * 清空栈
 */
extern void ClearStack(DJXStack *djx_s);

/**
 * 销毁栈
 */
extern void DestroyStack(DJXStack *djx_s);

/**
 * 当前栈容量
 */
extern int LenOfStack(DJXStack *djx_s);

extern void TraverseStack(DJXStack *djx_s);