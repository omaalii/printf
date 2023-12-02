/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 03:24:14 by omaali            #+#    #+#             */
/*   Updated: 2023/11/22 02:41:21 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

static int	check_min_num(int nb, int *count)
{
	if (nb <= -2147483648)
	{
		if (write(1, "2147483648", 11) == -1)
		{	
			*count = -1;
			return (-1);
		}
		*count += 11;
		return (-1);
	}
	return (0);

}
int	print_int(int nb)
{
	int	count;

	count = 0;
	if(nb < 0)
	{		
		nb = -nb;
		print_char('-');
	}

	if(nb > 9)
	{
		print_int(nb/10);
		print_int(nb % 10);
	}
	else
		count += print_char(nb + '0');
	return (count);
}

int print_char(int c)
{
	int	count;
	
	count = write(1, &c, 1);
	if (count == -1)
		return ;
	return (count);
}
int print_str(char *str)
{
	int	count;
	count = 0;
	while (str && count != -1)
		count += print_char((int)*str);
		str++;
	return (count);
}
int print_format(char str, va_list args, int *count)
{
	if (str == 'c')
		count += print_char(va_arg(args, int));
	else if (str == 's')
		count += print_str(va_arg(args, char *));
	else if (str == 'i')
		count += print_int(va_arg(args, int));
	else if (str == 'd')
		count += print_decimal(va_arg(args, int), 10);
	else if (str == 'x')
		count += print_decimal(va_arg(args, unsigned int), 16);
	else if (str == 'p')
		count += print_hexadecimal(va_arg(args, unsigned long));
	else if (str == 'u')
		count += print_decimal(va_arg(args, unsigned int), 10);
	else if (str == 'X')
		count += print_decimal(va_arg(args, unsigned int), 16);
	else if (str == '%')
		count += write(1, "%%", 1);
	else 
		count = -1;
	return (count);
}

int ft_printf(const *str, ...)
{
	
	va_list	args;
	int	count;

	va_start(args, str);
	count = 0;
	while (*str && count != -1)
	{
		if (*str == '%')
		{
			str++;
			print_format(str, args);
		}
		else
			count += print_char(str);
		str++;
	}
	va_end(args);
	return count;
}
