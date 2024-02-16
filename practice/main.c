#include <stdio.h>
#include "add.h"

int add(int a, int b);


int main() {
    printf("Hello, World!\n");
    int result;
    result = add(5,6);
    printf("%d\n",result);
    return 0;
}
