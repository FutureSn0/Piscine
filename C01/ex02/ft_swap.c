/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:29:26 by aapryce           #+#    #+#             */
/*   Updated: 2023/03/01 13:34:39 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
#include <stdio.h>

int	main(void)
{
	int	x;
	int	y;

	x = 3;
	y = 6;

	printf("%d", x);
	printf("%d\n", y);
	ft_swap(&x, &y);
	printf("%d", x);
	printf("%d\n", y);
	return (0);
}
*/
