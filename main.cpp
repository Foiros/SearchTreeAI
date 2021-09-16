#include <iostream>
#include "BinarySearchTree.h"
#include "WorkerPrototype.h"

int main() {

#pragma region BinaryTreeTesting
    // testing for the binary tree
//    auto* tree = new BinarySearchTree();
//
//    int i;
//    int array[7] = { 27, 14, 35, 10, 19, 31, 42 };
//
//    for (int data : array)
//        tree->Insert(data);
//
//    i = 31;
//    struct Node* temp_node = tree->Search(i);
//
//    if(temp_node != nullptr){
//
//        printf("[%d] Element found.", temp_node->data);
//        printf("\n");
//    }
//    else
//        printf("[ x ] Element not found (%d).\n", i);
//
//    i = 15;
//    temp_node = tree->Search(i);
//
//    if(temp_node != nullptr){
//
//        printf("[%d] Element found.", temp_node->data);
//        printf("\n");
//    }
//    else
//        printf("[ x ] Element not found (%d).\n", i);
//
//    printf("\nPreorder traversal: ");
//    tree->PreOrderTraversal(tree->GetRoot());
//
//    printf("\nInorder traversal: ");
//    tree->InOrderTraversal(tree->GetRoot());
//
//    printf("\nPost order traversal: ");
//    tree->PostOrderTraversal(tree->GetRoot());
#pragma endregion

    auto* worker = new WorkerPrototype();
    int rounds = 0;

    while(rounds <= 11){
        worker->WorkWork();
        rounds++;
    }
    return 0;
}
