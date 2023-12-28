/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 08:44:29 by omaali            #+#    #+#             */
/*   Updated: 2023/12/28 22:06:22 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_int_recurs(int nb)
{
	int	count;
	int	wrt;

	count = 0;
	if (nb > 9)
	{
		wrt = print_int_recurs(nb / 10);
		if (wrt == -1)
			return (-1);
		count += wrt;
		wrt = print_int_recurs(nb % 10);
		if (wrt == -1)
			return (-1);
		count += wrt;
	}
	else
	{
		if (print_char(nb + '0') == -1)
			return (-1);
		count++;
	}
	return (count);
}

int	print_int(int nb)
{
	int	sign_len;
	int	wrt;

	sign_len = 0;
	wrt = 0;
	if (nb <= -2147483648)
	{
		if (write(1, "-2147483648", 11) == -1)
			return (-1);
		return (11);
	}
	if (nb < 0)
	{
		nb = -nb;
		if (print_char('-') == -1)
			return (-1);
		sign_len++;
	}
	wrt = print_int_recurs(nb);
	if (wrt == -1)
		return (-1);
	return (sign_len + wrt);
}
