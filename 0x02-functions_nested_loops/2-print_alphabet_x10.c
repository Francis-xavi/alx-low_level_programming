#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	 print_alphabet_x10();

	 int count = 0;
	 char letter;

	 while (count++ <= 10)
	 {
		 for (letter="a"; letter <= "z"; letter++)
			 _putchar(letter);
		 _putchar("\n");
	 }
}
