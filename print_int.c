/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 08:44:29 by omaali            #+#    #+#             */
/*   Updated: 2023/12/02 08:44:29 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	check_min_num(int nb)
{
	int	count;

	count = 0;
	if (nb <= -2147483648)
	{
		if (write(1, "2147483648", 11) == -1)
		{	
			count = -1;
			return (-1);
		}
		count += 11;
		return (-1);
	}
	return (count);
}

int	print_int(int nb)
{
	int	count;

	count = 0;
    if ((check_min_num(nb)) == -1)
        return ;
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

#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("%i", print_int(32));
	return (0);
}