#include <stdio.h>

/* write the program expr, which evaluates a reverse Polish expression from the command line, where each operator or operand is a separate argument
 * expr 2 3 4 + *
 * evaluates to 2 x (3 + 4) */

int main(argc, char *argv[])
{
    // make a stack for operands (ints)
    // iterate over the command line args pushing the ints onto the stack
    // upon finding an operator evaluate it, push answer onto stack
    // continue until no command line args left
    // return last item on stack
}
