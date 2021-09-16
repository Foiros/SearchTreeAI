//
// Created by arttu on 11/09/2021.
//

#ifndef SEARCHTREEAI_AIACTIONS_H
#define SEARCHTREEAI_AIACTIONS_H

#include <cstdint>
#include "BinaryTreeAI.h"

class AIActions {

public:
    AIActions();
    ~AIActions();

    void ChooseAction(Node* action_node);

private:
    static void GoGatherIngredients();
    static void GatherIngredient();
    static void GoBackToBase();
    static void CookIngredients();
};


#endif //SEARCHTREEAI_AIACTIONS_H
