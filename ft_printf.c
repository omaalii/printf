/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 03:24:14 by omaali            #+#    #+#             */
/*   Updated: 2023/12/26 23:34:28 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	print_format(char str, va_list args, int *count)
{
	if (str == 'c')
		count += print_char(va_arg(args, int));
	else if (str == 's')
		count += print_str(va_arg(args, char *));
	else if (str == 'i')
		count += print_int(va_arg(args, int));
	else if (str == 'd')
		count += print_int(va_arg(args, int));
	else if (str == 'x')
		count += print_hex(va_arg(args, unsigned int), 0, 1);
	else if (str == 'p')
		count += print_void(va_arg(args, unsigned long), 0, "0123456789abcdef");
	else if (str == 'u')
		count += print_unsint(va_arg(args, int));
	else if (str == 'X')
		count += print_hex(va_arg(args, unsigned int), 1, 1);
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
