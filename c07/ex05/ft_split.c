/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 15:08:34 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/27 18:48:32 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	check_seperator(char c, char *charset)
{
	int	i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	count_strings(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_seperator(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !check_seperator(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlen_sep(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && ! check_seperator(str[i], charset))
		i++;
	return (i);
}

char	*ft_word(char *str, char *charset)
{
	int	wlen;
	int	i;
	char	
		*word;

	i = 0;
	wlen = ft_strlen_sep(str, charset);
	word = (char *)malloc(sizeof(char) * (wlen + 1));
	while (i < wlen)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	
		**strings;
	int	i;

	i = 0;
	strings = (char **)malloc(sizeof(char *)
			* (count_strings(str, charset) + 1));
	while (*str != '\0')
	{
		while (*str && check_seperator(*str, charset))
			str++;
		if (*str)
		{
			strings[i] = ft_word(str, charset);
			i++;
		}
		while (*str && !check_seperator(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}
/*
#include <stdio.h>
int main(int ac, char **av)
{
	int		index;
	char	**split;
	(void)	ac;
	split = ft_split(av[1], av[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}*/
