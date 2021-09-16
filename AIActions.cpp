//
// Created by arttu on 11/09/2021.
//

#include <cstdio>
#include "AIActions.h"

AIActions::AIActions() = default;

AIActions::~AIActions() = default;

void AIActions::ChooseAction(Node* action_node) {

    if(action_node->state == States::GoGather){

        GoGatherIngredients();
    }
    else if(action_node->state == States::Gather){

        GatherIngredient();
    }
    else if(action_node->state == States::ReturnToBase){

        GoBackToBase();
    }
    else if(action_node->state == States::Cook){

        CookIngredients();
    }
}

void AIActions::GoGatherIngredients() {

    printf("Leaving the base to gather ingredients!\n");
}

void AIActions::GatherIngredient() {

    printf("Gathering ingredients!\n");
}

void AIActions::GoBackToBase() {

    printf("Returning to the base with a ingredient!\n");
}

void AIActions::CookIngredients() {

    printf("Cooking the ingredient!\n");
}