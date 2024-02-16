#include <stdio.h>
int main() {
//-------------------------------------------------------------
//DECLARATION AND INITIALIZATION
//    int x = 5;
//    double  y = 3.14;
//    char ch = 'A';
//    printf("x = %d\n", x);
//    printf("y = %.2lf\n", y);
//    printf("ch = %c\n", ch);
//-------------------------------------------------------------
//OPERATORS
//    int a = 10, b = 5;
//    int sum = a + b;
//    int diff = a - b;
//    int product = a * b;
//    int quotient = a / b;
//    int remainder = a % b;
//
//    printf("Sum: %d\n", sum);
//    printf("Difference: %d\n", diff);
//    printf("Product: %d\n", product);
//    printf("Quotient: %d\n", quotient);
//    printf("Remainder: %d\n", remainder);
//-------------------------------------------------------------
//COMPARISON OPERATORS
//    int x = 5, y = 10;
//
//    if(x == y){
//        printf("x is equal to y\n");
//    }else{
//        printf("x is not equal to y\n");
//    }
//
//    if(x < y){
//        printf("x is less than y\n");
//    }else{
//        printf("x is not less than y\n");
//    }
//-------------------------------------------------------------
//LOGICAL OPERATORS
//    int x = 5, y = 10;
//    if(x > 0 && y > 0){
//        printf("Both x and y are positive\n");
//    }
//
//    if(x > 0 || y > 0){
//        printf("At least one of x and y is positive\n");
//    }
//
//    if(!(x>0)){
//        printf("x is not positive\n");
//    }
//-------------------------------------------------------------
//CONVERTING BETWEEN INTEGERS AND FLOAT

    float f1 = 123.125, f2;
    int i1, i2 = -150;
    char c = 'a';
    i1 = (int)f1; // floating to integer conversion
    printf("%f assigned to an int produces %i\n", f1, i1);
    f1 = i2; // integer to floating conversion
    printf("%i assigned to a float produces %f\n", i2, f1);
    f1 = i2 / 100; // integer divided by a integer
    printf("%i divided by 100 produces %f\n", i2, f1);
    f1 = i2 / 100.0; // integer divided by a floating-point number
    printf("%i divided by 100.0 produces %f\n", i2, f1);
    f2 = (float) i2 /100; // type cast operator
    printf("(float) %i divided by 100 produces %f\n", i2, f1);
    return 0;



    return 0;
}