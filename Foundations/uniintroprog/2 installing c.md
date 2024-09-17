# Installing and setting up a C Development Environment

Due to its age, c has compilers for every type of architecture and operating system available. However, it is reccomended that you use gcc as your compiler. But what is gcc exactly?

## What is GCC?

GCC stands for GNU Compiler Collection. It is a powerful tool that converts the code you write in C (or other languages like C++, Fortran, etc.) into something the computer can understand—machine code. Without a compiler like GCC, the computer wouldn’t know how to run your C programs.
How Does GCC Work?

When you write a C program, it’s in a form humans can read and understand. For example:

```
#include <stdio.h>

int main() {
    printf("Hello, world!\n");
    return 0;
}
```
But computers don’t understand this directly. The job of GCC is to translate this human-readable code into binary instructions (machine code) that the computer’s processor can execute.

Here’s a step-by-step overview of what happens when you use GCC:

    Preprocessing: The code is first checked for things like macros and file includes (e.g., #include <stdio.h>). This step prepares the code for actual compilation.
    Compilation: The compiler translates your C code into assembly code, which is a low-level code closer to machine code.
    Assembly: The assembly code is then converted into machine code (object files), which the computer can almost understand but not fully yet.
    Linking: Finally, if your program uses external libraries (like printf from the C standard library), GCC links your code to those libraries and produces an executable file (e.g., program.exe or a.out).

Using GCC: Basic Commands

GCC is used in the terminal (command line) to compile C programs. Here’s a basic example:

    Write a C program in a text editor and save it as hello.c:

    ```
    #include <stdio.h>

int main() {
    printf("Hello, world!\n");
    return 0;
}
```
Open the terminal and navigate to the folder where hello.c is located.

Run the GCC command to compile the program:

bash

gcc hello.c -o hello

    gcc is the compiler command.
    hello.c is your C source file.
    -o hello tells GCC to name the output file hello (instead of the default a.out).

Run your program:

bash

./hello

You’ll see the output:

    Hello, world!

Why is GCC Important?

    Portability: GCC works on many different operating systems (Windows, macOS, Linux), so you can write C code on any system and compile it with GCC.
    Free and Open Source: It’s free to use, and the code behind it is open-source, making it an accessible tool for students and professionals alike.
    Widely Used: Many programmers and companies use GCC because it supports multiple programming languages and is highly reliable.

Key Benefits for New Students

    Simplicity: GCC allows you to focus on writing code without worrying about the complexity of how it’s converted into something the computer can run.
    Error Detection: If your code has mistakes, GCC will point them out when you try to compile your program, helping you learn and improve.


### A Note About Windows:

Windows doesn't have gcc the same way that Mac or Linux might. As Windows comes from a different family of operating systems, it relies on Mingw and as a result setup is different there than in other places


