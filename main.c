#include "ft_printf.c"
#include <stdio.h>

int main()
{
    char    c;

    c = 'q';
    printf("%d\n",  ft_printf("cust --> %d\n", 10));
    printf("%d\n",  printf("orig --> %d\n", 10));
    printf("%d\n",  ft_printf("cust --> %s\n", "omar"));
    printf("%d\n",  printf("orig --> %s\n", "omar"));
    printf("%d\n",  ft_printf("cust --> %p\n", &c));
    printf("%d\n",  printf("orig --> %p\n", &c));
    printf("%d\n",  ft_printf("cust --> %c\n", 'b'));
    printf("%d\n",  printf("orig --> %c\n", 'b'));
    printf("%d\n",  ft_printf("cust --> %u\n", 1286));
    printf("%d\n",  printf("orig --> %u\n", 1286));
    printf("%d\n",  ft_printf("cust --> %x\n", 1360));
    printf("%d\n",  printf("orig --> %x\n", 1360));
    printf("%d\n",  ft_printf("cust --> %X\n", 1200));
    printf("%d\n",  printf("orig --> %X\n", 1200));
    printf("%d\n",  ft_printf("cust --> %%\n"));
    printf("%d\n",  printf("orig --> %%\n"));

    return (0);
}
