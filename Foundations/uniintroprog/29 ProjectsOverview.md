# Projects Overview

There are plenty of projects out there for you to do. We've already done some classic projects throughout this course,
there are plenty, smaller, c-focused projects you can do to help you get a better grasp on the c-language.

## Some things to keep in mind

1. First, you will make mistakes. Every code will have errors, and C code will especially have plenty of errors. Don't worry, we will cover how to pick out and squash dangerous bugs later on in this course.
2. These projects will cover ideas outside of this course. You will often come across things during software development that might force you to learn a new skill or concept on your own. Don't be afraid of learning something new!
3. These projects will start simple and work their way down to complex. You will have errors and bugs. It will take time. Be patient with yourself as you are learning a new language. This isn't Python or Java, this is C a language old enough to be a grandparent if it were a human being.

With that being said, Let's look at the projects!


#The Projects

Here are 15 project ideas, starting from easier to more complex, designed to deepen understanding of the C language while keeping the focus purely on C programming concepts:

### Beginner Projects:
1. **Basic Calculator**
    - Implement a simple command-line calculator that supports addition, subtraction, multiplication, and division using functions.
    - Focus: Basic I/O, arithmetic, and function usage.

2. **Temperature Converter**
    - Create a program that converts temperatures between Celsius, Fahrenheit, and Kelvin.
    - Focus: Data types, conditional statements, and user input handling.

3. **Palindrome Checker**
    - Write a program to check if a given string is a palindrome.
    - Focus: Strings, loops, and basic data manipulation.

4. **Array Sorting Program**
    - Implement sorting algorithms like bubble sort and selection sort to sort an array of integers.
    - Focus: Arrays, loops, and understanding algorithm efficiency.

5. **Character Frequency Counter**
    - Build a program that counts the frequency of each character in a given string.
    - Focus: Arrays, loops, and handling character data.

### Intermediate Projects:
6. **Prime Number Generator**
    - Write a program that generates all prime numbers up to a given limit.
    - Focus: Loops, conditions, and optimization techniques (like Sieve of Eratosthenes).

7. **Dynamic Memory Allocator**
    - Create a program that reads integers from user input and dynamically resizes the memory as more numbers are added.
    - Focus: Pointers, `malloc()`, `realloc()`, and `free()`.

8. **String Manipulation Library**
    - Develop a mini-library for string manipulation functions (e.g., string concatenation, substring, find/replace).
    - Focus: Pointer arithmetic, handling dynamic memory, and function modularity.

9. **Matrix Operations**
    - Implement basic matrix operations such as addition, multiplication, and transposition.
    - Focus: Multi-dimensional arrays, loops, and function design.

10. **Command-line Argument Parser**
- Create a program that takes a variety of options and arguments from the command line and parses them correctly.
- Focus: Command-line argument handling, `argc` and `argv`, string processing.

### Advanced Projects:
11. **Custom Linked List Implementation**
- Write a program that implements a singly linked list, with functions to add, delete, search, and display elements.
- Focus: Structures, dynamic memory, and pointers.

12. **Simple Text Editor**
- Create a minimal text editor that allows a user to read from and write to files, supporting basic commands like insert, delete, and save.
- Focus: File I/O, dynamic memory, and basic user interface design.

13. **Expression Evaluator**
- Build a program to evaluate arithmetic expressions provided in infix notation, converting them to postfix and solving them.
- Focus: Data structures (stacks), parsing algorithms, and handling operator precedence.

14. **Custom Memory Manager**
- Implement a custom memory allocator and deallocator that manages memory blocks manually, similar to `malloc()` and `free()`.
- Focus: Pointer management, memory pools, and optimization techniques.

15. **Binary Search Tree (BST) Implementation**
- Write a program that builds a binary search tree and provides functionality for insertion, deletion, searching, and traversal (in-order, pre-order, post-order).
- Focus: Recursion, dynamic memory, and data structures.

These projects are designed to help someone progress from beginner to more advanced levels in C, mastering language fundamentals and more complex aspects such as memory management, data structures, and algorithm implementation.

Command-line games are an excellent way to make learning C fun and engaging while still focusing on the fundamentals of the language. Here are some project ideas for command-line games that can help students develop skills in C without incorporating other areas like graphics programming or advanced game engines:

### Command-Line Game Projects:

1. **Number Guessing Game**
    - Create a game where the player has to guess a randomly generated number within a certain range, with hints provided (e.g., higher/lower).
    - Focus: Random number generation, loops, conditional statements, and user input handling.

2. **Tic-Tac-Toe**
    - Implement a two-player tic-tac-toe game on a 3x3 grid, where players take turns entering their moves.
    - Focus: Arrays (2D), loops, game logic, and handling user input.

3. **Rock, Paper, Scissors**
    - Build a simple rock-paper-scissors game where the player competes against the computer. The computer makes random choices.
    - Focus: Random number generation, user input, and basic decision-making logic.

4. **Hangman**
    - Implement a command-line version of Hangman where the player guesses letters in a word, with a limited number of incorrect guesses allowed.
    - Focus: Strings, arrays, conditionals, and user input handling.

5. **Snake Game**
    - Create a simple version of the classic Snake game where the snake grows longer as it "eats" food, and the game ends when the snake collides with itself or the walls.
    - Focus: Arrays (to represent the game board), loops, conditionals, and updating game state in real time.

6. **Text-Based Adventure Game**
    - Build a simple text-based adventure game where the player navigates through different rooms or environments and makes choices that affect the outcome.
    - Focus: Strings, structs (for player state and game entities), conditional branching, and user interaction.

7. **Maze Solver**
    - Create a maze game where the player navigates through a randomly generated maze from start to finish.
    - Focus: 2D arrays, random generation of mazes, user input, and pathfinding.

8. **Battleship**
    - Implement a command-line version of the Battleship game where players place their ships on a grid and take turns guessing the location of their opponent’s ships.
    - Focus: 2D arrays, struct usage, game logic, and alternating turns between players.

9. **Connect Four**
    - Build a command-line version of Connect Four where two players alternate dropping pieces into a vertical grid, trying to get four in a row.
    - Focus: 2D arrays, loops, conditionals, and game logic.

10. **Minesweeper**
- Create a simple Minesweeper game where the player uncovers cells in a grid, trying to avoid hidden mines.
- Focus: 2D arrays, recursion (for uncovering neighboring cells), and random number generation.

11. **Blackjack (Simple Card Game)**
- Implement a basic blackjack card game where the player competes against the computer dealer. Cards are dealt randomly, and the game keeps track of scores.
- Focus: Random number generation, arrays or structs for cards, and game logic.

13. **Word Scramble**
- Create a word scramble game where the player is presented with a shuffled word and must guess the correct word within a time limit or a certain number of guesses.
- Focus: Strings, random shuffling algorithms, and user input.

15. **Text-Based Chess**
- Implement a text-based version of chess, where two players can take turns making moves on a command-line chessboard.
- Focus: Structs (for pieces and game state), arrays (to represent the board), and move validation logic.

### Additional Features to Add Complexity:
- **AI Opponents**: For some games (like Tic-Tac-Toe or Battleship), you could implement a basic AI to play against the user.
- **Score Tracking**: Keep track of wins, losses, or high scores, and store them in a file.
- **Multiplayer**: Implement local multiplayer, where two users take turns, or even a simple networked game using sockets (if you later want to expand into networking, though this is outside pure C).

These command-line games allow students to focus on mastering fundamental C concepts like arrays, structs, loops, conditionals, and basic game logic while building fun and interactive projects.