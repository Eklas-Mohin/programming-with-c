# **`Introduction to C Programming Language`**

```C``` is a **general-purpose programming language** created by **Dennis Ritchie** at **Bell Laboratories** in **1972**. 

It is a very popular language, despite being old. The main reason for its popularity is because it is a fundamental language in the field of computer science.

```C``` is strongly associated with ```UNIX```, as it was developed to write the ```UNIX``` operating system.

## `Key Features`
- **Foundation of Computer Science**: ```C``` is considered a fundamental language in the field of computer science.
- **UNIX**: ```C``` is tightly associated with the development of the ```UNIX OS```. In fact, ```UNIX``` was originally written in ```C```.
- **Performance**: ```C``` is known for being very fast compared to languages like ```Java``` or ```Python```, due to its low-level nature.
- **Versatility**: It is used in various applications, including systems programming, embedded systems, and software development.

---

## **`First C Program`**

```c
#include <stdio.h>

int main() {
  printf("Hello World!\n");
  return 0;
}
```
## **`Output`**

```c
Hello World!
Process returned 0 (0x0) execution time : 0.011 s
Press any key to continue.
```
## ***`Explanation`***

```c
#include <stdio.h>
```

In ```C``` programming, ```#include <stdio.h>``` is a preprocessor directive that tells the compiler to include the Standard Input/Output ```(I/O)``` library in a program. The ```stdio.h``` file contains definitions for functions that handle input and output, such as printing to the screen, reading input from the user, and working with files.

```<stdio.h>``` is a header file library that lets us work with input and output functions, such as ```printf()```. Header files add functionality to ```C``` programs.

```main()``` function always appear in a C program. It is the entry point of a C program.

```printf()``` is a function used to output/print text to the screen. In our example, it will output ```Hello World!```.

All `C Statements` ends with a semicolon `;`

```c
return 0; 
Terminates the program with exit code 0 (0x0)
```
The journey of the expression ```Hello, World!``` dates back to 1972, to ``Brian`` Kernighan working at Bell Laboratories. Kernighan used the phrase in a document called ``“A Tutorial Introduction to the Language B or BPCL”``.

## `Statements`

A computer program is a list of ``Instructions`` to be ``Executed`` by a computer.

In a programming language, these ``programming instructions`` are called ``Statements``.

The following statement ``instructs`` the compiler to print the text ``Hello World`` and insert a ``new line`` to the screen :

```c
printf("Hello World!\n");
```

It is important to end the statement with a semicolon `;`

Most `C` programs contain many statements.

The statements are executed, one by one, in the same order as they are written.

```c
printf("Hello World!\n");
printf("Have a good day!\n");
```

```c
Hello World!
Have a good day!
```

The first statement is executed first (print "Hello World!" to the screen).
Then the second statement is executed (print "Have a good day!" to the screen).
And at last, the third statement is executed (End the C program successfully).

## `Print Text`

```c
printf("This sentence will work!\n");
```

```c
printf(This sentence will produce an error);
```
***Texts must be wrapped inside double quotations `"Text"`marks.***

## `Many printf Functions`

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
It does not insert a new line at the end of the output.

If we use `\n` then it inserts a new line.

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

The newline character `\n` is called an escape sequence, and it forces the cursor to change its position to the beginning of the next line on the screen, This results in a new line.

# `Escape Sequence Characters in C`

Commonly used escape sequences in C

