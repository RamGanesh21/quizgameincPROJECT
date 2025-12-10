/*
 * --------------------------------------------------------------------------
 * Project Name: Simple Quiz Program in C
 * * Team Members & Roll Numbers:
 * 1. Ram Ganesh        (AP25110010845)
 * 2. Guru Sai Sanjith  (AP25110010096)
 * 3. Chakradhar Reddy  (AP25110010499)
 * 4. Soma Raj          (AP25110010326)
 *
 * Submitted To: Singarapu Pavan Kumar
 * Department: CSE
 * Year: 2025
 * --------------------------------------------------------------------------
 */

#include <stdio.h>

int main() {
    // 1. Declare variables
    int i;              // Variable for the loop
    int score = 0;      // Variable to count correct answers
    char ans;           // Variable to store the user's answer (a, b, c, or d)

    // 2. Array for Questions (Simple strings)
    char questions[10][100] = {
        "Who developed the C language?",
        "Which of these is an Integer?",
        "Which character ends a C statement?",
        "Which function prints to the screen?",
        "What is the correct file extension for C?",
        "How do you write a comment in C?",
        "Which is a Loop in C?",
        "Array index starts at:",
        "Which header file is needed for printf?",
        "Which operator adds two numbers?"
    };

    // 3. Arrays for Options (Separate arrays for A, B, C, D)
    // This is the simplest way to handle options using parallel arrays.
    char optA[10][20] = {
        "Dennis Ritchie", "10.5", ".", "scan()", ".txt", "//", "if", "1", "math.h", "-"
    };
    
    char optB[10][20] = {
        "Steve Jobs", "5", ":", "print()", ".cpp", "##", "for", "0", "stdio.h", "+"
    };
    
    char optC[10][20] = {
        "Bill Gates", "A", ";", "printf()", ".c", "**", "int", "-1", "conio.h", "*"
    };
    
    char optD[10][20] = {
        "Elon Musk", "None", ",", "out()", ".py", "$$", "float", "10", "time.h", "/"
    };

    // 4. Array for Correct Answers
    char keys[10] = {'a', 'b', 'c', 'c', 'c', 'a', 'b', 'b', 'b', 'b'};

    // 5. Start the Quiz
    printf("Simple C Quiz (10 Questions)\n");
    printf("----------------------------\n\n");

    // 6. Loop through all 10 questions
    for (i = 0; i < 10; i++) {
        // Print the Question Number and the Question
        printf("Question %d: %s\n", i + 1, questions[i]);
        
        // Print the Options
        printf("a) %s\n", optA[i]);
        printf("b) %s\n", optB[i]);
        printf("c) %s\n", optC[i]);
        printf("d) %s\n", optD[i]);

        // Ask for user input
        printf("Enter option: ");
        scanf(" %c", &ans); // The space before %c is important! It fixes the newline bug.

        // Check if the answer is correct
        // We check for both lowercase (a) and uppercase (A)
        if (ans == keys[i] || ans == (keys[i] - 32)) {
            score++; // Increase score by 1
        }
        
        printf("\n"); // Add a blank line between questions
    }

    // 7. Display Final Score
    printf("----------------------------\n");
    printf("Your Total Score: %d out of 10\n", score);

    // 8. Give Feedback based on the score
    if (score >= 9) {
        printf("Result: Excellent!\n");
    } else if (score >= 5) {
        printf("Result: Good Job!\n");
    } else {
        printf("Result: Try Again.\n");
    }

    return 0;
}