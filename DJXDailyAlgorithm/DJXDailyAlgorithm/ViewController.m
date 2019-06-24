//
//  ViewController.m
//  DJXDailyAlgorithm
//
//  Created by Lenny on 16/8/1.
//  Copyright © 2016年 dongjianxiong. All rights reserved.
//

#import "ViewController.h"
#import "LNBTree.h"
#import "StringTest.h"

@interface ViewController () <UITableViewDelegate, UITableViewDataSource>

@property (nonatomic, strong) UITableView *tableView;
@property (nonatomic, strong) NSArray *itemList;

@property (nonatomic, assign) struct LNTreeNode *bTree;

@property (nonatomic, assign) struct LNDoubleLinkedList *doubleLink;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    LoopMove("abcdef", 4);
    self.tableView = [[UITableView alloc] initWithFrame:self.view.bounds];
    self.tableView.dataSource = self;
    self.tableView.delegate = self;
    [self.view addSubview:self.tableView];
    self.itemList = @[@"前序遍历",@"中序遍历",@"后序遍历",@"层序遍历"];
    struct LNDoubleLinkedList *doubleLink;
    for (int i = 0; i < 10; i++) {
        insertToDoubleinkedListNode(&doubleLink, i);
    }
    deleteDoubleinkedListNodeAtIndex(&doubleLink, 3);
    self.doubleLink = doubleLink;
    traverseDoubleinkedList(self.doubleLink);
//
//    struct LNSingleLinkedList *singleLink = NULL;
//    for (int i = 0; i < 10; i++) {
//        insertToSingleLinkedListNode(&singleLink, i);
//    }
////    deleteSingleLinkedListNodeAtIndex(&singleLink, 1);
//    traverseSingleLinkedList(singleLink);
//    reverseSingleLinkedList(&singleLink);
//    traverseSingleLinkedList(singleLink);
    
    self.bTree = creatBTreeNode(20);
    addNode(self.bTree, 17);
    addNode(self.bTree, 21);
    addNode(self.bTree, 17);
    addNode(self.bTree, 18);
    addNode(self.bTree, 15);
    addNode(self.bTree, 22);
//    preOrderTraverse(self.bTree);
    // Do any additional setup after loading the view, typically from a nib.
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return self.itemList.count;
}

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    UITableViewCell *cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:nil];
    cell.textLabel.text = self.itemList[indexPath.row];
    return cell;
}

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath
{
    if (indexPath.row == 0) {
        preOrderTraverse(self.bTree);
    }else if (indexPath.row == 1){
        midOrderTraverse(self.bTree);
    }else if (indexPath.row == 2){
        trailOrderTraverse(self.bTree);
    }else if (indexPath.row == 3){
        sequenceOrderTraverse(self.bTree);
    }
}


//static struct LNTreeNode *doubleLink;
//void performWhenTraverse(struct LNTreeNode *node)
//{
//    insertToDoubleinkedListNode(node, node->data);
//}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
