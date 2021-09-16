//
// Created by arttu on 10/09/2021.
//

#ifndef SEARCHTREEAI_BINARYSEARCHTREE_H
#define SEARCHTREEAI_BINARYSEARCHTREE_H

#include <cstdlib>
#include <cstdio>

//struct Node{
//
//    int data;
//    struct Node* left_child;
//    struct Node* right_child;
//};

class BinarySearchTree {

private:
    struct Node* root = nullptr;

public:
    BinarySearchTree();
    ~BinarySearchTree();

    void Insert(int data);
    struct Node* Search(int data);
    void PreOrderTraversal(struct Node* _root);
    void InOrderTraversal(struct Node* _root);
    void PostOrderTraversal(struct Node* _root);

    struct Node* GetRoot();
};


#endif //SEARCHTREEAI_BINARYSEARCHTREE_H
