/*
 * Exercise 2: Insertion Sort for Singly Linked List
 * Assignment 8 - IPFCE 2025
 * 
 * Implement insertion sort for a singly linked list of integers.
 * The list should be sorted in-place from smallest to largest.
 * No new nodes should be allocated - only pointers should be changed.
 */

#include "exercise2.h"

/* 
 * Sort a singly linked list in-place using insertion sort
 * list: pointer to the first node of the list
 * 
 * The function should sort the list by rearranging pointers,
 * not by creating new nodes or swapping data values.
 */
void isort(node* list) {
    /* TODO: Implement insertion sort for linked list */
    


    /*      ATTEMPT 2 ––––– GAVE UP */
    node* curr;     // Traversing variable.
    node* sort;     // The element to be sorted.

    if (list == NULL) {     // 0 nodes; no sorting.
        return;
    } else if (curr->next == NULL) {    // 1 node; no sorting.
        return;
    }
    else if (list->next->next == NULL) {    // 2 node; simple swap.
        if (list->data > list->next->data) {
            // Save address of first element
            // Second element points to first element
            // (orignal) first element points to NULL
        }
    } else {
        while () {
            curr = list;
            // Find the last sorted node.
            while (curr->data < curr->next->data) {
                curr = curr->next;
            }
            sort = curr->next;  // Save the element being sorted.
            curr = curr->next->next; // Remove the element being sorted.
            
            curr = list;    // Reset traversing variable.
            // Traverse until position for the element being sorted is found.
            while (curr->data < sort->data) {
                curr = curr->next;
            }
            
            node* slide = curr->next; // Save the element being slid right.
            curr = sort;    // Insert the element.
            curr = slide;   // The element points to the next element.
        }
    }
    

    
    
    
    
    /*      ATTEMPT 1 ––––– GAVE UP */
    //first node, ..., prev_sort, curr_sort, curr_unsort, next_unsort, ..., NULL
    node* prev_sort = list;
    node* curr_sort;
    node* curr_unsort;
    node* next_unsort;

    while ( prev_sort->next->next != NULL &&
            prev_sort->next != NULL &&
            prev_sort != NULL &&) {
        // Finds second last sorted node.
        while (prev_sort->next->data <= prev_sort->next->next->data) {
            prev_sort = prev_sort->next;
        }
        
        // Saves address of next unsorted
        // Saves address of current unsorted
        // Saves address of current sorted

        // prev_sort points to curr_unsort
        // curr_unsort points to curr_sort
        // curr_sort points to next_unsort
        }

    // prev_sort->next->next->next->data = NULL
    // prev_sort->next->next->data = NULL
    // prev_sort->next->data = NULL
    // prev_sort->next->data = NULL
    // prev_sort->data = NULL

    
    

}



/* Helper function to print the list */
void print_list(node* list) {
    node* current = list;
    while (current != NULL) {
        printf("%d", current->data);
        if (current->next != NULL) {
            printf(" -> ");
        }
        current = current->next;
    }
    printf(" -> NULL\n");
}


