<p align="center">
  <img src="https://www.especial.gr/wp-content/uploads/2019/03/panepisthmio-dut-attikhs.png" alt="UNIWA" width="150"/>
</p>

<p align="center">
  <strong>UNIVERSITY OF WEST ATTICA</strong><br>
  SCHOOL OF ENGINEERING<br>
  DEPARTMENT OF COMPUTER ENGINEERING AND INFORMATICS
</p>

---

<p align="center">
  <strong>Computer Programming</strong>
</p>

<h1 align="center">
  C Programming Fundamentals
</h1>

<p align="center">
  <strong>Vasileios Evangelos Athanasiou</strong><br>
  Student ID: 19390005
</p>

<p align="center">
  <a href="https://github.com/Ath21" target="_blank">GitHub</a> ·
  <a href="https://www.linkedin.com/in/vasilis-athanasiou-7036b53a4/" target="_blank">LinkedIn</a>
</p>

<hr/>

<p align="center">
  <strong>Supervision</strong>
</p>

<p align="center">
  Supervisor: Nikolaos Vassilas, Professor<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/nikolaos-vassilas/" target="_blank">UNIWA Profile</a>
</p>


<p align="center">
  Co-supervisor: Georgios Meletiou, Laboratory Teaching Staff<br>
</p>

<p align="center">
  <a href="https://ice.uniwa.gr/en/emd_person/georgios-meletiou/" target="_blank">UNIWA Profile</a>
</p>

</hr>

<p align="center">
  Athens, November 2021
</p>

---

# Project Overview

The project covers **fundamental concepts of the C programming language**, with emphasis on variables, standard input/output, operators, and increment mechanisms, supported by practical source code examples.

---

## Table of Contents


| Section | Folder / File | Description |
|------:|---------------|-------------|
| 1 | `assign/` | Assignment material |
| 1.1 | `assign/project2.png` | Assignment description / problem statement (English) |
| 1.2 | `assign/εργασία2.png` | Assignment description / problem statement (Greek) |
| 2 | `docs/` | Theoretical documentation |
| 2.1 | `docs/Basic-Elements.pdf` | Basic programming elements and concepts (English) |
| 2.2 | `docs/Βασικά-Στοιχεία.pdf` | Basic programming elements and concepts (Greek) |
| 3 | `src/` | Source code implementations |
| 3.1 | `src/CubeSphere.c` | Geometric computation: cube–sphere problem |
| 3.2 | `src/MathsIntegers.c` | Integer arithmetic and mathematical operations |
| 4 | `README.md` | Repository overview and instructions |

---


## 1. Theory Topics Covered

### 1.1 Variables

A **variable** is a designated memory location used to temporarily store data during program execution.

#### Characteristics
- The stored data can change during execution.
- Users define meaningful variable names for easier understanding and maintenance.

#### Common Data Types
- `int` – Integers  
- `float`, `double` – Decimal (floating-point) numbers  
- `char` – Single characters  
- `bool` – Logical (true/false) values  

---

### 1.2 Standard Input / Output (I/O)

#### Standard Input
- The input channel, usually the **keyboard**, used to enter data into a program.
- **Function:** `scanf()`  
  - Reads user input.
  - Stores it in a variable using the **address-of operator (`&`)**.

#### Standard Output
- The output channel, usually the **screen**, used to display program data.
- **Function:** `printf()`  
  - Prints text messages or variable values to the console.

---

### 1.3 Operators

#### Arithmetic Operators
Used to perform mathematical calculations:
- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)
- Modulus (`%`)

#### Relational Operators
Used to compare values and return:
- `1` (True) or `0` (False)

Examples:
- `==`, `!=`, `<`, `>`

#### Logical Operators
Used to combine or negate conditions:

| Operator | Description |
|--------|-------------|
| `&&` (AND) | Produces `1` only if **both operands** are `1` |
| `\|\|` (OR)  | Produces `1` if **at least one operand** is `1` |
| `!` (NOT) | Reverses the logical value (`1 → 0`, `0 → 1`) |

---

### 1.4 Increment Operators

- **Pre-increment (`++x`)**  
  Increases the variable value by one **before** it is used in an expression.

- **Post-increment (`x++`)**  
  Uses the current value of the variable **before** increasing it by one.

---

## 2. Source Code Documentation

The following programs are included and fully documented in the report:

- **`MathsIntegers.c`**  
  Focuses on:
  - Integer arithmetic
  - Program structure
  - Variable usage and value flow

- **`CubeSphere.c`**  
  Covers:
  - Calculations related to geometric shapes
  - Example computations
  - Technical remarks and implementation details


---

# Installation & Setup Guide

This repository contains **introductory C programming material** developed for the  
**Computer Programming** course at **University of West Attica (UNIWA)**.

---

## Prerequisites

### Required Software

- **C Compiler**
  - Recommended:
    - **GCC** (Linux / macOS / Windows via MinGW or WSL)

- **Text Editor or IDE**
  - Visual Studio Code `(Recommended)`
  - Code::Blocks
  - Dev-C++
  - CLion
  - Any plain text editor

### Supported Operating Systems
- Windows
- Linux `(Recommended)`
- macOS

---

## Installation

### 1. Clone the Repository

Clone the repository to your local machine:

```bash
git clone https://github.com/Computer-Programming-aka-Uniwa/Basic.git
```

#### Alternative (Without Git)

- Open the repository URL in your browser
- Click Code → Download ZIP
- Extract the ZIP file to a local directory

## Compiling & Running the Programs
### 2. Navigate to Source Directory
```bash
cd Basic/src
```

### 3. Compile the Programs
Using GCC:
```bash
gcc MathsIntegers.c -o MathsIntegers -lm
```
> `-lm` is required to link the math library
```bash
gcc CubeSphere.c -o CubeSphere
```

### 4. Run the Programs
Linux / macOS:
```bash
./MathsIntegers
```
```bash
./CubeSphere
```
Windows:
```bash
MathsIntegers.exe
```
```bash
CubeSphere.exe
```

---

## Open the Documentation
1. Navigate to the `docs/` directory
2. Open the report corresponding to your preferred language:
    - English: `Basic-Elements.pdf`
    - Greek: `Βασικά-Στοιχεία.pdf`