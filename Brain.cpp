//
// Created by arttu on 16/09/2021.
//

#include "Brain.h"

Brain::Brain() {

    decision_center = new BinaryTreeAI();
    action_center = new AIActions();
    action_node = nullptr;
    has_ingredient = false;
    in_base = true;

    int array[7] = { 20, 10, 25, 23, 7, 8, 9 };
    States states[7] = { States::Idle, States::GatherActions, States::CookActions, States::Cook, States::GoGather, States::Gather,  States::ReturnToBase };

    for (int i = 0; i < 7; ++i) {

        decision_center->Insert(array[i], states[i]);
    }
}

Brain::~Brain() = default;

void Brain::Update_Information() {

    if(!has_ingredient && in_base){

        action_node = decision_center->Search(7);
    }
    else if(!has_ingredient && !in_base){

        action_node = decision_center->Search(8);
    }
    else if(has_ingredient && !in_base){

        action_node = decision_center->Search(9);
    }
    else if(has_ingredient && in_base){

        action_node = decision_center->Search(23);
    }

    Use_Information();
    Change_Information();
}

void Brain::Use_Information() {

    action_center->ChooseAction(action_node);
}

void Brain::Change_Information() {

    if(action_node->state == States::GoGather){

        in_base = false;
    }
    else if(action_node->state == States::Gather){

        has_ingredient = true;
    }
    else if(action_node->state  == States::ReturnToBase){

        in_base = true;
    }
    else if(action_node->state == States::Cook){

        has_ingredient = false;
    }
}
