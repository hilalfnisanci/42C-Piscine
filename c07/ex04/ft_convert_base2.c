/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:48:40 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/27 17:39:41 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	find_size(int nb, int size_base)
{
	int	size_nb;

	size_nb = 1;
	if (nb < 0)
		size_nb++;
	while (nb / size_base)
	{
		size_nb++;
		nb = nb / size_base;
	}
	size_nb++;
	return (size_nb);
}

char	*atoi_base(long nb, char *base, int size_base)
{
	int	i;
	int	div;
	char	
		*nbr_base;

	nbr_base = (char *)malloc(find_size(nb, size_base) * sizeof(char));
	i = 0;
	if (nb < 0)
	{
		nbr_base[0] = '-';
		i++;
		nb = -nb;
	}
	div = 1;
	while (nb / div >= size_base)
		div *= size_base;
	while (div)
	{
		nbr_base[i] = base[nb / div];
		i++;
		nb = nb % div;
		div /= size_base;
	}
	nbr_base[i] = '\0';
	return (nbr_base);
}
