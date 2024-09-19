# The Very Basics of C

**lesson objective: Today we will look at variables and basic routines in C**

Rather than jam-packing each lesson with ideas, I want to keep it as atomic as possible. C is a different animal from Java or Python and this means people get lost or confused about how C functions. Similar to our Java and Python courses, there will be exercises and quizzes at the end of Each Unit

## Key Points

1. Everything in C is a number, ever type, every array, every variable can be converted into a number. Now, this doesn't mean you are automatically going to only use numbers, just that the compilers and interal workings of c see everything as numbers. 
2. What C outputs is an observable state and it can be described as an abstract state machine. We'll look more into that later in our compilers class, but for now, just know that c functions this way.
3. All types are static, meaning once a function or variable has a type, that type cannot change. 

This isn't too dissimilar to Java, but there are some key things to takeaway: 

1. No objects and methods. This may be new to you completely, but you will get the hang of it. If you want to bag up your functions and variables into a data structure of sorts, we'll look at how you could do that.
2. No memory management. This is key. You'll see how that impacts things later on, but from now on you will have to manage your own memory. While this seems awful, it is better you learn how memory is managed in a manual way.


We have two "basic" set of types: Basic types and derived types:

### Basic types

1. Integer Types

C provides a range of integer types to support various sizes and representations (signed and unsigned):

    int: The standard integer type, typically 32 bits on modern systems, though the size can vary depending on the architecture. It can store both positive and negative values.
    unsigned int: An integer type that only stores non-negative values (including zero).

C provides other integer types that guarantee specific sizes:

    short (often 16 bits).
    long (at least 32 bits, sometimes 64 bits).
    long long (at least 64 bits).

For each of these types, there's also an unsigned version that can store only non-negative values, allowing the range to be extended:

    unsigned short
    unsigned long
    unsigned long long

The size of each type can be found using the sizeof operator, which returns the number of bytes.
2. Floating-Point Types

C supports floating-point numbers (decimal values) with the following types:

    float: Typically 32 bits, single precision floating-point type.
    double: Typically 64 bits, double precision floating-point type.
    long double: Extended precision floating-point type. The size of long double can vary but is often greater than 64 bits on some platforms.

Floating-point types are used for representing real numbers with fractional parts. The precision of these types increases from float to double to long double.
3. Character Types

C provides character types for storing characters and small integers:

    char: A type that typically occupies 1 byte (8 bits). It can store a character (as per the ASCII or UTF-8 encoding) or a small integer.
        signed char: An explicitly signed version of char. It stores small integer values and can represent negative values.
        unsigned char: An unsigned version of char that can only store non-negative values.

In C, a char is essentially a small integer type, but it is typically used to store and manipulate individual characters (e.g., for strings).
4. Boolean Type

In C99 and later, C includes a Boolean type:

    _Bool: A type that represents boolean values (true or false).
    In stdbool.h, _Bool is defined as bool, and true/false are defined as macros.

Before C99, programmers often used integers (int) to represent Boolean values, where 0 was considered false and any non-zero value was considered true.
5. Void Type

   void: This is used to indicate the absence of any value.
   void is commonly used for functions that don’t return a value.
   void* is a generic pointer type that can point to any data type, which makes it useful in functions like malloc().

### other simple types
In addition to the basic and derived types, C provides several specialized types that are commonly used for specific purposes like measuring time, memory sizes, and platform-independent data manipulation. These types are defined in standard headers and are crucial for writing portable and efficient programs. Let’s explore some of the most important ones:
1. size_t

   Description: size_t is an unsigned integer type used to represent the size of objects in bytes. It is typically returned by the sizeof operator and is widely used in memory-related functions like malloc, calloc, and array indexing.

   Declared in: <stddef.h> and <stdlib.h>.

   Why size_t?: The size of size_t is platform-dependent but always large enough to represent the size of any object in memory. On a 32-bit system, it’s typically 32 bits, and on a 64-bit system, it’s 64 bits.

Example:

c

size_t size = sizeof(int); // Returns the size of an int in bytes
void* ptr = malloc(10 * sizeof(int)); // Allocate memory for 10 integers

2. ptrdiff_t

   Description: ptrdiff_t is a signed integer type used to represent the difference between two pointers. This is useful in pointer arithmetic when you subtract one pointer from another.

   Declared in: <stddef.h>.

   Why ptrdiff_t?: Like size_t, it is platform-dependent, but since it is signed, it can represent negative differences between pointers, making it more suitable for pointer subtraction.

Example:

c

int arr[10];
ptrdiff_t diff = &arr[5] - &arr[0]; // Calculates the difference in positions

3. time_t

   Description: time_t is an arithmetic type used to represent time in seconds since the Unix epoch (00:00:00 UTC on January 1, 1970). It is used in time-related functions like time() and difftime().

   Declared in: <time.h>.

   Why time_t?: It provides a platform-independent way of representing time. The exact type may vary (sometimes long, long long, or another integer type), but it can represent large enough values to handle modern timekeeping.

