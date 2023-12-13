# 0x19. C - Stacks, Queues - LIFO, FIFO

![plot](./bytecodes/makeTea.png)

## Description

This ALX project is a custom ByteCode interpreter, coded in C.

# The Monty language
Monty 0.98 is a scripting language that is first compiled into Monty byte codes (Just like Python). It relies on a unique stack, with specific instructions to manipulate it. The goal of this project is to create an interpreter for Monty ByteCodes files.

## Monty byte code files

Files containing Monty byte codes usually have the .m extension. Most of the industry uses this standard but it is not required by the specification of the language. There is not more than one instruction per line. There can be any number of spaces before or after the opcode and its argument:
```bash
 push 0$
push 1$
push 2$
  push 3$
                   pall    $
push 4$
    push 5    $
      push    6        $
pall$
```
Monty byte code files can contain blank lines (empty or made of spaces only, and any additional text after the opcode or its required argument is not taken into account:
```
push 0 Push 0 onto the stack$
push 1 Push 1 onto the stack$
$
push 2$
  push 3$
                   pall    $
$
$
                           $
push 4$
$
    push 5    $
      push    6        $
$
pall This is the end of our program. Monty is awesome!$
```
# Usage
All the files are compiled in the following form:
```bash
gcc -Wall -Werror -Wextra -pedantic *.c -o monty. 
```
To run the program
```bash
./monty bytecode_file 
```
## Summary of all operations included:

| File | Description |
|--------|-------------|
[main.c](./main.c) | entry point of the program
[monty.h](./monty.h) | main header file
[linkedlists.h](./linkedlists.h) | header file for the linkedlists functions
[linkedlist_funcs1.c](./linkedlist_funcs1.c) | doubly linked list functions
[mem_free_handler.c](./mem_free_handler.c) | memory handling functions
[helper_funcs.c](./helper_funcs.c) | helper functions
[getOpcode_func.c](./getOpcode_func.c) | function that picks the right function for each Opcode
[opcode_handler_funcs1.c](./opcode_handler_funcs1.c) | handler functions for some Opcodes functions
[opcode_handler_funcs2.c](./opcode_handler_funcs2.c) | handler functions for some Opcodes function
[opcode_handler_funcs3.c](./opcode_handler_funcs3.c) | handler functions for some Opcodes function
[opcode_handler_funcs4.c](./opcode_handler_funcs4.c) | handler functions for some Opcodes function


## Contact

Feel free to reach out with any questions, suggestions, or contributions to:

* **Happy Felix Chukwuma**
  * [Contact Happy F. Chukwuma](mailto:<happychukwuma@gmail.com>?subject=[_Collaboration_on_MONTY_PROJECT])
