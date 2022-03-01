/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:52:54 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/27 18:41:23 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*dup;
	int	len;
	int	index;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	len = max - min;
	dup = malloc(len * sizeof(int));
	if (!dup)
	{
		*range = 0;
		return (-1);
	}	
	*range = dup;
	index = 0;
	while (index < len)
	{
		dup[index] = min + index;
		index++;
	}
	return (len);
}
/*
int main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&tab, min, max);
	printf("size: %d\n", size);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}*/
