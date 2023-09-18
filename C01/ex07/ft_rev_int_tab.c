/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 15:14:37 by aapryce           #+#    #+#             */
/*   Updated: 2023/02/28 17:10:06 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	int	arr[] = {1,2,3,4,5,6};
	int	size = 6;
	
	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	ft_rev_int_tab(arr, size);

	for (int i = 0; i < size; i++)
	{
		printf("%d", arr[i]);
	}
	return (0);
}
*/
