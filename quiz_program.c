/*
 * Project: Simple Quiz Program in C
 * Team Members:
 * 1. Ram Ganesh (AP25110010872)
 * 2. Guru Sai Sanjith (AP25110010097)
 * 3. Chakradhar Reddy (AP25110010112)
 * 4. Soma Raj (AP25110010551)
 *
 * Submitted To: Singarapu Pavan Kumar
 * Department: CSE
 */

#include <stdio.h>

int main() {
    char ans;
    int score = 0;

    printf("Simple C Quiz (10 Questions)\n");
    printf("----------------------------\n\n");

    // Question 1
    printf("1. Which keyword is used to declare a variable in C?\n");
    printf("a) var\n");
    printf("b) int\n");
    printf("c) let\n");
    printf("d) define\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'b' || ans == 'B') score++;

    // Question 2
    printf("\n2. Which function is used to print output in C?\n");
    printf("a) print()\n");
    printf("b) echo()\n");
    printf("c) printf()\n");
    printf("d) cout<<\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'c' || ans == 'C') score++;

    // Question 3
    printf("\n3. Which header file is used for input and output in C?\n");
    printf("a) stdio.h\n");
    printf("b) conio.h\n");
    printf("c) math.h\n");
    printf("d) string.h\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'a' || ans == 'A') score++;

    // Question 4
    printf("\n4. Which symbol is used for single-line comments in C?\n");
    printf("a) /* */\n");
    printf("b) //\n");
    printf("c) #\n");
    printf("d) --\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'b' || ans == 'B') score++;

    // Question 5
    printf("\n5. What is the format specifier for an integer?\n");
    printf("a) %%c\n");
    printf("b) %%f\n");
    printf("c) %%d\n");
    printf("d) %%s\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'c' || ans == 'C') score++;

    // Question 6
    printf("\n6. Which operator is used to check equality in C?\n");
    printf("a) =\n");
    printf("b) ==\n");
    printf("c) ===\n");
    printf("d) !=\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'b' || ans == 'B') score++;

    // Question 7
    printf("\n7. Array indexes in C start with:\n");
    printf("a) 0\n");
    printf("b) 1\n");
    printf("c) -1\n");
    printf("d) None\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'a' || ans == 'A') score++;

    // Question 8
    printf("\n8. Which of these is a valid loop in C?\n");
    printf("a) for\n");
    printf("b) repeat\n");
    printf("c) foreach\n");
    printf("d) loop\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'a' || ans == 'A') score++;

    // Question 9
    printf("\n9. What is the size of a char data type in C?\n");
    printf("a) 2 bytes\n");
    printf("b) 4 bytes\n");
    printf("c) 1 byte\n");
    printf("d) 8 bytes\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'c' || ans == 'C') score++;

    // Question 10
    printf("\n10. Every C statement must end with which symbol?\n");
    printf("a) .\n");
    printf("b) :\n");
    printf("c) ,\n");
    printf("d) ;\n");
    printf("Enter your answer: ");
    scanf(" %c", &ans);
    if (ans == 'd' || ans == 'D') score++;

    // Final Results
    printf("\n----------------------------\n");
    printf("Your total score: %d / 10\n", score);

    // Feedback based on score
    if (score >= 9) {
        printf("Excellent!\n");
    } else if (score >= 7) {
        printf("Very Good!\n");
    } else if (score >= 5) {
        printf("Good job!\n");
    } else {
        printf("Better luck next time.\n");
    }

    return 0;
}