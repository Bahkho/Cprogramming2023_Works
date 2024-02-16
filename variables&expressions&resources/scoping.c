#include <stdio.h>
#include <stdbool.h>
#include "string.h"


static char mystring[] = "Global string\0";

void messWithstring(){
    char mystring[] = "Function string\0";
    printf("%s as of Function print 1\n", mystring);
//    int idx = 0;
    bool looped = false;
    while (!looped){
        char mystring[] = "Loop string\0";
        printf("%s as of loop print 1\n", mystring);
        looped = true;
        // idx = 1;
    }
    printf("%s as of Function print 2\n", mystring);

}
int main() {
    setbuf(stdout, 0);

    printf("%s as of Main print 1\n", mystring);
    messWithstring();
    printf("%s as of Final Main print\n", mystring);
    return 0;
}