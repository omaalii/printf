/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 08:45:33 by omaali            #+#    #+#             */
/*   Updated: 2023/12/27 16:34:19 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_unsint( unsigned int nb)
{
	int count;

	count = 0;
	if(nb > 9)
	{
		count += print_int(nb/10);
		count += print_int(nb % 10);
		if (count == -1)
			return (-1);
	}
	else
		count += print_char(nb + '0');
		if (count == -1)
			return (-1);
	return (count);
}
