# Introduction to C Programming Language

C is a **general-purpose programming language** created by **Dennis Ritchie** at **Bell Laboratories** in **1972**. 

It remains one of the most popular and widely-used languages, despite being quite old. The main reasons for its enduring popularity include its efficiency, versatility, and influence on other programming languages. 

### Key Features:
- **Foundation of Computer Science**: C is considered a fundamental language in the field of computer science.
- **UNIX**: C is tightly associated with the development of the UNIX operating system. In fact, UNIX was originally written in C.
- **Performance**: C is known for being very fast compared to languages like Java or Python, due to its low-level nature.
- **Versatility**: It is used in various applications, including systems programming, embedded systems, and software development.

---

## First C Program

```c
#include <stdio.h>

int main() {
  printf("Hello World!");
  return 0;
}
```
## Output

```c
Hello World!
Process returned 0 (0x0) execution time : 0.011 s
Press any key to continue.
```
## Explanation

```c
#include <stdio.h>
```

In C programming, ```#include <stdio.h>``` is a preprocessor directive that tells the compiler to include the Standard Input/Output (I/O) library in a program. The ```stdio.h``` file contains definitions for functions that handle input and output, such as printing to the screen, reading input from the user, and working with files.

```<stdio.h>``` is a header file library that lets us work with input and output functions, such as printf(). Header files add functionality to C programs.

```c main()``` function always appear in a C program. It is the entry point of a C program.

```printf()``` is a function used to output/print text to the screen. In our example, it will output "Hello World!".

```c
C statements ends with a semicolon ;
```

```c
return 0; ends the main() function.
```
The journey of the expression “Hello, World!” dates back to 1972, to Brian Kernighan working at Bell Laboratories. Kernighan used the phrase in a document called “A Tutorial Introduction to the Language B or BPCL”.

## Statements

A computer program is a list of "instructions" to be "executed" by a computer.

In a programming language, these programming instructions are called statements.

The following statement "instructs" the compiler to print the text "Hello World" to the screen:

```c
printf("Hello World!");
```

It is important to end the statement with a semicolon ;

Most C programs contain many statements.

The statements are executed, one by one, in the same order as they are written.

```c
printf("Hello World!");
printf("Have a good day!");
```

```c
Hello World!
Have a good day!
```

The first statement is executed first (print "Hello World!" to the screen).
Then the second statement is executed (print "Have a good day!" to the screen).
And at last, the third statement is executed (End the C program successfully).

## Output (Print Text)

```c
printf("This sentence will work!");
```

```c
printf(This sentence will produce an error.);
```
***Texts must be wrapped inside double quotations marks "".***

## Many printf Functions

```c
#include <stdio.h>

int main() {
  printf("Hello World!");
  printf("I am learning C.");
  printf("And it is awesome!");
  return 0;
}
```

```c
Hello World!I am learning C.And it is awesome!
```
Note that it does not insert a new line at the end of the output.

If we use "\n" then it inserts a new line.

```c
#include <stdio.h>

int main() {
  printf("Hello World!\n");
  printf("I am learning C.\n");
  printf("And it is awesome!\n");
  return 0;
}
```

```c
Hello World!
I am learning C.
And it is awesome!
```

The newline character (\n) is called an escape sequence, and it forces the cursor to change its position to the beginning of the next line on the screen. This results in a new line.


### Examples of other valid escape sequences are:

```
\t	Creates a horizontal tab
```

```
\\	Inserts a backslash character (\)
```

```
\"	Inserts a double quote character
```

## Comments in C

Comments can be used to explain code, and to make it more readable. It can also be used to prevent execution when testing alternative code.

Comments can be singled-lined or multi-lined.

```c
// This is a comment
printf("Hello World!");
```

```c
/* The code below will print the words Hello World!
to the screen, and it is amazing */
printf("Hello World!");
```

This is an example of multi line comment.

***Good to know: Before version C99 (released in 1999), you could only use multi-line comments in C.***

# C Variables

Variables are containers for storing data values, like numbers and characters.
In C, there are different types of variables (defined with different keywords), for example:

- int - stores integers (whole numbers), without decimals, such as 123 or -123
- float - stores floating point numbers, with decimals, such as 19.99 or -19.99
- char - stores single characters, such as 'a' or 'B'. Characters are surrounded by single quotes

# Declaring (Creating) Variables

```c
type variableName = value;
float var = 2568743.258;
```

```c
// Declare a variable
int myNum;

// Assign a value to the variable
myNum = 15;
```

```c
// Declaring and Initializing variable
int myNum = 15;
```
