#include <stdio.h>

int main() {
    setbuf(stdout, 0);

    // check 2017 % 4 = 1 -> not a leap year
    // check 1996 % 4 = 0 -> is a leap year
    // check 1900 % 4 = 0 but 1900 % 100 = 0 -> not a leap year
    // check 2000 % 4 = 0 also 2000 % 100 = 0 also 2000 % 400 = 0 -> is a leap year


    int year, rem_4, rem_100, rem_400;
    char wantToContinue = ' ';

    do {

        printf("Please enter a year to test: ");
        scanf("%i", &year);

        rem_4 =year % 4;
        rem_100 = year % 100;
        rem_400 = year % 400;

        if ((rem_4 == 0 && rem_100 != 0) || rem_400 == 0) {
            printf("A leap year!\n");
        }
        else {
            printf("Not a leap year\n");
        }


        printf("Do you want to continue (Y/N): ");
        scanf(" %c", &wantToContinue);
    } while (wantToContinue != 'N');
    return 0;
}