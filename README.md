# C - Basics Exercises

These are my first small exercises in C. I use them to try things out and keep notes on what I have looked into so far.

The `c` files are in the `exercises` folder. Compiled versions go into the `build` folder.

## Exercises

### hello.c

My first C program.

It uses `printf()` to print `"Hello, World!"` in the terminal.

### variables.c

A small 3D-printing example I used to learn about variables.

Things I tried here:

`int` for whole numbers
`double` for decimal numbers
`char` for a single character
`char[]` for text
Simple calculations with variables
Printing values with `printf()`

Some useful placeholders:

`%d` for an `int`
`%c` for a single character
`%s` for a `string`
`%f` for a decimal number
`%.2f` for a decimal number with two decimal places

### conditions.c

My first exercise using `if`, `else if`, and `else`.

The program checks a nozzle temperature and prints whether it is too low, okay, or too high.

### input.c

My first exercise with user input.

The program asks for a nozzle temperature using `scanf()` and then checks the entered value with the conditions from the previous exercise.

`&nozzle_temperature` tells `scanf()` where the entered value should be stored.

## Useful commands

Compile a file:

gcc -Wall -Wextra -Werror exercises/input.c -o build/input

Run the compiled program:

./build/input

The filename needs to be changed depending on which exercise is compiled.