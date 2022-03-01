/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 13:48:18 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/17 14:39:14 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_printable(char *str)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	if (!size)
		return (addr);
}
