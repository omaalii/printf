/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 03:24:14 by omaali            #+#    #+#             */
/*   Updated: 2023/12/28 22:09:02 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(char str, va_list args)
{
	if (str == 'c')
		return (print_char(va_arg(args, int)));
	else if (str == 's')
		return (print_str(va_arg(args, char *)));
	else if (str == 'i')
		return (print_int(va_arg(args, int)));
	else if (str == 'd')
		return (print_int(va_arg(args, int)));
	else if (str == 'x')
		return (print_hex(va_arg(args, unsigned int), 0, 1));
	else if (str == 'p')
		return (print_void(va_arg(args, unsigned long), 0, "0123456789abcdef"));
	else if (str == 'u')
		return (print_unsint(va_arg(args, unsigned int)));
	else if (str == 'X')
		return (print_hex(va_arg(args, unsigned int), 1, 1));
	else if (str == '%')
		return (write(1, "%%", 1));
	else
		return (-1);
	return (0);
}

int	ft_printf(char const *str, ...)
{
	int		wrt;
	va_list	args;
	int		count;

	va_start(args, str);
	count = 0;
	wrt = 0;
	while (*str && count != -1)
	{
		if (*str == '%')
		{
			str++;
			wrt = print_format(*str, args);
		}
		else
			wrt = print_char(*str);
		str++;
		if (wrt == -1)
			return (-1);
		count += wrt;
	}
	va_end(args);
	return (count);
}
