#include <stdio.h>
//#define MAXFIB 25
//#define MAX_FIB 25


int main(void) {
    int idx;        /* The index of fibonacci number to be printed next */
    int current;  /* The value of the (i)th fibonacci number */
    int next;     /* The value of the (i+1)th fibonacci number */
    int andnext;  /* The value of the (i+2)th fibonacci number */
    const int MAX_FIB = 30;

    int fibarray[MAX_FIB][2];

    printf("\nPrinting Fibonacci numbers - The first %3i of the sequence\n", MAX_FIB);
    next = current = 1;
    for (idx=0; idx < MAX_FIB; idx++) {
        fibarray[idx][0] = idx+1;
        fibarray[idx][1] = current;
        andnext = current+next;
        current = next;
        next    = andnext;
    }

    printf("\n\nI \t Fibonacci(I) \n=====================\n");

    for (idx=0; idx < MAX_FIB; idx++) {
        printf("%2i\t%6i\n", fibarray[idx][0], fibarray[idx][1]);

    }


}