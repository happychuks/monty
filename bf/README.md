# Introduction to Brainfuck

Brainfuck is an esoteric programming language known for its minimalistic design and simplicity. It was created by Urban Müller in 1993 with the goal of being the smallest possible Turing-complete language.

## Overview

- **Memory Tape:** Brainfuck operates on a simple memory model with a tape of cells, each initially set to zero.
- **Commands:** The language has only eight commands, which are represented by single characters: `>`, `<`, `+`, `-`, `[`, `]`, `,`, and `.`.
- **Execution:** A Brainfuck program consists of a sequence of these commands, and it manipulates the memory tape based on the command it encounters.

## Key Commands

- `>` and `<`: Move the memory pointer to the right or left.
- `+` and `-`: Increment or decrement the value at the current memory cell.
- `[` and `]`: Create a loop, executing the enclosed commands while the current cell is not zero.
- `,` and `.`: Read a character from input or write a character to output.

## Example
branfuck file is saved using the .bf extension

Consider the following Brainfuck code:

```brainfuck
++++++++++[>+>+++>+++++++>++++++++++<<<<-]>>>++.>+.+++++++..+++.>++.<<+++++++++++++.>++++.------.--------.>+.>.

This script prints the string "School" followed by a newline character.

Brainfuck, although challenging to write and read due to its minimalism, serves as an intriguing exercise in programming and understanding the fundamentals of computation.

## Hello World.
The following program prints "Hello World!" and a newline to the screen:
```
[ This program prints "Hello World!" and a newline to the screen, its
  length is 106 active command characters. [It is not the shortest.]

  This loop is an "initial comment loop", a simple way of adding a comment
  to a BF program such that you don't have to worry about any command
  characters. Any ".", ",", "+", "-", "<" and ">" characters are simply
  ignored, the "[" and "]" characters just have to be balanced. This
  loop and the commands it contains are ignored because the current cell
  defaults to a value of 0; the 0 value causes this loop to be skipped.
]
++++++++               Set Cell #0 to 8
[
    >++++               Add 4 to Cell #1; this will always set Cell #1 to 4
    [                   as the cell will be cleared by the loop
        >++             Add 2 to Cell #2
        >+++            Add 3 to Cell #3
        >+++            Add 3 to Cell #4
        >+              Add 1 to Cell #5
        <<<<-           Decrement the loop counter in Cell #1
    ]                   Loop until Cell #1 is zero; number of iterations is 4
    >+                  Add 1 to Cell #2
    >+                  Add 1 to Cell #3
    >-                  Subtract 1 from Cell #4
    >>+                 Add 1 to Cell #6
    [<]                 Move back to the first zero cell you find; this will
                        be Cell #1 which was cleared by the previous loop
    <-                  Decrement the loop Counter in Cell #0
]                       Loop until Cell #0 is zero; number of iterations is 8

The result of this is:
Cell no :   0   1   2   3   4   5   6
Contents:   0   0  72 104  88  32   8
Pointer :   ^

>>.                     Cell #2 has value 72 which is 'H'
>---.                   Subtract 3 from Cell #3 to get 101 which is 'e'
+++++++..+++.           Likewise for 'llo' from Cell #3
>>.                     Cell #5 is 32 for the space
<-.                     Subtract 1 from Cell #4 for 87 to give a 'W'
<.                      Cell #3 was set to 'o' from the end of 'Hello'
+++.------.--------.    Cell #3 for 'rl' and 'd'
>>+.                    Add 1 to Cell #5 gives us an exclamation point
>++.                    And finally a newline from Cell #6
```
For "readability", this code has been spread across many lines, and blanks and comments have been added. Brainfuck ignores all characters except the eight commands +-<>[],. so no special syntax for comments is needed (as long as the comments do not contain the command characters). The code could just as well have been written as:
```
++++++++[>++++[>++>+++>+++>+<<<<-]>+>+>->>+[<]<-]>>.>---.+++++++..+++.>>.<-.<.+++.------.--------.>>+.>++.
```
