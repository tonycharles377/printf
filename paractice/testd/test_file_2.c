Test file 2 - #include"main.h"
#include<stdio.h>
#include<unistd.h>
/**
 *  * main - test file
 *   * Return: 0
 *    */
int main(void)
{
	int std = 0, custom = 0;
	char S = 'S', W = 'W';

	write(1, "STANDARD: ", 10);
	std = printf("%c.%c.Engineer\n", S, W);
	printf("std prints %d characters\n", std);

	write(1, "CUSTOME-MADE: ", 14);
	custom = _printf("%c.%c.Engineer\n", S, W);
	printf("custom prints %d characters\n", custom);



	return (0);
}