| Escape Sequence | Description                     |
|------------------|---------------------------------|
| `\a`            | Generates an alert or bell sound |
| `\b`            | Backspace                       |
| `\f`            | Form feed                       |
| `\n`            | Newline                         |
| `\r`            | Carriage return                 |
| `\t`            | Horizontal tab                  |
| `\v`            | Vertical tab                    |
| `\\`            | Backslash (`\`)                 |
| `\'`            | Single quote (`'`)              |
| `\"`            | Double quote (`"`)              |
| `\?`            | Question mark (`?`)             |
| `\0`            | Null character (NUL)            |

## Comments in C

Comments can be used to explain code, and to make it more readable. It can also be used to prevent execution when testing alternative code.

Comments can be singled-lined or multi-lined.

```c
// This is a comment
printf("Hello World!\n");
```

```c
/* The code below will print the words Hello World!
to the screen, and it is amazing */
printf("Hello World!\n");
```

***Good to know: Before version C99 (released in 1999), you could only use multi-line comments in C.***

# `C Variables`

Variables are containers for storing data values, like numbers and characters.
In C, there are different types of variables (defined with different keywords), for example:

- `int` - stores integers (whole numbers), without decimals, such as `123` or `-123`
- `float` - stores floating point numbers, with decimals, such as `19.99` or `-19.99`
- `char` - stores single characters, such as `'a'` or `'B'`. Characters are surrounded by single quotes

***Variables are simply name of the `memory location`***

# ***`Declaring Variables`***

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

## `Format Specifiers`

Format specifiers are used together with the ```printf()``` function to tell the compiler what type of data the variable is storing. It is basically a **placeholder** for the variable value.

A format specifier starts with a percentage sign ```%```, followed by a character.

For example, to output the value of an int variable, use the format specifier ```%d``` surrounded by double quotes (```""```), inside the ```printf()``` function:

```c
int myNum = 15;
printf("%d", myNum);  // Outputs 15
```

```c
To print other types, use %c for char and %f for float
```

## `Example`
```c
// Create variables
int myNum = 15;            // Integer (whole number)
float myFloatNum = 5.99;   // Floating point number
char myLetter = 'D';       // Character

// Print variables
printf("%d\n", myNum);
printf("%f\n", myFloatNum);
printf("%c\n", myLetter);
```


To combine both text and a variable, separate them with a comma inside the ```printf()``` function:

```c
int myNum = 15;
printf("My favorite number is: %d", myNum);
```
To print different types in a single printf() function:

```c
int myNum = 15;
char myLetter = 'D';
printf("My number is %d and my letter is %c", myNum, myLetter);
```

Print a value without storing it in a variable:
```c
printf("My favorite number is: %d", 15);
printf("My favorite letter is: %c", 'D');
```
## ***`Change Variable Values`***

```c
int myNum = 15;  // myNum is 15
myNum = 10;  // Now myNum is 10
```

It is possible to assign the value of one variable to another:
```c
int myNum = 15;

int myOtherNum = 23;

// Assign the value of myOtherNum (23) to myNum
myNum = myOtherNum;

// myNum is now 23, instead of 15
printf("%d", myNum);
```

Or copy values to empty variables:

```c
// Create a variable and assign the value 15 to it
int myNum = 15;

// Declare a variable without assigning it a value
int myOtherNum;

// Assign the value of myNum to myOtherNum
myOtherNum = myNum;

// myOtherNum now has 15 as a value
printf("%d", myOtherNum);
```

## ***`Declare Multiple Variables`***

To declare more than one variable of the same type, use a comma-separated list:

```c
int x = 5, y = 6, z = 50;
printf("%d", x + y + z);
```

Assign the same value to multiple variables of the same type:
```c
int x, y, z;
x = y = z = 50;
printf("%d\n", x + y + z);
```

```c
150
Process returned 0 (0x0) execution time : 0.013 s
Press any key to continue.
```

# ***`C Variable Naming Rules`***
All ```C``` variables must be identified with unique names.

These unique names are called ```identifiers```

Identifiers can be short names (like x and y) or more descriptive names (age, sum, totalVolume).

***Note:** It is recommended to use descriptive names in order to create understandable and maintainable code.

```c
// Good variable name
int minutesPerHour = 60;

// OK, but not so easy to understand what m actually is
int m = 60;
```

**The general rules for naming variables are:**

- Names can contain letters, digits and underscores
- Names must begin with a letter or an underscore (_)
- Names are case-sensitive (myVar and myvar are different variables)
- Names cannot contain whitespaces or special characters like !, #, %, etc.
- Reserved words (such as int) cannot be used as names

**Real-Life Example**

Calculate the Area of a Rectangle

```c
// Create float type variables
float length = 4;
float width = 6;
float area;

// Calculate the area of a rectangle
area = length * width;

// Print the variables
printf("Length is: %f\n", length);
printf("Width is: %f\n", width);
printf("Area of the rectangle is: %f\n", area);
```

# ***`C Data Types`***

A variable in ```C``` must be a specified data type and we must have to use a ```format specifier``` inside the ```printf()``` function to display it.

The ```char``` data type is used to store a single character.

The character must be surrounded by single quotes, like 'A' or 'c', and we use the %c format specifier to print it.

```c
char myGrade = 'A';
printf("%c", myGrade);
```

Alternatively, `ASCII` values can be used to display certain characters.These values are not surrounded by single quotes `('')`, as they are numbers.

`Example`
```c
char a = 65, b = 66, c = 67;
printf("%c", a);
printf("%c", b);
printf("%c", c);
```
`Output`
```c
ABC
```
`Character output Example`
```c
char myText = 'Hello';
printf("%c", myText); //It will only print the last character
```


## ***`Example`***

```c
#include <stdio.h>

int main() {
    // Integer type demonstration
    int a;         // Variable Declaration
    a = 6;         // Variable Initialization
    printf("value stored in a is %d\n", a); // Prints the value of a

    // Character type demonstration
    char c = 'm';  // Declaration & Initialization
    printf("c = %c\n", c);

    // Floating-point type demonstration
    float f = 73.372112f;
    printf("f = %f\n", f); // Prints the value of f (may have slight precision differences)

    // Double precision floating-point demonstration
    double d = 73.372112;
    printf("d = %lf\n", d);

    // Size of C variables depends on machine's architecture
    printf("Size of char: %zu bytes\n", sizeof(char));             // Usually 1 byte
    printf("Size of short: %zu bytes\n", sizeof(short));           // Usually 2 bytes
    printf("Size of int: %zu bytes\n", sizeof(int));               // Usually 4 bytes
    printf("Size of long: %zu bytes\n", sizeof(long));             // Usually 8 bytes on 64-bit systems
    printf("Size of long long: %zu bytes\n", sizeof(long long));   // Usually 8 bytes
    printf("Size of float: %zu bytes\n", sizeof(float));           // Usually 4 bytes
    printf("Size of double: %zu bytes\n", sizeof(double));         // Usually 8 bytes
    printf("Size of long double: %zu bytes\n", sizeof(long double)); // Usually 16 bytes
    printf("Size of void pointer: %zu bytes\n", sizeof(void*));    // Usually 8 bytes on 64-bit systems

    return 0;
}

```
***Output***
```c
value stored in a is 6
c = m
f = 73.372108
d = 73.372112
Size of char: 1 bytes
Size of short: 2 bytes
Size of int: 4 bytes
Size of long: 8 bytes
Size of long long: 8 bytes
Size of float: 4 bytes
Size of double: 8 bytes
Size of long double: 16 bytes
Size of void pointer: 8 bytes
```
