/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 14:16:00 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/11 12:57:57 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	start;

	start = 'z';
	while (start >= 'a' )
	{
		write(1, &start, 1);
		start--;
	}
}
/*
int main()
{
	ft_print_reverse_alphabet();
	return 0;
}
*/
