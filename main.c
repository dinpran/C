#include <stdio.h>

int main()
{
    int a = 7; // 2 to 4 bytes
    unsigned short integer = 8;
    long integer1 = 7;
    short integer2 = 15;

    float b = 15.0;               // 4 bytes - 6 decimal place
    double float1 = 4.65;         // 8 bytes 15 deciaml places precision
    long double float2 = 4.78888; // 10 bytes 19 deciaml places precision

    char c = 'b'; // 1 byte
    printf("The number is %d", a);
    printf("size of this is %d \n", sizeof(int));
    printf("size of this is %d \n", sizeof(unsigned int));
    printf("size of this is %d \n", sizeof(float));
    printf("size of this is %d \n", sizeof(double));
    printf("size of this is %d \n", sizeof(long double));
    printf("size of this is %d \n", sizeof(int));
    printf("size of this is %d \n", sizeof(signed int));
    printf("size of this is %d \n", sizeof(float));

    int num; // declaration of integer
    // int num =1 once declared it cant be intialed as int num = 1
    num = 1;          // initalization of integer
    int number = 5;   // declaration and initialization of integer
    const int f = 10; // its going to be constant and you cant change it
    // f = 15; you cant change
    num = 35;
    printf("%d", num);

    printf("types of operators");
    /*
    arthematic operators
    relational operators
    logical operators
    Bitwise operators
    assignmentoperators
    misc operators
    */

    // arthematic operators
    int in1 = 5;
    int in2 = 6;
    int in3 = 7;
    printf("the addition is going to be %d\n ", in1 + in2);
    printf("the subtraction is going to be %d\n ", in1 - in2);
    printf("the multiplication is going to be %d\n ", in1 * in2);
    printf("the division is going to be %d\n ", in1 / in2); // here it is dividing byte by byte
    printf("the modulus is going to be %d\n ", in1 % in2);  // here it is showing remainder
    printf("the increment is going to be %d\n ", ++in1);
    printf("the decrement is going to be %d\n ", --in2);

    // relational operators
    printf("%d\n", in1 == in2);
    printf("%d\n", in1 != in2);
    printf("%d\n", in1 > in2);
    printf("%d\n", in1 < in2);

    // logical operators
    in1 = 0;
    in2 = 1;
    printf("these are logical operators%d\n ", in1 && in2);
    printf("these are logical operators%d\n ", in1 || in2);
    printf("these are logical operators%d\n ", !in1);
    printf("these are logical operators%d\n ", !in2);

    // bitwise operators
    //  A = 60, B = 14
    //  A = 00111100; binary value of A
    //  B = 00001101;binary value of 14
    //  R = 00001100; & operator used in A and B the number is 12 A&B
    int A = 60, B = 14;
    printf("Bitwise operators %d\n", A & B);  // and
    printf("Bitwise operators %d\n", A | B);  // or
    printf("Bitwise operators %d\n", A ^ B);  // xor
    printf("Bitwise operators %d\n", ~B);     // compliment
    printf("Bitwise operators %d\n", A << B); // left shift operator
    printf("Bitwise operators %d\n", A >> B); // right shift operator

    // assignment operators
    //  += -= *= /=
    int h = 15;
    h += 9;
    printf("addition %d\n", h += 9);
    // misc operations - & * ?

    /*
        printf("input");
        int input;
        printf("\n enter a number \n");
        scanf("%d", &input);
        printf("you enteres %f as\n", (float)input);

        printf("Hello\n");
        int n1;
        int n2;
        scanf("%d\n", &n1);
        scanf("%d\n", &n2);
        printf("n1/n2 is %f ", (float)n1 / n2);
        */

    // printf("Enter your age");
    // int age;
    // scanf("%d", &age);
    // if (age < 18)
    // {
    //     printf("you can drive");
    // }
    // else if (age > 18 && age < 24)
    // {
    //     printf("you are banned");
    // }
    // else
    // {
    //     printf("you cannot drive ya");
    // }
    // int agee = age > 4 ? 555 : 991; // short hand if else
    // printf("%d", agee);
    int index = 0;
    while (index < 10)
    {
        printf("%d\n", index);
        index++;
    }
    for (int i = 0; i < 67; i++)
    {
        printf("%d\n", i);
    }
    do
    {
        printf("running\n");
    } while (index > 9191);
    int abc = 6;
    int def = 3;
    printf("a/b = %d", abc / def);
    return 0;
}