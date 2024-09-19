### **10 Exercises for Strings and String Literals**

1. **String Declaration and Initialization**
    - Declare a string as a character array and another one as a string literal. Print both.
    - Modify the string stored in the array and explain why you can’t modify the string literal.

2. **String Length (`strlen()`)**
    - Write a program to calculate and print the length of a string using `strlen()`.
    - Create your own function to compute string length without using `strlen()`.

3. **String Copy (`strcpy()`)**
    - Write a program to copy one string into another using `strcpy()`.
    - Write your own function to copy a string character by character without using `strcpy()`.

4. **String Concatenation (`strcat()`)**
    - Concatenate two strings using `strcat()`.
    - Write your own function to concatenate two strings without using `strcat()`.

5. **String Comparison (`strcmp()`)**
    - Write a program that compares two strings using `strcmp()` and prints whether they are equal or which one is lexicographically greater.
    - Write your own function to compare two strings without using `strcmp()`.

6. **Substring Search (`strstr()`)**
    - Write a program to search for a substring inside a string using `strstr()`. Print the position of the substring if found, or a message if not found.

7. **Character Search (`strchr()`)**
    - Write a program to search for the first occurrence of a character in a string using `strchr()`.
    - Write your own function to search for a character in a string without using `strchr()`.

8. **Reversing a String**
    - Write a function that reverses a string in-place.
    - Test it on strings of different lengths, including empty strings and single-character strings.

9. **String Case Conversion**
    - Write a function to convert a string to all uppercase or all lowercase letters.
    - Test it with a string that contains a mix of letters, numbers, and special characters.

10. **Reading Strings from Input**
- Use `fgets()` to read a line of text input and print it back.
- Compare it with using `scanf("%s")` to show the difference in handling spaces.

---

### **10 Exercises to Handle String Pitfalls**

1. **Null-Terminator Handling**
    - Write a program that intentionally omits the null terminator from a string, and observe the effects when using string functions like `strlen()` and `strcpy()`. Fix the program to correctly handle the null terminator.

2. **Buffer Overflow Prevention**
    - Write a program that copies a large string into a small buffer using `strcpy()` and observe the behavior. Then, modify it to safely copy only up to the size of the destination buffer using `strncpy()`.

3. **Unintentional String Modification**
    - Declare a string literal and attempt to modify one of its characters. Observe the behavior (which may crash). Then, rewrite the program to copy the literal into a character array before modification.

4. **Off-by-One Errors in Arrays**
    - Write a function that creates an off-by-one error when working with a string (e.g., missing the null terminator). Debug the program and fix the error by correctly accounting for the array bounds.

5. **Null Pointer Dereference**
    - Write a program that attempts to manipulate a `NULL` string pointer, which leads to a crash. Implement a check for `NULL` before proceeding with string operations.

6. **Avoiding Memory Leaks**
    - Allocate memory dynamically for a string using `malloc()`, use the string, and then forget to free the memory. Write a second version of the program that correctly frees the allocated memory.

7. **Handling String Overflow in `scanf()`**
    - Use `scanf()` to read a string without providing a size limit and observe the potential buffer overflow. Fix it by using `scanf("%99s", str)` to limit the input size.

8. **Safe String Copy (`strncpy()`)**
    - Demonstrate the problem of `strncpy()` not adding a null terminator if the string is truncated. Write code that manually adds the null terminator when using `strncpy()`.

9. **String Comparison Issues**
    - Write a program that compares two strings using the `==` operator instead of `strcmp()`. Observe the incorrect results, and then rewrite the program using `strcmp()`.

10. **Uninitialized Strings**
    - Write a program that uses an uninitialized string and attempts to perform operations on it. Identify and explain the undefined behavior, then rewrite the program to properly initialize the string before use.

---
