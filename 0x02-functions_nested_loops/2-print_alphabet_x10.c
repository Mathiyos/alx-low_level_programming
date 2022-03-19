alx-low_level_programming/0x02-functions_nested_loops/2-print_alphabet_x10.c
@em432
em432 my commit message
Latest commit 7be7d1d 3 days ago
 History
 1 contributor
Executable File  27 lines (21 sloc)  288 Bytes
   
#include "main.h"

/**
 * print_alphabet_x10 - print alphabet
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int alphabet;
int count;


count = 0;
while (count < 10)
{
for (alphabet = 'a' ; alphabet <= 'z'; alphabet++)
{
_putchar(alphabet);
}

count++;
_putchar('\n');
}


}