Example:

c

time_t now = time(NULL); // Get the current time
printf("Current time: %ld\n", now);

4. clock_t

   Description: clock_t is a type used to represent processor time. It is often used to measure the amount of CPU time consumed by a program.

   Declared in: <time.h>.

   Why clock_t?: It represents clock ticks, not real time. The number of clock ticks per second is platform-dependent and can be retrieved using the constant CLOCKS_PER_SEC.

Example:

c

clock_t start = clock();
// Code to measure
clock_t end = clock();
double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
printf("Elapsed CPU time: %f seconds\n", elapsed_time);

5. uintptr_t and intptr_t

   Description: These types are used to hold integer values that are large enough to store a pointer. uintptr_t is unsigned, while intptr_t is signed. These types are useful when you need to perform arithmetic on pointers or store pointer values in integers.

   Declared in: <stdint.h>.

   Why uintptr_t and intptr_t?: They provide a way to perform pointer arithmetic and conversions in a platform-independent manner.

Example:

c

uintptr_t addr = (uintptr_t)ptr; // Convert a pointer to an unsigned integer

6. off_t

   Description: off_t is a type used to represent file sizes and offsets in files. It is commonly used with file I/O functions like lseek() to manipulate large files.

   Declared in: <unistd.h> or <sys/types.h>, depending on the platform.

   Why off_t?: It is specifically designed to handle large file offsets, especially in systems where file sizes can exceed 2 GB.

Example:

c

off_t offset = lseek(fd, 0, SEEK_END); // Move to the end of a file

7. ssize_t

   Description: ssize_t is a signed integer type that is used to represent the size of objects or the result of functions that can return either a positive size or a negative value to indicate an error (e.g., read()).

   Declared in: <unistd.h>.

   Why ssize_t?: While size_t is always unsigned, ssize_t can represent negative values, which is important when functions need to return error codes, like the number of bytes read by read().

Example:

c

ssize_t bytes_read = read(fd, buffer, sizeof(buffer)); // Can return -1 on error

8. dev_t, ino_t, mode_t

These types are often used in system programming, especially for working with file systems and devices:

    dev_t: Represents device IDs (used to uniquely identify devices).
    ino_t: Represents inode numbers, which are used to identify files within a file system.
    mode_t: Represents file modes (permissions).

These types are typically defined in system-specific headers like <sys/types.h> and are used in system calls like stat() and chmod().
Example:

```c
struct stat st;
stat("somefile", &st);
printf("Inode number: %ld\n", (ino_t)st.st_ino);
```

9. pid_t

   Description: pid_t is used to represent process IDs. It is returned by functions like getpid() and used in process management system calls like fork() and wait().

   Declared in: <sys/types.h>.

Example:

```c
pid_t pid = fork();
if (pid == 0) {
// Child process
}
```

10. sig_atomic_t

    Description: sig_atomic_t is a type used to represent variables that can be safely accessed in signal handlers. It is the smallest integer type that can be read and written atomically.

    Declared in: <signal.h>.

Example:

c

volatile sig_atomic_t flag = 0;

Summary of Commonly Used Types:

    size_t: For sizes of objects in bytes.
    ptrdiff_t: For differences between pointers.
    time_t: For representing calendar time.
    clock_t: For representing processor time.
    uintptr_t/intptr_t: For storing pointer values in integers.
    off_t: For file offsets.
    ssize_t: For signed size values, often used in system calls.
    pid_t, dev_t, ino_t, mode_t: For system programming.

These types are part of the broader C standard library and provide a powerful way to handle system-level tasks, timekeeping, and memory management in a platform-independent way.

## Implicit Conversion
Implicit conversions in C, also known as **type promotion** or **automatic type conversion**, occur when the compiler automatically converts one data type to another during an operation without the programmer needing to explicitly cast it. This process is guided by certain rules defined by the C standard to ensure the result of expressions is handled consistently and safely.

Let's break down the key aspects of implicit conversions between basic types in C:

### 1. **Integer Promotion**
Whenever smaller integer types (`char`, `short`, etc.) are involved in expressions, they are promoted to `int` or `unsigned int` before the operation is performed. This is known as **integer promotion**.

- **Signed integer types** (`char`, `short`) are promoted to `int`.
- **Unsigned integer types** (`unsigned char`, `unsigned short`) are promoted to `unsigned int`.

**Example**:
```c
char a = 10;
short b = 20;
int result = a + b;  // Both 'a' and 'b' are promoted to 'int' before addition
```

### 2. **Usual Arithmetic Conversions**
When different types are used in the same arithmetic operation, the **usual arithmetic conversions** occur. These conversions ensure that both operands are of the same type before the operation is performed.

#### The Rules:
1. **Both operands are promoted to the same type**: If the types differ, C promotes the smaller type to the larger type.
2. **Integer vs. Floating-point**: If one operand is a floating-point type (`float`, `double`, `long double`), the other operand is promoted to a floating-point type.
    - If one operand is `float`, the other operand is promoted to `float`.
    - If one operand is `double`, the other operand is promoted to `double`.
    - If one operand is `long double`, the other operand is promoted to `long double`.

