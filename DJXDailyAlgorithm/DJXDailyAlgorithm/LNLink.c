//
//  LNLink.c
//  DJXDailyAlgorithm
//
//  Created by ioser on 2018/10/11.
//  Copyright © 2018年 dongjianxiong. All rights reserved.
//

#include "LNLink.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

struct LNDoubleLinkedList * creatLNDoubleLinkedListNode(int data)
{
    struct LNDoubleLinkedList *node = (struct LNDoubleLinkedList *)malloc(sizeof(struct LNDoubleLinkedList));
    if (!node) {
        return NULL;
    }
    node->data = data;
    node->pre = NULL;
    node->next = NULL;
    return node;
}

void insertToDoubleinkedListNode(struct LNDoubleLinkedList **link, int data)
{
    if (*link == NULL) {
        *link = creatLNDoubleLinkedListNode(data);
    }else{
        struct LNDoubleLinkedList *newNode = creatLNDoubleLinkedListNode(data);
        struct LNDoubleLinkedList *next = *link;
        while (next->next != NULL) {
            next = next->next;
        }
        newNode->data = data;
        newNode->pre = next;
        next->next = newNode;
        newNode->next = NULL;
    }
}

void deleteDoubleinkedListNodeAtIndex(struct LNDoubleLinkedList **link, int index)
{
    if (*link == NULL) {
        return;
    }
    struct LNDoubleLinkedList *p = *link;
    int i = 0;
    while (p!= NULL && i <= index) {
    
        if (index == i) {
            struct LNDoubleLinkedList *pre = p->pre;
            struct LNDoubleLinkedList *next = p->next;
            if (pre != NULL) {
               pre->next = next;
            }
            next->pre = pre;
            p = next;
            return;
        }
        p = p->next;
        i ++;
    }
}

void traverseDoubleinkedList(struct LNDoubleLinkedList *node)
{
    struct LNDoubleLinkedList *aNode = node;
    while (aNode != NULL) {
        printf("%d",aNode->data);
        aNode = aNode->next;
    }
}

extern void reverseDoubleinkedList(struct LNDoubleLinkedList **link)
{
    while (*link == NULL) {
        return;
    }
    struct LNDoubleLinkedList *p = *link;
    
    struct LNDoubleLinkedList *p0 = NULL;
    while (p->next != NULL) {
        struct LNDoubleLinkedList *p1 = p->next;
        p->next = p0;
        p->pre = p1;
        p0 = p;
        p = p1;
    }
    p->next = p0;
    *link = p;
}

#pragma mark - LNSingleLinkedList
extern struct LNSingleLinkedList * creatLNSingleLinkedListNode(int data)
{
    struct LNSingleLinkedList *node = (struct LNSingleLinkedList *)malloc(sizeof(struct LNSingleLinkedList));
    if (!node) {
        return NULL;
    }
    node->data = data;
    node->next = NULL;
    return node;
}

extern void insertToSingleLinkedListNode(struct LNSingleLinkedList **link, int data)
{
    if (*link == NULL) {
        *link = creatLNSingleLinkedListNode(data);
    }else{
        struct LNSingleLinkedList *newNode = creatLNSingleLinkedListNode(data);
        struct LNSingleLinkedList *next = *link;
        while (next->next != NULL) {
            next = next->next;
        }
        newNode->data = data;
        next->next = newNode;
    }
}

extern void deleteSingleLinkedListNodeAtIndex(struct LNSingleLinkedList **link, int index)
{
    if (*link == NULL) {
        return;
    }
    struct LNSingleLinkedList *next = *link;
    if (index == 0) {
        *link = next->next;
        return;
    }
    int i = 1;
    while (next->next!= NULL && i <= index) {
        
        if (index == i) {
            next->next = next->next->next;
            return;
        }
        next = next->next;
        i ++;
    }
}

extern void traverseSingleLinkedList(struct LNSingleLinkedList *node)
{
    struct LNSingleLinkedList *aNode = node;
    while (aNode != NULL) {
        printf("%d",aNode->data);
        aNode = aNode->next;
    }
}

extern void reverseSingleLinkedList(struct LNSingleLinkedList **link)
{
    while (*link == NULL) {
        return;
    }
    struct LNSingleLinkedList *p = *link;
    struct LNSingleLinkedList *p0 = NULL;
    while (p->next != NULL) {
       struct LNSingleLinkedList *p1 = p->next;
        p->next = p0;
        p0 = p;
        p = p1;
    }
    p->next = p0;
    *link = p;
}
