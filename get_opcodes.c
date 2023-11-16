#include "monty.h"

/**
 * get_opcodes - Selects the correct opcode to perform
 * @opc: Opcode passed
 * Return: Pointer to the function that executes the opcode
 */
void (*get_opcodes(char *opc))(stack_t **stack, unsigned int line_number)
{
    instruction_t opcodes[] = {
        {"push", _push},
        {"pall", _pall},
        {"pint", _pint},
        {"pop", _pop},
        {"swap", _swap},
        {"queue", _queue},
        {"stack", _stack},
        {"add", _add},
        {"nop", _nop},
        {"sub", _sub},
        {"mul", _mul},
        {"div", _div},
        {"mod", _mod},
        {"pchar", _pchar},
        {"pstr", _pstr},
        {"rotl", _rotl},
        {"rotr", _rotr},
        {NULL, NULL}
    };
    int j;

    for (j = 0; opcodes[j].opcode; j++)
    {
        if (_strcmp(opcodes[j].opcode, opc) == 0)
            break;
    }

    return (opcodes[j].f);
}

