/* This program tests the exercise 3*/

#include "exercise3.h"


int main () {
    // Delcarethe test queue.
    queue q;

    // LAW 1
    init_queue(&q);
    if (empty(&q)) {
        printf("The queue is empty after initionalization.");
    }

    // LAW 2
    int x = 29;
    int y;
    
    enqueue(&q, x);
    y = dequeue(&q);

    if (empty(&q)) {
        printf("The queue is empty after a single instance of enqueue() and dequeue.");
    }

    // LAW 3
    int x0 = 4;
    int x1 = 61;
    int y0;
    int y1;

    enqueue(&q, x0);
    enqueue(&q, x1);
    y0 = dequeue(&q);
    y1 = dequeue(&q);

    if (empty(&q)) {
        printf("The queue is empty after executing LAW 3");
    }

    return 0;
}