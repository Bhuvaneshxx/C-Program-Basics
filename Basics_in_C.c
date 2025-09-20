#include <stdio.h>
int main() {
    int age = 20;        // integer
    float salary = 5500.75; // float
    char grade = 'A';    // character

    printf("Age = %d\n", age);
    printf("Salary = %.2f\n", salary);
    printf("Grade = %c\n", grade);
    return 0;
}


// Operators 

#include <stdio.h>
int main() {
    int a = 10, b = 3;

    printf("Addition = %d\n", a + b);
    printf("Subtraction = %d\n", a - b);
    printf("Multiplication = %d\n", a * b);
    printf("Division = %d\n", a / b);
    printf("Modulo = %d\n", a % b);

    return 0;
}

// Conditional Statements

#include <stdio.h>
int main() {
    int num = 15;

    if (num % 2 == 0) {
        printf("%d is Even\n", num);
    } else {
        printf("%d is Odd\n", num);
    }
    return 0;
}

//Looping statements

#include <stdio.h>
int main() {
    // for loop
    printf("For Loop:\n");
    for (int i = 1; i <= 5; i++) {
        printf("%d ", i);
    }

    // while loop
    printf("\nWhile Loop:\n");
    int j = 5;
    while (j > 0) {
        printf("%d ", j);
        j--;
    }

    // do-while loop
    printf("\nDo-While Loop:\n");
    int k = 1;
    do {
        printf("%d ", k);
        k++;
    } while (k <= 3);

    return 0;
}

//Functions

#include <stdio.h>

// function definition
int square(int n) {
    return n * n;
}

int main() {
    int num = 6;
    int result = square(num);

    printf("Square of %d = %d\n", num, result);
    return 0;
}
