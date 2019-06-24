//
//  LNBTree.c
//  DJXDailyAlgorithm
//
//  Created by ioser on 2018/10/11.
//  Copyright © 2018年 dongjianxiong. All rights reserved.
//

#include "LNBTree.h"
#include <stdio.h>
#include <stdlib.h>
#include <malloc/malloc.h>

struct LNTreeNode * creatBTreeNode(int data)
{
    struct LNTreeNode *node = (struct LNTreeNode *)malloc(sizeof(struct LNTreeNode));
    if (!node) {
        return NULL;
    }
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    return node;
}

void addNode(struct LNTreeNode *node, int data)
{
    if (node == NULL) {
        node = creatBTreeNode(data);
    }else{
        if (data > node->data) {
            if (node ->right == NULL) {
                struct LNTreeNode *newNode = creatBTreeNode(data);
                node->right = newNode;
            }else{
               addNode(node->right, data);
            }
        }else if (data < node->data){
            if (node ->left == NULL) {
                struct LNTreeNode *newNode = creatBTreeNode(data);
                node->left = newNode;
            }else{
                addNode(node->left, data);
            }
        }else{
            printf("The data has been exist");
        }
    }
}

void preOrderTraverse(struct LNTreeNode *node)
{
    if (node == NULL) {
        return;
    }
    printf("%d=>",node->data);
    preOrderTraverse(node->left);
    preOrderTraverse(node->right);
    
}

void midOrderTraverse(struct LNTreeNode *node)
{
    if (node == NULL) {
        return;
    }
    midOrderTraverse(node->left);
    printf("%d=>",node->data);
    midOrderTraverse(node->right);
    
}

void p_sequenceOrderTraverse(struct LNTreeNode *node)
{
    if (node == NULL) {
        return;
    }
    struct LNTreeNode *lefNode = node -> left;
    struct LNTreeNode *rightNode = node -> right;
    if (lefNode != NULL) {
        printf("%d=>",lefNode->data);
    }
    if (rightNode != NULL) {
        printf("%d=>",rightNode->data);
    }
    p_sequenceOrderTraverse(lefNode);
    p_sequenceOrderTraverse(rightNode);
    //    printf("%d=>",node->data);
}

void sequenceOrderTraverse(struct LNTreeNode *node)
{
    if (node == NULL) {
        return;
    }
    printf("%d=>",node->data);
    p_sequenceOrderTraverse(node);
}

void trailOrderTraverse(struct LNTreeNode *node)
{
    if (node == NULL) {
        return;
    }
    trailOrderTraverse(node->left);
    trailOrderTraverse(node->right);
    printf("%d",node->data);
}
