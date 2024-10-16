# Recursion
```markdown
# Contents
- **Aim**
- **Software Used**
- **Theory**
- **Definition**
- **Properties**
- **Advantages**
- **Algorithms**
- **Conclusion**

## Aim:
To Study and Implement Recursion Function.

## Software Used:
VS Code, Dev C++

## Theory:
Recursion in C++ is a technique in which a function calls itself repeatedly until a given condition is satisfied. Recursion solves a problem by breaking it down into smaller, simpler sub-problems, similar to dividing a task among friends to complete it faster. 

### Syntax Structure of Recursion:
```cpp
return_type recursive_func() {
    // Base Condition
    // Recursive Case
}
```

## Properties of Recursion:
1. **Base Case:** Every recursive function must have a base case to terminate the recursion and prevent infinite loops. This is the simplest instance of the problem that can be solved directly.
2. **Recursive Case:** The function breaks down the problem into smaller subproblems, calling itself to solve those.
3. **Stack Memory:** Each recursive call is added to the call stack, which holds the state of each function call until it completes.
4. **Problem Decomposition:** Recursion naturally breaks problems into smaller, more manageable parts.

## Advantages of Recursion:
1. **Simplicity and Clarity:** Recursive solutions can be more straightforward and easier to understand, especially for problems like tree traversal and factorial calculations.
2. **Elegant Solutions:** Many algorithms (like quicksort and mergesort) are elegantly expressed using recursion, leading to cleaner and more concise code.
3. **Reduced Code Length:** Recursive implementations are often shorter, reducing potential errors and making code easier to maintain.
4. **Natural Fit for Certain Problems:** Problems exhibiting self-similarity, such as traversing trees or solving combinatorial problems, are well-suited for recursion.
5. **Ease of Backtracking:** Recursion is useful for exploring multiple possibilities, like pathfinding or generating permutations.

## Algorithms:

### Algorithm for Calculating Factorial:
1. **Start:** Begin the program.
2. **Input:** Prompt the user to enter a number `n`.
3. **Function Definition:**
   - If `n <= 1`, return 1.
   - Otherwise, return `n * factorial(n - 1)`.
4. **Call Function:** In the main function, call `factorial(num)` with the user input.
5. **Output:** Display the result of the factorial calculation.
6. **End:** Terminate the program.

### Algorithm for Reversing a String:
1. **Input:** Prompt the user to enter a string.
2. **Recursive Function:**
   - If the current character is not the null terminator (`'\0'`), call the function recursively with the next character.
   - After returning, print the current character.
3. **Output:** Call the recursive function to initiate the reversal.
4. **End:** Print a newline after displaying the reversed string.

### Algorithm for Reversing an Integer:
1. **Input:** Prompt the user to enter an integer `num`.
2. **Recursive Function:**
   - If `num > 0`, print `num % 10`.
   - Call the function with `num / 10`.
3. **Output:** Display the reversed number.
4. **End:** Terminate the program.

### Algorithm for Sum of Integers:
1. **Input:** Prompt the user to enter an integer `n`.
2. **Recursive Function:**
   - If `n == 0`, return 0.
   - Otherwise, return `n + sum(n - 1)`.
3. **Output:** Display the sum of integers from 1 to `n`.
4. **End:** Terminate the program.

## Conclusion:
We learned to use the concept of recursion and implemented it in programs for factorial, reverse string, reverse integer, and sum of integers.
