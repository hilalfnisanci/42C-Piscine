/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 15:46:28 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/15 13:04:10 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	putchar(char first, char sec, char thr)
{
	write(1, &first, 1);
	write(1, &sec, 1);
	write(1, &thr, 1);
	if (first != '7' | sec != '8' | thr != '9')
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	first;
	char	sec;
	char	thr;

	first = '0';
	while (first <= '7')
	{
		sec = first + 1;
		while (sec <= '8')
		{
			thr = sec + 1;
			while (thr <= '9')
			{
				putchar(first, sec, thr);
				thr++;
			}
			sec++;
		}
		first++;
	}
}
/*
int	main(void){
	ft_print_comb();

	return(0);
}
*/