#### Example:
```c
int a = 5;
float b = 2.5;
float result = a + b;  // 'a' is implicitly converted to 'float', then addition is performed
```

### 3. **Implicit Conversions Between Integer Types**
When performing operations on different integer types, C follows the rule of **integer promotion** to ensure that both operands are of the same type before the operation.

#### Example:
```c
int a = 100;
unsigned short b = 10;
unsigned int result = a + b;  // 'b' is promoted to 'int', but the result is stored in an unsigned int
```

- **Signed to unsigned conversion**: If a signed integer and an unsigned integer are used in the same expression, the signed integer is converted to an unsigned integer.
- **Widening conversions**: If operands are of different widths, the narrower type is promoted to the wider type (e.g., `short` to `int` or `long`).

#### Unsigned and signed type conversions:
If a signed and an unsigned type are combined in an expression, the signed type is converted to the unsigned type. This can lead to unexpected results when negative values are involved.

**Example**:
```c
int a = -5;
unsigned int b = 10;
unsigned int result = a + b;  // 'a' is converted to unsigned, leading to unexpected behavior
```

### 4. **Floating-Point Conversions**
C provides implicit conversions between different floating-point types. The conversion occurs from a lower precision type to a higher precision type, ensuring no loss of precision.

- **Float to Double**: When a `float` is used in an expression with a `double`, the `float` is promoted to `double`.
- **Double to Long Double**: When a `double` is used in an expression with a `long double`, the `double` is promoted to `long double`.

#### Example:
```c
float a = 3.5f;
double b = 4.2;
double result = a + b;  // 'a' is promoted to 'double' before addition
```

### 5. **Void Pointers**
Implicit conversions are allowed between any pointer type and a `void*`. However, implicit conversions from `void*` to a specific pointer type require an explicit cast.

**Example**:
```c
int* ptr;
void* vptr = ptr;  // Implicit conversion from 'int*' to 'void*'
```

### 6. **Character to Integer Promotion**
In C, `char` types (both signed and unsigned) are automatically promoted to `int` when used in expressions. This allows arithmetic operations on characters, which are treated as their ASCII values.

**Example**:
```c
char ch = 'A';  // ASCII value of 'A' is 65
int result = ch + 1;  // 'ch' is promoted to 'int', so result is 66
```

### 7. **Rank of Types in Implicit Conversions**
Types in C are ranked in terms of their size and precision. When an operation involves two different types, the type with the higher rank is chosen as the common type. Here’s the ranking:

1. `long double`
2. `double`
3. `float`
4. `unsigned long long`
5. `long long`
6. `unsigned long`
7. `long`
8. `unsigned int`
9. `int`

When operands have different types, the operand with the lower rank is converted to the type of the operand with the higher rank.

#### Example:
```c
unsigned long long a = 1000;
int b = -5;
unsigned long long result = a + b;  // 'b' is promoted to 'unsigned long long'
```

### 8. **Type Promotion in Function Calls**
When passing arguments to a function that does not have a prototype (or if using `...` in variadic functions like `printf`), **default argument promotions** occur:
- `char` and `short` are promoted to `int`.
- `float` is promoted to `double`.

#### Example:
```c
void printValue(int val);
printValue('A');  // 'A' is promoted to 'int', passing the ASCII value (65)
```

### 9. **Constant Expressions and Type Promotion**
In constant expressions, C promotes small integer constants to the appropriate type automatically. For example, a literal like `5` is treated as an `int`, but it can be promoted to a wider type based on the context.

#### Example:
```c
long long a = 5;  // The constant 5 is implicitly promoted to 'long long'
```

### 10. **Potential Pitfalls of Implicit Conversions**
Implicit conversions can sometimes lead to unintended behavior, especially when converting between signed and unsigned types or floating-point and integer types.

- **Truncation**: When converting from a floating-point type to an integer type, the fractional part is truncated.
- **Overflow**: When converting a large unsigned integer to a signed integer, overflow can occur.
- **Loss of Precision**: When converting a `double` to a `float`, precision may be lost.

**Example**:
```c
double x = 5.7;
int y = x;  // Implicit conversion truncates the fractional part, so 'y' becomes 5
```

---

### Summary of Key Points:
- **Integer Promotion**: Smaller integers are promoted to `int` or `unsigned int`.
- **Usual Arithmetic Conversions**: Types are converted to a common type during arithmetic operations.
- **Integer and Floating-Point Conversions**: Lower precision types are promoted to higher precision types.
- **Mixing Signed and Unsigned Types**: Signed integers are converted to unsigned, which can lead to unexpected results.
- **Type Promotion in Function Calls**: Small types like `char` and `short` are promoted to `int` in function calls.

Implicit conversions provide flexibility, but they can also introduce subtle bugs if not understood carefully, especially when dealing with different integer types or floating-point precision issues.