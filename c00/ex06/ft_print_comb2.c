/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 16:46:36 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/14 15:34:23 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_nums(int num)
{
	char	c;

	c = num / 10 + '0';
	write(1, &c, 1);
	c = num % 10 + '0';
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	part1;
	int	part2;

	part1 = 0;
	while (part1 < 99)
	{
		part2 = part1 + 1;
		while (part2 <= 99)
		{
			write_nums(part1);
			write(1, " ", 1);
			write_nums(part2);
			if (part1 != 98 | part2 != 99)
				write(1, ", ", 2);
			part2++;
		}
		part1++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
}*/
