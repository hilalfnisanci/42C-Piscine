/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hnisanci <hnisanci@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:40:08 by hnisanci          #+#    #+#             */
/*   Updated: 2022/02/16 13:19:04 by hnisanci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{	
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
