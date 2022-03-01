/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 13:48:29 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/27 18:47:15 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*atoi_base(long nb, char *base, int size_base);

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(base) < 2)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (j < ft_strlen(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	find_value(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i] && base[i] != c)
		i++;
	if (base[i] == c)
		return (i);
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	bsize;
	int	i;
	int	sign;
	int	res;

	bsize = check_base(base);
	if (!bsize)
		return (0);
	i = 0;
	res = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && find_value(str[i], base) >= 0)
	{
		res = res * bsize + find_value(str[i], base) * sign;
		i++;
	}
	return (res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int	nb;
	char	
		*str;

	if (!check_base(base_from) || !check_base(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	str = atoi_base((long)nb, base_to, check_base(base_to));
	return (str);
}
/*
#include <stdio.h>
int main (int ac, char **av)
{
	(void)ac;
	printf("%s", ft_convert_base(av[1], av[2], av[3]));
}*/
