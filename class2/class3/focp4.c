#include <stdio.h>

int main() {
//     int a, b, c;
//     printf("Enter three numbers: ");
//     scanf("%d %d %d", &a, &b, &c);

//     int greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

//     printf("Greatest number: %d\n", greatest);
//     return 0;
    // int age;

    // printf("enter age: ");
    // scanf("%d", &age);

    // if (age >= 18) {
    //     printf("eligible to vote\n");
    // } else {
    //     printf("not eligible to vote\n");
    // }

    // int x;
    // printf("enter your number: ");
    // scanf("%d", &x);
    // if (x >= 0) {
    //     printf("%d is positive\n", x);

    //     if (x% 2 == 0) {
    //         printf("%d is even\n", x);
    //     } else {
    //         printf("%d is odd\n", x);
    //     }
    // } else {
    //     printf("%d is negative\n", x);
    // }
    // int year;

    // printf("Enter a year: ");
    // scanf("%d", &year);

    // if (year % 4 == 0) {
    //     if (year % 100 == 0) {
    //         if (year % 400 == 0) {
    //             printf("%d is a leap year\n", year);
    //         } else {
    //             printf("%d is not a leap year\n", year);
    //         }
    //     } else {
    //         printf("%d is a leap year\n", year);
    //     }
    // } else {
    //     printf("%d is not a leap year\n", year);
    // }
    int a1, a2, a3;

    printf("enter the three angles of the triangle: ");
    scanf("%d %d %d", &a1, &a2, &a3);

    if (a1 > 0 && a2 > 0 && a3 > 0) {
        if ((a1 + a2 + a3) == 180) {
            printf("triangle is valid\n");
        } else {
            printf("triangle is not valid\n");
        }
    } else {
        printf("triangle is not valid\n");
    }
    return 0;

}