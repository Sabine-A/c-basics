# C - Basics Exercises

These are my first small exercises in C. I use them to try things out and keep notes on what I have looked into so far.

The `.c` files are in the `exercises` folder. Compiled versions go into the `build` folder.

## Exercises

### hello.c

My first C program.

It uses `printf()` to print `"Hello, World!"` in the terminal.

### variables.c

A small 3D-printing example I used to learn about variables.

Things I tried here:

- `int` for whole numbers
- `double` for decimal numbers
- `char` for a single character
- `char[]` for text
- Simple calculations with variables
- Printing and formatting values with `printf()`

Some useful placeholders:

- `%d` for an `int`
- `%c` for a single character
- `%s` for a `string`
- `%f` for a decimal number
- `%.2f` for a decimal number with two decimal places

### conditions.c

An exercise using `if`, `else if`, and `else`.

The program checks a nozzle temperature and prints whether it is too low, okay, or too high.

### input.c

My first exercise with user input.

The program asks for a nozzle temperature using `scanf()` and then checks the entered value with the conditions from the previous exercise.

`&nozzle_temperature` tells `scanf()` where the entered value should be stored.

### loops.c

An exercise using a `for` loop.

It simulates printing several layers and displays the current layer during each loop.

A `for` loop has a starting value, a condition, and a change that happens after every loop.

### while_loops.c

A small nozzle-cooling example using a `while` loop.

The loop keeps running while the current temperature is higher than the target temperature. During each loop, the temperature is reduced by `5`.

I also used `-=` as a shorter way of subtracting a value from a variable.

### functions.c

An exercise with a function that takes parameters and returns a result.

The function calculates an estimated print time using the number of layers and the time needed for each layer.

Things I looked into here:

- Function names
- Parameters
- Return values
- Calling a function from `main()`

### write_characters.c

An exercise using `write()` instead of `printf()`.

I created an `ft_writeChar()` function that can print one character at a time.

`write(1, &character, 1)` means:

- `1` sends the output to the terminal
- `&character` gives `write()` the address of the character
- The last `1` means that one byte should be written

This exercise also showed the difference between a single character such as `'C'` and a string such as `"C42"`.

## Useful commands

Compile an exercise:

```bash
gcc -Wall -Wextra -Werror exercises/example.c -o build/example
```

Run the compiled program:

```bash
./build/example
```

The source and output names need to be changed depending on which exercise is compiled.

The compiler options mean:

- `-Wall` enables common warnings
- `-Wextra` enables additional warnings
- `-Werror` treats warnings as errors