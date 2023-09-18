/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 13:29:56 by aapryce           #+#    #+#             */
/*   Updated: 2023/03/13 16:38:13 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = (int *)malloc((len) * sizeof(int));
	if (range == NULL)
		return (0);
	while (min < max)
	{
		range[0][i] = min;
		i++;
		min++;
	}
	return (len);
}
