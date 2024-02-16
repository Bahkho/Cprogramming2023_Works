#include <stdio.h>

int main(){
    setbuf(stdout, 0);

    int countryCode = 2;

    switch (countryCode) {
        case 1:
            printf("Hello!\n" );
            break;
        case 2:
            printf("Bonjour!\n" );
            break;
        case 3:
            printf("Guten tag!\n" );
            break;
        default:
            printf("Ciao/G'Day!!\n" );
            break;
    }

    return 0;
}