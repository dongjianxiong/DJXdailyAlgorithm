//
//  LNBTree.h
//  DJXDailyAlgorithm
//
//  Created by ioser on 2018/10/11.
//  Copyright © 2018年 dongjianxiong. All rights reserved.
//

#ifndef LNBTree_h
#define LNBTree_h

#include <stdio.h>
#include "LNLink.h"
#endif /* LNBTree_h */



struct LNTreeNode{
    int data;
    struct LNTreeNode *left;
    struct LNTreeNode *right;
};

extern struct LNTreeNode * creatBTreeNode(int data);
extern void addNode(struct LNTreeNode *node, int data);

//前序遍历：先访问根节点，再访问左子树，最后访问右子树
extern void preOrderTraverse(struct LNTreeNode *node);
//中序遍历：先访问左子树，再访问根节点，最后访问右子树
extern void midOrderTraverse(struct LNTreeNode *node);
//层序遍历：每一层从左到右访问每一个节点。
extern void sequenceOrderTraverse(struct LNTreeNode *node);
//后序遍历：先访问左子树，再访问右子树，最后访问根节点
extern void trailOrderTraverse(struct LNTreeNode *node);
