# Unit 1: A simple look at C
Summary: Unit 1 examines the most simple parts of C, how to install C and the C compiler, how to use an ide to write it, and how to compile and run a C program. It will also cover the very basics and how these basics differ from Java

    Overview of Programming
        What is programming?
        History and significance of the C language.
        Structure of a C program.

    Development Environment
        Installing a compiler (GCC, Clang) and IDE (Code::Blocks, Visual Studio Code).
        Writing your first "Hello, World!" program.
        Compiling and running a C program.

    Basic Syntax and Variables
        Syntax of C programs (structure, main function).
        Comments, whitespace, and code formatting.
        Data types (int, char, float, double).
        Declaring and using variables.

    Basic Input/Output
        printf() and scanf() for basic I/O.
        Format specifiers for different data types.

    Basic Arithmetic Operations
        Operators (+, -, *, /, %).
        Simple calculations and expressions.

Unit 2: Control Structures and Functions (6-7 weeks)

Summary: Unit 2 covers the basics of control structures, functions, and  will introduce ideas like recursion and error handling, something that came up at the end of the ap program course.

    Conditional Statements
        if, else if, else.
        switch statements.

    Loops
        while, for, and do-while loops.
        Nested loops.
        Loop control with break and continue.

    Functions
        Defining and calling functions.
        Function parameters and return values.
        Scope of variables (local vs global).
        Function prototypes and why they are needed.

    Recursion
        Basics of recursion.
        Examples of recursive functions (e.g., factorial, Fibonacci sequence).

    Error Handling
        Handling basic errors in user input with conditions.
        Introduction to debugging with error messages.

Unit 3: Arrays, Strings, and Pointers (7-8 weeks)

Here we introduce Arrays and strings, with strings just being an array of characters. Pointers are introduced here and will take up several sections to learn as they can be confusing for new students.

    Introduction to Arrays
        Declaring and using arrays.
        Accessing array elements.
        Iterating through arrays with loops.

    Multi-dimensional Arrays
        Declaring and using 2D arrays.
        Practical examples like matrices.

    Introduction to Strings
        Declaring and manipulating strings (char arrays).
        Common string functions from <string.h> (e.g., strlen(), strcpy(), strcmp()).

    Pointers and Memory Addressing
        What are pointers?
        Declaring pointers, pointer arithmetic.
        NULL pointer, dereferencing pointers.

    Pointers and Arrays
        Relationship between arrays and pointers.
        Passing arrays to functions using pointers.

    Dynamic Memory Allocation (Introduction)
        Introduction to malloc(), free(), calloc(), and realloc() for dynamic memory management.
        Simple examples of memory allocation and deallocation.

Unit 4: Structures, Unions, and Enums (5-6 weeks)

Structures, unions, and enums are imperative for students to learn as they come up again and again through computer science.

    Structures
        Defining and using structures.
        Accessing members of structures.
        Pointers to structures.

    Unions
        What are unions?
        How unions differ from structures.
        Using unions for memory efficiency.

    Enumerations
        Defining and using enum types.
        Practical examples (e.g., days of the week, colors).

    Advanced Structure Concepts
        Structures within structures (nested structures).
        Arrays of structures.

Unit 5: Memory Management and File I/O (6-7 weeks)

Summary: advanced memory management, I/O and how to use create command line arguements


    Memory Management
        More advanced dynamic memory management.
        Common errors like memory leaks and buffer overflows.
        Tools for debugging memory issues (e.g., valgrind).

    File Input and Output
        Working with files using <stdio.h>: fopen(), fclose(), fscanf(), fprintf().
        Reading from and writing to text files.
        Error checking with file I/O.

    Binary File I/O
        Reading from and writing to binary files (fread(), fwrite()).
        File pointers and random access (fseek(), ftell()).

    Command Line Arguments
        Handling command line arguments in main(int argc, char *argv[]).
        Simple applications using command line input.

Unit 6: Advanced Pointers and Data Structures (6-7 weeks)



    Advanced Pointer Concepts
        Function pointers and their applications.
        Pointers to pointers (multi-level pointers).

    Dynamic Data Structures
        Introduction to linked lists (singly and doubly linked lists).
        Building and traversing linked lists using dynamic memory.

    Stacks and Queues
        Implementing stacks and queues using arrays and linked lists.
        Common stack/queue operations (push, pop, enqueue, dequeue).

    Trees
        Introduction to binary trees.
        Creating and traversing binary trees (in-order, pre-order, post-order traversal).

    Memory Layout
        Understanding the stack vs heap.
        Memory regions in a C program (code, static, heap, stack).

Unit 7: Advanced Topics and Project Work (7-8 weeks)

    Bitwise Operations
        Introduction to bitwise operators (&, |, ^, ~, <<, >>).
        Applications of bitwise operations (e.g., setting, clearing bits).

    Preprocessor Directives
        Using macros with #define.
        Conditional compilation (#ifdef, #ifndef, #endif).

    Modular Programming
        Splitting code across multiple files (header files, source files).
        Understanding the compilation process with multiple files.

    Introduction to Makefiles
        Automating the build process with Makefiles.
        Writing simple Makefiles for multi-file programs.

    Final Project
        A capstone project where students apply all the concepts learned. Examples:
            Creating a simple text editor.
            Building a command-line calculator.
            Implementing a small database using file I/O and linked lists.