/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsint.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 08:45:33 by omaali            #+#    #+#             */
/*   Updated: 2023/12/02 08:45:33 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int print_unsint( unsigned int nb)
{
int count;

count = 0;
if(nb > 9)
	{
		print_int(nb/10);
		print_int(nb % 10);
	}
	else
		count += print_char(nb + '0');
	return (count);
}


