//
//  LNLink.h
//  DJXDailyAlgorithm
//
//  Created by ioser on 2018/10/11.
//  Copyright © 2018年 dongjianxiong. All rights reserved.
//

#ifndef LNLink_h
#define LNLink_h

#include <stdio.h>
#endif /* LNLink_h */

struct LNDoubleLinkedList{
    int data;
    struct LNDoubleLinkedList *pre;
    struct LNDoubleLinkedList *next;
};



extern struct LNDoubleLinkedList * creatLNDoubleLinkedListNode(int data);
extern void insertToDoubleinkedListNode(struct LNDoubleLinkedList **link, int data);
extern void deleteDoubleinkedListNodeAtIndex(struct LNDoubleLinkedList **link, int index);

extern void traverseDoubleinkedList(struct LNDoubleLinkedList *node);
extern void reverseDoubleinkedList(struct LNDoubleLinkedList **link);


struct LNSingleLinkedList{
    int data;
    struct LNSingleLinkedList *next;
};

extern struct LNSingleLinkedList * creatLNSingleLinkedListNode(int data);
extern void insertToSingleLinkedListNode(struct LNSingleLinkedList **link, int data);
extern void deleteSingleLinkedListNodeAtIndex(struct LNSingleLinkedList **link, int index);
extern void traverseSingleLinkedList(struct LNSingleLinkedList *node);
extern void reverseSingleLinkedList(struct LNSingleLinkedList **link);


