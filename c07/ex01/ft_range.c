/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:49:19 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/27 18:40:13 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	range;
	int	*dup;
	int	index;

	index = 0;
	range = max - min;
	if (min >= max)
		return (0);
	dup = malloc(range * sizeof(int));
	if (!dup)
		return (0);
	while (index < range)
	{
		dup[index] = min + index;
		index++;
	}
	return (dup);
}
/*
int main(void)
{
	int min = 4;
	int max = 10;
	int size = max - min;
	int *tab;
	tab = ft_range(min, max);
	
	for (int i = 0; i< size; i++)
		printf("%d ", tab[i]);
}*/
