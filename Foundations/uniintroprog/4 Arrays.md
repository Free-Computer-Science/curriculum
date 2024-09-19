# Arrays

What are Arrays?

    Arrays in C are collections of elements of the same type, stored contiguously in memory.
    The elements of an array can be accessed using an index, with indexing starting at 0.
    Arrays are often used for storing large quantities of data that need to be processed in a systematic manner.

Declaration and Initialization

    Arrays are declared with a specified type and size. Example:

    c

int arr[5];  // Declares an array of 5 integers

Arrays can be initialized at the time of declaration:

c

    int arr[5] = {1, 2, 3, 4, 5};

    If fewer elements are provided in the initialization list, the remaining elements are initialized to 0.

Accessing Array Elements

    Elements are accessed using the array index (subscript notation):

    c

    int first = arr[0];  // Access the first element
    arr[3] = 10;  // Modify the fourth element

Array Size

    The size of the array (number of elements) is fixed at compile time. Once defined, the array size cannot be changed.
    To determine the size of an array, you can use the sizeof operator:

    c

    int size = sizeof(arr) / sizeof(arr[0]);  // Size of the array

Multidimensional Arrays

    Arrays can have more than one dimension, commonly used for matrices or tables.

    c

    int matrix[3][3];  // 2D array (3x3 matrix)

    Elements are accessed using multiple indices, e.g., matrix[1][2].

Array and Pointer Relationship

    Arrays and pointers are closely related in C. The name of the array is a pointer to its first element.
    Accessing elements using pointers is equivalent to array indexing:

    c

    int* p = arr;
    int first = *p;  // Same as arr[0]

Boundary Issues

    Array bounds are not automatically checked in C, which means accessing an index out of range leads to undefined behavior. This can result in program crashes or unexpected results.

Passing Arrays to Functions

    When you pass an array to a function, what is actually passed is a pointer to the first element of the array.

    c

        void func(int arr[], int size) {
            // arr is treated as a pointer
        }

        You need to pass the size of the array separately, as the array’s size information is not available inside the function.

## Key Notes:

Fixed-Size Storage: Arrays in C are fixed in size, meaning you cannot dynamically resize them without using dynamic memory management (malloc and free).

Initialization Rules: When initializing an array with fewer values than its declared size, the remaining elements are automatically initialized to 0 for integer types, \0 for character arrays, and 0.0 for floating-point types.

Multidimensional Arrays: These are essentially arrays of arrays. Each dimension introduces a new level of nested arrays. For example, a 2D array is an array of 1D arrays.

Pointer Arithmetic: Since the name of the array is a pointer to its first element, you can use pointer arithmetic to traverse arrays. For instance, arr[i] is equivalent to *(arr + i).

Function Calls: Arrays are passed by reference, meaning any modifications to the array within a function will affect the original array.

Indexing and Bounds: C does not protect against accessing out-of-bound elements, so it's crucial to manually ensure that array indices remain within valid bounds.

Strings and Arrays: A string in C is essentially an array of char ending with a null terminator ('\0'). Strings and arrays share similar characteristics, with strings having a special behavior due to the null-termination.

Common Pitfalls:
Out-of-Bounds Access: Accessing beyond the array size can corrupt memory and cause unpredictable behavior.
Passing Arrays: When passing arrays to functions, always pass the size of the array explicitly.

Practical Use:
Arrays are fundamental for implementing data structures like lists, stacks, and queues, and for storing data that needs sequential access, such as data buffers, tables, and matrices.
Arrays are often used with loops to iterate over the elements.

