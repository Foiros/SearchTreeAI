//
// Created by arttu on 16/09/2021.
//

#ifndef SEARCHTREEAI_BRAIN_H
#define SEARCHTREEAI_BRAIN_H

#include "BinaryTreeAI.h"
#include "AIActions.h"

class Brain {

private:
    BinaryTreeAI* decision_center;
    AIActions* action_center;

    struct Node* action_node;
    bool has_ingredient, in_base;

public:
    Brain();
    ~Brain();

    void Update_Information();

private:
    void Use_Information();
    void Change_Information();
};


#endif //SEARCHTREEAI_BRAIN_H
