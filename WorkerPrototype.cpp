//
// Created by arttu on 11/09/2021.
//

#include "WorkerPrototype.h"

WorkerPrototype::WorkerPrototype() {

    brain = new Brain();
}

WorkerPrototype::~WorkerPrototype() = default;

void WorkerPrototype::WorkWork() {

    brain->Update_Information();
}
