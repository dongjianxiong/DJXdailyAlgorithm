//
//  LNHeap.h
//  DJXDailyAlgorithm
//
//  Created by ioser on 2019/4/28.
//  Copyright © 2019年 dongjianxiong. All rights reserved.
//

#ifndef LNHeap_h
#define LNHeap_h

#include <stdio.h>
#include "LNBTree.h"

extern struct LNTreeNode creatHeap(int arr[], int L);

extern void heapSort(struct LNTreeNode *heap);

extern void printHeap(struct LNTreeNode *heap);

#endif /* LNHeap_h */
