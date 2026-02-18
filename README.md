<p align="center">
  <img src="https://www.especial.gr/wp-content/uploads/2019/03/panepisthmio-dut-attikhs.png" alt="UNIWA" width="150"/>
</p>

<p align="center">
  <strong>UNIVERSITY OF WEST ATTICA</strong><br>
  SCHOOL OF ENGINEERING<br>
  DEPARTMENT OF COMPUTER ENGINEERING AND INFORMATICS
</p>

<p align="center">
  <a href="https://www.uniwa.gr" target="_blank">University of West Attica</a> ·
  <a href="https://ice.uniwa.gr" target="_blank">Department of Computer Engineering and Informatics</a>
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

---

<p align="center">
  Athens, November 2021
</p>

---

<p align="center">
  <img src="https://upload.wikimedia.org/wikipedia/commons/1/19/C_Logo.png" width="250"/>
</p>

---

# README

## C Programming Fundamentals

The project covers **fundamental concepts of the C programming language**, with emphasis on variables, standard input/output, operators, and increment mechanisms, supported by practical source code examples.

---

## Table of Contents

| Section | Folder / File              | Description                                          |
| ------: | -------------------------- | ---------------------------------------------------- |
|       1 | `assign/`                  | Assignment material                                  |
|     1.1 | `assign/project2.png`      | Assignment description / problem statement (English) |
|     1.2 | `assign/εργασία2.png`      | Assignment description / problem statement (Greek)   |
|       2 | `docs/`                    | Theoretical documentation                            |
|     2.1 | `docs/Basic-Elements.pdf`  | Basic programming elements and concepts (English)    |
|     2.2 | `docs/Βασικά-Στοιχεία.pdf` | Basic programming elements and concepts (Greek)      |
|       3 | `src/`                     | Source code implementations                          |
|     3.1 | `src/CubeSphere.c`         | Geometric computation: cube–sphere problem           |
|     3.2 | `src/MathsIntegers.c`      | Integer arithmetic and mathematical operations       |
|       4 | `README.md`                | Project documentation                                |
|       5 | `INSTALL.md`               | Usage instructions                                   |

---

## 1. Theory Topics Covered

### 1.1 Variables

A **variable** is a designated memory location used to temporarily store data during program execution.

### 1.2 Characteristics

- The stored data can change during execution.
- Users define meaningful variable names for easier understanding and maintenance.

### 1.3 Common Data Types

- `int` – Integers
- `float`, `double` – Decimal (floating-point) numbers
- `char` – Single characters
- `bool` – Logical (true/false) values

---

## 2. Standard Input / Output (I/O)

### 2.1 Standard Input

- The input channel, usually the **keyboard**, used to enter data into a program.
- **Function:** `scanf()`
  - Reads user input.
  - Stores it in a variable using the **address-of operator (`&`)**.

### 2.2 Standard Output

- The output channel, usually the **screen**, used to display program data.
- **Function:** `printf()`
  - Prints text messages or variable values to the console.

---

## 3. Operators

### 3.1 Arithmetic Operators

Used to perform mathematical calculations:

- Addition (`+`)
- Subtraction (`-`)
- Multiplication (`*`)
- Division (`/`)
- Modulus (`%`)

### 3.2 Relational Operators

Used to compare values and return:

- `1` (True) or `0` (False)

Examples:

- `==`, `!=`, `<`, `>`

### 3.3 Logical Operators

Used to combine or negate conditions:

| Operator    | Description                                     |
| ----------- | ----------------------------------------------- |
| `&&` (AND)  | Produces `1` only if **both operands** are `1`  |
| `\|\|` (OR) | Produces `1` if **at least one operand** is `1` |
| `!` (NOT)   | Reverses the logical value (`1 → 0`, `0 → 1`)   |

---

## 4. Increment Operators

- **Pre-increment (`++x`)**  
  Increases the variable value by one **before** it is used in an expression.

- **Post-increment (`x++`)**  
  Uses the current value of the variable **before** increasing it by one.

---

## 5. Source Code Documentation

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
