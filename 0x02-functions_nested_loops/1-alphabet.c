#include "main.h"
/**
 * print_alphabet - print all alphabet in lowercase
 * Description:you are not allowed to include standard libraries.
 * Return: 0
 */
void print_alphabet(void)
{
        char letter;
        for (letter = 'a'; letter <= 'z'; letter++)
                _putchar(letter);
        _putchar('\n');
}
