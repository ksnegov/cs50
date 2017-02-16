/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>
#include <stdio.h>

#include "helpers.h"

bool binarySearch(int value, int values[], int n);

void bubble_sort(int values[], int n);

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (n < 0) {
        return false;
    }
    
    return binarySearch(value, values, n);
}

bool binarySearch(int value, int values[], int n) {
    return false;
}


/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    bubble_sort(values, n);
    return;
}

void bubble_sort(int values[], int n) {
    bool isSwaped = false;
    do {
        isSwaped = false;
        n--;
        
        for (int i = 0; i < n; i++) {
            if (values[i] > values[i+1]) {
                int t = values[i];
                values[i] = values[i+1];
                values[i+1] = t;
                isSwaped = true;
            }
        }
    } while (isSwaped);
    return;
}