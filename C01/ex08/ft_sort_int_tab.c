/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:42:50 by aapryce           #+#    #+#             */
/*   Updated: 2023/02/28 17:01:25 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	count1;
	int	temp;

	count = 0;
	while (count < size)
	{
		count1 = count + 1;
		while (count1 < size)
		{
			if (*(tab + count1) < *(tab + count))
			{
				temp = *(tab + count);
				*(tab + count) = *(tab + count1);
				*(tab + count1) = temp;
			}
			count1++;
		}
		count++;
	}
}
