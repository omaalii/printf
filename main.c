#include "ft_printf.c"
#include <stdio.h>

int main()
{
    int result1 = 0;
    int result2 = 0;
    result1 = printf("%p", "");
    printf("\n");
    result2 = ft_printf("%p", "");

    printf("RESULT REAL -> %i, RESULT OMAR -> %i", result1, result2);

    return (0);
}