/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:14:34 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/10 19:04:05 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	start;

	start = 'a';
	while (start <= 'z')
	{
		write(1, &start, 1);
		start++;
	}
}
/*
int main()
{
	ft_print_alphabet();
	return 0;
}
*/
