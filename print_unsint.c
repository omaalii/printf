/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 08:45:33 by omaali            #+#    #+#             */
/*   Updated: 2023/12/28 22:31:17 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsint(unsigned int nb)
{
	int	count;
	int	wrt;

	count = 0;
	if (nb > 9)
	{
		wrt = print_unsint(nb / 10);
		if (wrt == -1)
			return (-1);
		count += wrt;
		wrt = print_unsint(nb % 10);
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
