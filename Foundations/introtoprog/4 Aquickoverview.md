### Lesson 3: Variables, Data Types, and Basic Operations

#### 1. Learning Objectives
- **Understand Variables and Data Types**: Students will understand what variables are, how they store data, and the different data types available in Python (integers, floats, strings, booleans).
- **Perform Basic Arithmetic and Logical Operations**: Students will learn to use Python for basic arithmetic operations (addition, subtraction, multiplication, division) and logical operations (and, or, not).
- **Use Built-in Python Functions**: Students will be introduced to Python's built-in functions for performing operations such as type conversion and input/output.

#### 2. Guiding Questions
- **What is a Variable?**: How does a variable store data, and why are variables important in programming?
- **What are the Common Data Types in Python?**: What are integers, floats, strings, and booleans, and how are they used?
- **How do Arithmetic Operations Work in Python?**: How can we perform addition, subtraction, multiplication, and division in Python?
- **What are Logical Operations?**: How do logical operations work, and when would you use `and`, `or`, and `not`?
- **How can Built-in Functions Simplify Code?**: What are some common built-in Python functions, and how can they be used in everyday coding?

#### 3. Teaching Section (Written Blog)

Welcome to Lesson 3: Variables, Data Types, and Basic Operations! In this lesson, we’ll delve into some of the core concepts in Python programming, starting with how to use variables, understand data types, perform basic arithmetic operations, and work with logical expressions. By the end of this lesson, you should have a solid foundation to build more complex programs.

### Understanding Variables

**What is a Variable?**

A variable in programming is like a labeled container in which you can store data. When you declare a variable, you’re essentially telling Python to allocate some space in memory to hold a value. The value can be a number, text, or even more complex types like lists and dictionaries.

Imagine you’re working in a kitchen and need to store ingredients. You’d put sugar in a jar labeled "Sugar," flour in a jar labeled "Flour," and so on. In the same way, a variable lets you store a piece of data in memory and gives you a way to refer to that data later.

For example, let’s say you want to store your age in a variable:
```python
age = 25
```
Here, `age` is the variable, and `25` is the value stored in it. Whenever you need to use your age in the program, you can simply refer to the `age` variable.

**Why are Variables Important?**

Variables are a fundamental concept in programming because they allow you to store, manipulate, and retrieve data efficiently. They make your code flexible and reusable. Imagine writing a program that calculates the area of a rectangle. Without variables, you’d have to manually input the length and width every time. With variables, you can change the dimensions as needed without rewriting the entire formula.

### Exploring Data Types

**What are Data Types?**

Every piece of data in Python has a type, known as a data type. A data type defines the nature of the data and what operations can be performed on it. Common data types include:

- **Integers (`int`)**: Whole numbers, e.g., `5`, `100`, `-20`.
- **Floats (`float`)**: Numbers with decimals, e.g., `3.14`, `2.0`, `-0.001`.
- **Strings (`str`)**: Text, e.g., `"Hello"`, `'Python'`.
- **Booleans (`bool`)**: True or False values, e.g., `True`, `False`.

Let’s look at how to use these data types:

```python
int_var = 42           # Integer
float_var = 3.14       # Float
string_var = "Hello"   # String
bool_var = False       # Boolean
```

Each of these variables holds a different type of data. Understanding data types is crucial because it affects how you can interact with the data. For instance, you can add two integers, but adding a string and an integer will cause an error.

**Type Conversion**

Sometimes, you’ll need to convert data from one type to another. This is known as type conversion. Python provides built-in functions like `int()`, `float()`, `str()`, and `bool()` for this purpose.

Here’s an example:
```python
age = "25"            # age is a string
age = int(age)        # Convert age to an integer
height = float("5.9") # Convert string to float
```
Type conversion is particularly useful when dealing with user input, which is often read as a string even if it represents a number.

### Performing Basic Arithmetic Operations

**Arithmetic in Python**

Python can be used as a powerful calculator to perform basic arithmetic operations like addition, subtraction, multiplication, and division. Here’s a quick overview:

- **Addition (`+`)**: Combines two numbers into a sum.
- **Subtraction (`-`)**: Subtracts one number from another.
- **Multiplication (`*`)**: Multiplies two numbers.
- **Division (`/`)**: Divides one number by another.
- **Integer Division (`//`)**: Divides one number by another and rounds down to the nearest integer.
- **Modulus (`%`)**: Returns the remainder of a division operation.
- **Exponentiation (`**`)**: Raises one number to the power of another.

Let’s see these operations in action:

```python
a = 10
b = 3
addition = a + b           # 13
subtraction = a - b        # 7
multiplication = a * b     # 30
division = a / b           # 3.33
integer_division = a // b  # 3
modulus = a % b            # 1
exponentiation = a ** b    # 1000
```

These operations can be combined and nested to perform more complex calculations. The order of operations (PEMDAS/BODMAS) is followed, just as in mathematics, ensuring that multiplication and division are performed before addition and subtraction.

