/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:22:41 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/23 12:03:59 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	long	num;

	num = nb;
	if (num <= 0)
		return (0);
	if (num == 1)
		return (1);
	i = 2;
	if (num >= 2)
	{
		while (i * i <= num)
		{
			if (i * i == num)
				return (i);
			i++;
		}
	}
	return (0);
}
/*
int main(void)
{
	printf("%d ", ft_sqrt(9));
}*/
