//
// Created by Noisyfox on 2017/5/17.
//

#ifndef RED_BLUE_RED_BLUE_H
#define RED_BLUE_RED_BLUE_H

#include "barrier.h"

#define RESULT_COLOR_INSUFFICIENT -1

typedef struct {
    int red;
    int blue;
} result_t;


// User defined parameters
typedef struct {
    int n, t, max_iters;
    int p;
    double c;
} parameters;

typedef struct {
    barrier_t barrier;
    pthread_mutex_t mutex;

    int result_count;
    result_t *full_results;
} thread_sync;

typedef struct {
    thread_sync *sync;
    parameters *params;

    int id;
    int **board;
    int start;
    int end;
} thread_context;

#endif //RED_BLUE_RED_BLUE_H