### Understanding Logical Operations

**What are Logical Operations?**

In Python, logical operations allow you to combine multiple conditions or invert the truthiness of a condition. The three primary logical operators are:

- **`and`**: Returns `True` if both conditions are `True`.
- **`or`**: Returns `True` if at least one condition is `True`.
- **`not`**: Inverts the truth value of a condition.

Let’s see how logical operations work:

```python
is_raining = True
has_umbrella = False
should_go_out = is_raining and has_umbrella  # False
should_stay_home = not is_raining           # False
can_go_for_walk = is_raining or has_umbrella # True
```

Logical operations are useful in decision-making, where your program needs to respond to various conditions. For instance, you might use logical operations to determine if a user is both logged in and has the right permissions to access a page.

### Using Built-in Functions

**What are Built-in Functions?**

Python comes with several built-in functions that perform common tasks, saving you time and making your code more efficient. Some essential built-in functions include:

- **`print()`**: Outputs data to the console.
- **`input()`**: Accepts user input from the console.
- **`len()`**: Returns the length of a string, list, or other collection.
- **`type()`**: Returns the data type of a variable.

Here are some examples of using built-in functions:

```python
# Using print() to display a message
print("Welcome to Python programming!")

# Using input() to get user input
name = input("Enter your name: ")
print("Hello, " + name)

# Using len() to find the length of a string
length_of_name = len(name)
print("Your name has", length_of_name, "characters.")

# Using type() to check the data type of a variable
age = 25
print("The type of age is", type(age))
```

Built-in functions like `input()` and `print()` are fundamental for interacting with users, while `len()` and `type()` help you work with data more effectively.

In conclusion, mastering variables, data types, arithmetic operations, logical expressions, and built-in functions is crucial as you advance in Python programming. These foundational skills will be your tools as you start building more complex programs. Next, we’ll move on to a practical demonstration to solidify these concepts.

#### 4. Demonstration Section

This section will involve live coding or walkthroughs where the instructor will demonstrate the concepts explained in the teaching section. 

**Variables and Data Types**:
- Demonstrate how to create variables of different types and print their values:
    ```python
    name = "Alice"
    age = 30
    temperature = 98.7
    is_hungry = True
    print(name, age, temperature, is_hungry)
    ```

**Basic Arithmetic Operations**:
- Demonstrate arithmetic operations and print the results:
    ```python
    a = 10
    b = 3
    print("Addition:", a + b)
    print("Subtraction:", a - b)
    print("Multiplication:", a * b)
    print("Division:", a / b)
    print("Integer Division:", a // b)
    print

("Modulus:", a % b)
    ```

**Logical Operations**:
- Demonstrate logical operations with variables:
    ```python
    is_sunny = True
    is_weekend = False
    print("Can go to the beach:", is_sunny and is_weekend)
    print("Can stay home:", not is_sunny)
    ```

**Using Built-in Functions**:
- Demonstrate the use of `input()`, `print()`, and `len()` functions:
    ```python
    user_name = input("Enter your name: ")
    print("Hello, " + user_name)
    print("Length of your name:", len(user_name))
    ```

In this demonstration, students should actively participate by typing out the examples themselves and observing the output. This hands-on approach will help reinforce their understanding.

7. Quiz Section

    Problem 1: Create a variable x and assign it the value of 10. Create a variable y and assign it the value of 5. Print the sum of x and y.

    python

x = 10
y = 5
print(x + y)

Problem 2: Write a program to check if a number is even or odd. Use a variable number and assign it a value.

python

number = 7
if number % 2 == 0:
    print("Even")
else:
    print("Odd")

Problem 3: Create a variable temp and assign it the value of 75. Check if the temperature is above 70 and print "Hot" if it is, otherwise print "Cool".

python

temp = 75
if temp > 70:
    print("Hot")
else:
    print("Cool")

Problem 4: Write a program that asks for the user's first and last name, then prints them together as a full name.

python

    first_name = input("Enter your first name: ")
    last_name = input("Enter your last name: ")
    full_name = first_name + " " + last_name
    print("Full name:", full_name)

8. Test to Validate Quiz Solutions

Let's run the code for each problem to validate the solutions:

```
# Problem 1
x = 10
y = 5
sum_result = x + y
assert sum_result == 15, f"Test failed: {sum_result} != 15"

# Problem 2
number = 7
if number % 2 == 0:
    result = "Even"
else:
    result = "Odd"
assert result == "Odd", f"Test failed: {result} != 'Odd'"

# Problem 3
temp = 75
if temp > 70:
    temperature_check = "Hot"
else:
    temperature_check = "Cool"
assert temperature_check == "Hot", f"Test failed: {temperature_check} != 'Hot'"

# Problem 4
first_name = "John"
last_name = "Doe"
full_name = first_name + " " + last_name
assert full_name == "John Doe", f"Test failed: {full_name} != 'John Doe'"
```

