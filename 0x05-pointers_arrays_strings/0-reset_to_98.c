#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 98;
    *n=&n;
    printf("n=%n", n);
      return (0);
 }
