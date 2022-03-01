/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:37:01 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/22 16:41:08 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	m;
	int	i;

	i = 1;
	m = nb / 2;
	if (nb <= 1)
		return (0);
	while (++i <= m)
		if (nb % i == 0)
			return (0);
	return (1);
}
/*
int main(void)
{
	printf("%d ", ft_is_prime(3));
}*/
