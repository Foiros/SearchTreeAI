//
// Created by arttu on 11/09/2021.
//

#ifndef SEARCHTREEAI_WORKERPROTOTYPE_H
#define SEARCHTREEAI_WORKERPROTOTYPE_H

#include "Brain.h"

class WorkerPrototype {

private:
    Brain* brain;

public:
    WorkerPrototype();
    ~WorkerPrototype();

    void WorkWork();
};


#endif //SEARCHTREEAI_WORKERPROTOTYPE_H
