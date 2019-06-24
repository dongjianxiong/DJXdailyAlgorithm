//
//  main.m
//  DJXDailyAlgorithm
//
//  Created by Lenny on 16/8/1.
//  Copyright © 2016年 dongjianxiong. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "DJXStack.h"

int main(int argc, char * argv[]) {
    
    DJXStack stack;
    InitStack(&stack, DJX_StackSize);
    DJX_ElemType elemType = 0;
    for (int i = 0; i < 5; i ++) {
        elemType = i;
        PushStack(&stack, elemType);
//        printf("%d",*(--stack.top));
    }
//    for (int i = 0; i < 5; i ++) {
//        PopStack(&stack, &elemType);
////        printf("top--%d",*(stack.top));
//        printf("%d",elemType);
//    }
//    TraverseStack(&stack);
//    DestroyStack(&stack);
//    TraverseStack(&stack);

    @autoreleasepool {
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
    }
}
