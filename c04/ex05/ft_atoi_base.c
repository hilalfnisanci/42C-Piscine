/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 15:56:00 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/21 19:00:16 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	count;
	int	j;

	count = 0;
	if (base[0] == '\0' || base[1] == '\0')
		return (0);
	while (base[count] != '\0')
	{
		if (base[count] == '-' || base[count] == '+'
			|| base[count] < 32 || base[count] > 126)
			return (0);
		j = count + 1;
		while (base[j])
		{
			if (base[count] == base[j])
				return (0);
			j++;
		}
		count++;
	}
	return (count);
}

int	nb_base(char str, char *base)
{
	int	nb;

	nb = 0;
	while (base[nb] != '\0')
	{
		if (str == base[nb])
			return (nb);
		nb++;
	}
	return (-1);
}

int	is_negative(char *str, int *ptr_i)
{
	int	count;
	int	i;

	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	count = 1;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
			count *= -1;
		i++;
	}
	*ptr_i = i;
	return (count);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	negative;
	int	nb;
	int	nb2;
	int	begin_len;

	nb = 0;
	i = 0;
	begin_len = check_base(base);
	if (begin_len >= 2)
	{
		negative = is_negative(str, &i);
		nb2 = nb_base(str[i], base);
		while (nb2 != -1)
		{
			nb = (nb * begin_len) + nb2;
			i++;
			nb2 = nb_base(str[i], base);
		}
		return (nb *= negative);
	}
	return (0);
}
/*
int main (void)
{
	char	str[] = "---+--+1234ab54f";
	int num = ft_atoi_base(str, "0123456789");
	printf("%d", num);
	return (0);
}*/
