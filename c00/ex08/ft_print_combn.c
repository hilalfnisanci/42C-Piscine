/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 14:22:11 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/14 15:19:31 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_recursive( int prev, int n, int g_length, char g_arr[])
{
	int	i;

	if (n == g_length)
	{
		write(1, g_arr, g_length);
		write(1, ", ", 2);
		return ;
	}
	if (prev == 9)
		return ;
	i = prev;
	while (++i <= 10 - g_length + n)
	{
		g_arr[n] = '0' + i;
		ft_recursive(i, n + 1, g_length, g_arr);
	}
}

void	print_last(int i)
{
	char	c;

	while (i <= 9)
	{
		c = '0' + i++;
		write(1, &c, 1);
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	g_length;
	char
		g_arr[10];

	i = 0;
	g_length = n;
	while (i < 10 - n)
	{
		g_arr[0] = '0' + i;
		ft_recursive(i++, 1, g_length, g_arr);
	}
	print_last(i);
}
/*
int	main(void)
{
	ft_print_combn(2);
	return (0);
}*/
