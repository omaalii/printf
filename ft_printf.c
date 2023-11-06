/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 03:24:14 by omaali            #+#    #+#             */
/*   Updated: 2023/10/29 08:23:42 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stdio.h>

int	ft_printf(const format*, ...)
{
	va_list	arg;
	int		count;

	va_start(arg, format);
	count = 0;
	while (*format != '\0')
	{
		if (*format == '%')
			print_format(*(format++))
		else
			ft_putchr(chr, count)



