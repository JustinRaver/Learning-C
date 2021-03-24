# Chapter 1

The main function is a function that returns an int. All c functions default to
returning an integer

(#include) is a C macro that is used to include libraries in a C program

Comments can be in the form //(line comment) /* */(block comment)

All C variables must be declared before use

There is no input or output defined in the C language. All I/O is part of the 
<stdio.h> library

#### Basics of printf for numbers

* %d print as integer
* %6d print as integer atleast 6 decimals wide
* %f print as floating point
* %6f print as floating point atleast 6 wide
* %.2f print as floating point, 2 charracters after the decimal
* %6.2f print as floating point, at least 6 wide and 2 after decimal point
* %f is used for both float and double

For loops clearly seperated into three parts seperated by semi-colons

* initialization
* test of condition
* increment 

It is bad practice to bury magic numbers in programs. One way to deal with them 
is #define macro 

in form: #define (name replacement list) this can be any sequence of characters 
not limited to numbers

These definitions are called SYMBOLIC CONSTANTS and are conventionally written 
in upper case

#### Character Input output

getchar() reads the next input character from a text stream and returns its
value.

putchar() prints a character each time its called

Exercise 1-6 value of (getchar != EOF) value always boolean 1 if true 0 if false
Exercise 1-7 value of EOF is -1

* Sidenote: CTRL-c send SIGINT  terminating application while CTRL-d tell the
terminal to send an EOF


#### prefix operators(++count --count) does operation before evaluation
#### postfix operators(count++ count--) does operation after evaluation

functions are structured in the form:

return-type function-name(parameters){
	declarations
	statements
}

function declaration: ex: int power(int base, int i);

In C all functions are pass by value so these values are temporary rather than
the originals. Functions can modify a variable in the calling function when the
address of the variable is passed.

Arrays are always passed by reference.

Arrays of characters are terminated by a null terminator '\0'

When using methods like printf on character arrays there should always be a null
terminator in the arary.

an external variable must be defined exactly once outside and function. This
sets aside storage for it. 
The variable must then also be decalred in each function that wants to acces it

the variable may be an explicit extern statement or implicit based off of the
context of usage. 

The extern declaration can be omitted if the external variable exists in the
same source file.

If the definitions occur in another file them the extern declarations are
necessary. These declaration usually occur in a header file .h

* Definition: refers to the place where the variable is created or assigned
  storage
* Declaration refers to places where the nature of the variable is stated but no
  storage is allocated
