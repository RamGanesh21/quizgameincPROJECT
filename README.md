Project Title
---
 Simple quiz program in c
---

## Project Details
**Team Members:**
* Ram Ganesh (AP25110010845)
* Guru Sai Sanjith (AP25110010096)
* Chakradhar Reddy (AP25110010499)
* Soma Raj (AP25110010326)

**Submitted To:** Singarapu Pavan Kumar (Dept. CSE)

## Objective
The objective of this project is to create a simple console-based quiz application using C. It tests the user's knowledge of basic C concepts while demonstrating the use of variables, input/output functions (`printf`, `scanf`), and conditional statements , loops and arrays


---

  Important Notes / Assumptions

1. The quiz contains a fixed set of 10 questions.
All questions are stored directly in the program using a 2D array, and the number cannot change during runtime.


2. Each question has four options (a, b, c, d).
The options are stored in parallel arrays (optA, optB, optC, optD), and each index represents one complete set of options.


3. Correct answers are stored in an answer key array.
The array keys[10] holds the correct answer for each question in lowercase format.


4. User input is assumed to be a single valid character.
The program expects the user to enter only a, b, c, or d.
Invalid inputs are not handled separately.


5. Input is treated case-insensitively.
The program checks both lowercase and uppercase versions of the answer (e.g., a and A are both accepted).


6. The space before %c in scanf(" %c") is required.
This avoids newline input issues and ensures the answer is read correctly.


7. Score increases by 1 for each correct answer.
There is no negative marking for wrong answers.


8. The quiz runs sequentially from Question 1 to 10.
There is no skipping, shuffling, or repeating of questions.


9. Feedback is based on the total score.

9–10 → Excellent

5–8 → Good Job

Below 5 → Try Again



10. The program uses basic C concepts only.
It demonstrates arrays, loops, character input, and conditional statements.


11. The quiz runs only once per program execution.
To attempt the quiz again, the user must restart the program

---


## How to Compile and Run
1. **Prerequisites:** Ensure you have a C compiler installed (like GCC).
2. **Compilation:** Open your terminal or command prompt and run:

   gcc quiz_program.c -o quiz_program

