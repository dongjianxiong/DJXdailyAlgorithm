//
//  LNHeap.c
//  DJXDailyAlgorithm
//
//  Created by ioser on 2019/4/28.
//  Copyright © 2019年 dongjianxiong. All rights reserved.
//

#include "LNHeap.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

struct LNTreeNode creatHeap(int arr[], int L)
{
    struct LNTreeNode *heap = creatBTreeNode(0);//(struct LNTreeNode *)malloc(sizeof(struct LNTreeNode));
    for (int index = 0; index < L; index ++){
        int cur = arr[index];
        if (cur){
            
        }
    }
    return *heap;
}

void heapSort(struct LNTreeNode *heap)
{
    
}

void printHeap(struct LNTreeNode *heap)
{
    
}
