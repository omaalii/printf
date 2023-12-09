/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omaali <omaali@student.42barcelon>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 03:25:41 by omaali            #+#    #+#             */
/*   Updated: 2023/10/29 03:25:41 by omaali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_print.h"

int print_str(char *str)
{
	int	count;
	count = 0;
	while (str && count != -1)
		count += print_char((int)*str);
		str++;
	return (count);
}
