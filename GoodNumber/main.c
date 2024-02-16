#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

int main() {

    setbuf(stdout, 0);

    char inputString[5];
    int inputNumber;

    printf("Please enter a number:");
    scanf("%s",inputString);

    // 1. see if first character is a 'N', inputString[0]

    // 2. look at the string one character at a time - see if digits
    bool goodNumber = true;
    int count = 0;

    while(inputString[count] != '\0') {

        //if(inputString[count] >= '0' && inputString[count] <= '9')

        if(!isdigit(inputString[count])) {
            goodNumber = false;
            break;
        }

        count++;
    }

    // 3. Convert the string to a number if it is good
    if(goodNumber) {

        inputNumber = atoi(inputString);

        printf("A good number was entered: %i", inputNumber);
    }
    else
    {
        printf("Bad number was entered!");
    }



    return 0;
}
