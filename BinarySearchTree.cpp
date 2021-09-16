//
// Created by arttu on 10/09/2021.
//

#include "BinarySearchTree.h"

//BinarySearchTree::BinarySearchTree() = default;
//
//BinarySearchTree::~BinarySearchTree() = default;
//
//void BinarySearchTree::Insert(int data) {
//
//    auto* temp_node = (struct Node*) malloc(sizeof(struct Node));
//    struct Node* current_node;
//    struct Node* parent_node;
//
//    temp_node->data = data;
//    temp_node->left_child = nullptr;
//    temp_node->right_child = nullptr;
//
//    if(root == nullptr){
//
//        root = temp_node;
//    }
//    else{
//
//        current_node = root;
//        parent_node = nullptr;
//
//        while(1){
//
//            parent_node = current_node;
//
//            // Go to left of the tree
//            if(data < parent_node->data){
//
//                current_node = current_node->left_child;
//
//                // Insert to the left
//                if(current_node == nullptr){
//
//                    parent_node->left_child = temp_node;
//                    return;
//                }
//            }
//                // Go to right of the tree
//            else{
//
//                current_node = current_node->right_child;
//
//                //Insert to the right
//                if(current_node == nullptr){
//
//                    parent_node->right_child = temp_node;
//                    return;
//                }
//            }
//        }
//    }
//}
//
//struct Node *BinarySearchTree::Search(int data) {
//
//    struct Node* current_node = root;
//    printf("Visiting elements: ");
//
//    while(current_node->data != data){
//
//        if(current_node != nullptr)
//            printf("%d ", current_node->data);
//
//        // Go to left tree
//        if(current_node->data > data){
//            current_node = current_node->left_child;
//        }
//        // Else go to right tree
//        else{
//            current_node = current_node->right_child;
//        }
//
//        //Not found
//        if(current_node == nullptr)
//            return nullptr;
//    }
//
//    return current_node;
//}
//
//void BinarySearchTree::PreOrderTraversal(struct Node* _root) {
//
//    if(_root != nullptr){
//
//        printf("%d ", _root->data);
//        PreOrderTraversal(_root->left_child);
//        PreOrderTraversal(_root->right_child);
//    }
//}
//
//void BinarySearchTree::InOrderTraversal(struct Node* _root) {
//
//    if(_root != nullptr){
//
//        InOrderTraversal(_root->left_child);
//        printf("%d ", _root->data);
//        InOrderTraversal(_root->right_child);
//    }
//}
//
//void BinarySearchTree::PostOrderTraversal(struct Node* _root) {
//
//    if(_root != nullptr){
//
//        PostOrderTraversal(_root->left_child);
//        PostOrderTraversal(_root->right_child);
//        printf("%d ", _root->data);
//    }
//}
//
//struct Node *BinarySearchTree::GetRoot() {
//
//    return root;
//}
