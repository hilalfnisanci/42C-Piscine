/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:13:43 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/17 17:48:49 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	upper;

	upper = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (upper && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!upper && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			upper = 0;
		}
		else
			upper = 1;
		i++;
	}
	return (str);
}
