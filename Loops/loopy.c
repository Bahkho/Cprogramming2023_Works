#include <stdio.h>
#include <stdbool.h>

int main() {
    //--------------------------------------------
//    FOR LOOP
//    for (int index = 0; index <= 10; ++index) {
//        printf("%3i - %3i\n",index,index * 10);
//    }
    //--------------------------------------------
    //WHILE LOOP
////    bool answer = false;
//    int result = 0;
//
//    while (result != 4){
//        printf("What is 2 + 2?\n");
//        scanf("%d", &result);
//        // using ternary operator
////        result == 4 ? (answer = true) : (answer = false);
//    }
//    printf("You got it!");
    //--------------------------------------------


	bool loopflag = true;
	printf("Here is a little table!\n");
	for (int idx = 0; idx < 5; idx++){

		for (int jdx = 0; jdx <=21; jdx = jdx + 7){
			printf ("\t %4i", jdx * idx);
		}
		putchar('\n');
	}

	while (loopflag){
		printf("Hello, World! from a while loop!\n");
		loopflag = false;
	}

	do {
		printf("Hello, World! from a do - while  loop!\n");
	} while (loopflag);
    //--------------------------------------------


	return 0;
}