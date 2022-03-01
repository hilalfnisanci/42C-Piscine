/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:49:48 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/23 13:34:39 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb < 2)
		return (0);
	while (++i <= (nb / 2))
		if (nb % i == 0)
			return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	nprime;

	nprime = nb;
	while (nprime < 2147483647)
	{
		if (!ft_is_prime(nprime))
			nprime++;
		else
			break;
	}
	return (nprime);
}
/*
int main(void)
{
	printf("%d ", ft_find_next_prime(7));
}*/
