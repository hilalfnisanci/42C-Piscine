/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:01:25 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/27 18:36:31 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int	slen;
	int	i;
	char
		*dup;

	slen = ft_strlen(src);
	dup = (char *)malloc(slen * sizeof(char) + 1);
	if (!dup)
		return (0);
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int main(void)
{
	char	src[] = "test test";
	char	*duplicate;
	duplicate = ft_strdup(src);
	printf("src:		%s", src);
	printf("\nduplicate:	%s", duplicate);
	return (0);
}*/
