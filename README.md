# Welcome to My Square
***

## Task
The task is to create a program called my_square that draws - ironically - a rectangle to stdout.
When the user runs the program they must submit two integers that represent the length of the two sides of the rectangle.
Complexity of the task is that the correct elements ('o', '-', '|') are used in the correct position when building the string that
represents the square. An additional challenge is calculating the total required memory that must be allocated dynamically.

## Description
First the length of the string that represents the rectangle is calculated and memory is allocated using calloc.
Secondly, a for loop iterates over the number of rows that the rectangle has (argument2). A nested for loop places the correct elements
('o', '-', '|') in the string using a number of if statements.
Finally, the square string is printed to stdout using printf.

## Installation
gcc required
Compile:
```
gcc -Wall -Werror -Wextra -o my_square my_square.c
```

## Usage
```
./my_square argument1 argument2
```
argument1 and argument2 of type integer

### The Core Team
anderhu_m

<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px' /></span>
