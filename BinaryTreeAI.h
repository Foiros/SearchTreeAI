//
// Created by arttu on 11/09/2021.
//

#ifndef SEARCHTREEAI_BINARYTREEAI_H
#define SEARCHTREEAI_BINARYTREEAI_H

#include <cstdlib>
#include <cstdio>

enum class States{

    Idle,
    GatherActions,
    CookActions,
    GoGather,
    Gather,
    ReturnToBase,
    Cook
};

struct Node{

    int data;
    States state;
    struct Node* left_child;
    struct Node* right_child;
};

class BinaryTreeAI {

private:
    struct Node* root = nullptr;

public:
    BinaryTreeAI();
    ~BinaryTreeAI();

    void Insert(int data, States state);
    struct Node* Search(int data);
    void PreOrderTraversal(struct Node* _root);
    void InOrderTraversal(struct Node* _root);
    void PostOrderTraversal(struct Node* _root);

    struct Node* GetRoot();
};


#endif //SEARCHTREEAI_BINARYTREEAI_H
