# Basic Programs to C Programming Language - University Assignment

For the detailed Documentation, click the link:
[Documentation](Documentation/ATHANASIOU_19390005.pdf)

## Course Information
- **Course**: Computer Programming
- **Semester**: 1
- **Program**: [UNIWA](https://www.uniwa.gr/)
- **Department**: [Information and Computer Engineering](https://ice.uniwa.gr/)
- **Instructor**: [Georgios Meletiou](https://ice.uniwa.gr/emd_person/17562/)
- **Laboratory**: M2
- **Date of Completion**: 9/11/2021

## Student Information
- **Name**: Athanasiou Vasileios Evangelos
- **Student ID**: ice19390005
- **Status**: Graduate

## Assignment Title
**Title**: Basic Programs in C

## Description
This assignment demonstrates several basic C programs, including topics such as variables, standard input/output, arithmetic and logical operations, and how to handle them in C. Additionally, it explores the preincrement and postincrement operators and includes practical examples and source code.

The program helps users understand:
- What a variable is and its characteristics
- Standard input/output handling in C
- Arithmetic, relational, and logical operators
- Preincrement and postincrement operators

### Theory Topics Covered:
1. **What is a Variable?**
   - A variable is a symbolic name for a memory location that holds a value and can be changed during the program’s execution.

2. **Characteristics of a Variable**:
   - Variables have a type (e.g., `int`, `float`, `char`), a storage class (where and how long they exist in memory), and a scope (where they can be accessed in the program).

3. **Standard Input and Output**:
   - **Standard Input**: Refers to the default input device, typically the keyboard. Functions like `scanf()` handle standard input in C.
   - **Standard Output**: Refers to the default output device, typically the console or terminal. Functions like `printf()` handle standard output in C.

4. **Functions to Handle Standard Input and Output in C**:
   - **Standard Input**: 
     - `scanf()` reads formatted input from the user.
   - **Standard Output**:
     - `printf()` prints formatted output to the terminal.

5. **Operators**:
   - **Arithmetic Operators**: Used for mathematical operations like addition, subtraction, multiplication, division, and modulus.
   - **Relational Operators**: Used to compare two values, e.g., `==`, `!=`, `<`, `>`, `<=`, `>=`.
   - **Logical Operators**: Include AND (`&&`), OR (`||`), and NOT (`!`) to combine or negate conditions.

6. **Preincrement and Postincrement Operators**:
   - **Preincrement (`++x`)**: Increments the value of the variable before its value is used in an expression.
   - **Postincrement (`x++`)**: Uses the current value of the variable before incrementing it.

### Source Code:
The project includes two source code files:
- **`MathsIntegers.c`**: Demonstrates basic arithmetic operations with integers, covering addition, subtraction, multiplication, division, and modulus.
- **`CubeSphere.c`**: Calculates the surface area and volume of a cube and a sphere using the same length for both the edge of the cube and the radius of the sphere.

## Requirements
- **C Compiler**: GCC or any C compiler
- **Operating System**: Linux/Windows/MacOS
- **Development Environment**: Command Line / IDE

## Installation and Usage

### 1. Clone the Repository
```
git clone https://github.com/Computer-Programming-aka-Uniwa/Basic.git
cd Basic
```

### 2. Compile
```
gcc -o MathsIntegers MathsIntegers.c
gcc -o CubeSphere CubeSphere.c
```

### 3. Run
```
./MathsIntegers
./CubeSphere
```