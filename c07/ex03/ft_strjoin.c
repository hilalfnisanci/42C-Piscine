/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 18:38:37 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/27 18:44:57 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}

int	find_final_length(char **strings, int size, int sep_len)
{
	int	final_len;
	int	index;

	final_len = 0;
	index = 0;
	while (index < size)
	{
		final_len += ft_strlen(strings[index]);
		final_len += sep_len;
		index++;
	}
	final_len -= sep_len;
	return (final_len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		index;
	int		full_len;
	char	*dup;
	char	*string;

	index = -1;
	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	full_len = find_final_length(strs, size, ft_strlen(sep));
	dup = (char *)malloc((full_len + 1) * sizeof(char));
	string = dup;
	if (!dup)
		return (0);
	while (++index < size)
	{
		ft_strcpy(dup, strs[index]);
		dup += ft_strlen(strs[index]);
		if (index < size - 1)
		{
			ft_strcpy(dup, sep);
			dup += ft_strlen(sep);
		}
	}
	*dup = '\0';
	return (string);
}
/*#include <stdio.h>
int	main(void)
{
	char	**strs;
	char	*separator;
	char	*result;
	int	size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	strs[0] = "Hello";
	strs[1] = "friend,";
	strs[2] = "you are awesome";
	separator = " ";
	result = ft_strjoin(size, strs, separator);
	printf("%s\n", result);
	free(result);
}*/
