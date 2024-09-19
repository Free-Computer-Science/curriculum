1. Type Sizes and Limits

Write a program that prints the sizes (in bytes) of the following types: char, int, short, long, long long, float, double, and long double. Also, print their minimum and maximum values using constants from <limits.h> and <float.h>.

Objective: Understand the size and range of basic types in C.
2. Arithmetic with Different Integer Types

Write a program that declares variables of types int, short, and long. Perform arithmetic operations (addition, subtraction, multiplication, and division) on these variables and print the results. Make sure to test what happens when you mix types (e.g., adding an int to a long).

Objective: Explore how different integer types interact and promote during arithmetic operations.
3. Floating-Point Precision

Declare variables of type float, double, and long double. Assign values to each variable that include both large and small numbers. Print the results to observe how precision differs between the types.

Objective: Understand the precision differences between floating-point types.
4. Character Manipulation

Write a program that reads a single character input from the user and checks if it is a lowercase letter, an uppercase letter, a digit, or a special character. Print a message for each case.

Objective: Work with the char type and understand how character values are handled in C.
5. Overflow and Underflow in Integers

Write a program that declares an unsigned char and an int. Assign the maximum value to both, then increment each variable by 1 and print the results. Observe what happens in each case (overflow behavior).

Objective: Learn about overflow and how it affects integer types.
6. Basic Type Casting

Write a program that takes a float number as input, casts it to int, and prints both the original float value and the casted int value. Additionally, demonstrate casting an int to a char and print the result.

Objective: Understand type casting between basic types and its effects.
7. Working with Boolean Logic

C99 introduced the _Bool type, which can be used to represent boolean values (true or false). Write a program that declares several boolean variables, performs basic logical operations (AND, OR, NOT), and prints the results.

Objective: Learn how C handles boolean values and logical operations.
8. String Length Using Characters

Without using any library functions, write a program that calculates the length of a string (array of characters). The string should end with a null terminator ('\0'). Print the length of the string.

Objective: Work with char arrays (C strings) and understand how strings are stored in C.
9. Type Limits Comparison

Write a program that compares the ranges of int, short, and long types. For example, print whether the maximum value of short is smaller, equal to, or greater than the maximum value of int.

Objective: Understand how different integer types relate to each other in terms of their ranges and limits.
10. Calculate the Average of Floats

Write a program that reads five floating-point numbers from the user, calculates the average, and prints it. Ensure that the program handles precision correctly.

Objective: Practice working with float and double, and understand the importance of floating-point arithmetic precision.

1. Size of Objects Using size_t

Write a program that declares an array of integers and uses size_t to calculate and print the size of the array in bytes and the number of elements in the array.

Objective: Understand how to use size_t for working with sizes of objects and arrays.
2. Pointer Differences Using ptrdiff_t

Declare an array of integers, then calculate and print the difference between two pointers to different elements of the array using ptrdiff_t.

Objective: Explore how ptrdiff_t is used to calculate differences between pointers.
3. Working with time_t

Write a program that uses time() to get the current calendar time (in time_t format). Convert this time to a human-readable format (e.g., using localtime() or ctime()) and print it.

Objective: Learn how to work with time_t to manage and manipulate time in C.
4. Measure CPU Time with clock_t

Write a program that measures the CPU time taken to execute a simple loop using clock_t. Print the time in seconds.

Objective: Learn how to use clock_t and clock() to measure processor time.
5. Type-Safe Pointer Conversion with uintptr_t

Declare a pointer to an integer and convert the pointer to an uintptr_t type. Then, convert it back to an integer pointer and print the value stored at the address.

Objective: Understand how uintptr_t can be used for platform-independent pointer manipulation.
6. File Offset Manipulation with off_t

Write a program that opens a file and uses lseek() to move to a specific position in the file using off_t. Then, read and print data from that position.

Objective: Learn how off_t is used for working with file offsets in system-level programming.
7. Signed Sizes with ssize_t

Create a program that uses the read() system call to read data from a file into a buffer. Handle both successful reads and error cases, printing the result in terms of bytes read (using ssize_t).

Objective: Explore the use of ssize_t for functions that return both sizes and error codes.
8. Process IDs with pid_t

Write a program that uses fork() to create a child process. Print the process ID of the parent and child processes using pid_t. Have the child process print its own process ID and its parent’s process ID.

Objective: Practice using pid_t for process management in system programming.
9. File Permissions with mode_t

Write a program that creates a new file using the open() system call. Set specific file permissions using mode_t and verify that the file was created with the correct permissions.

Objective: Learn how to use mode_t for specifying file permissions during file creation.
10. Atomic Signal Handling with sig_atomic_t

Write a signal handler for SIGINT that increments a global variable using sig_atomic_t. In the main program, run an infinite loop that prints the value of the variable. Test the program by sending interrupt signals (Ctrl+C) and observe the output.

Objective: Understand how to use sig_atomic_t for safely accessing variables in signal handlers.