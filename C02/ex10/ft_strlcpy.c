/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 09:47:40 by aapryce           #+#    #+#             */
/*   Updated: 2023/03/15 10:22:23 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (src[i] != '\0' && c < size - 1)
	{
		dest[i] = src[i];
		i++;
		c++;
	}
	dest[i] = '\0';
	return (c);
}
/*
#include <stdio.h>

int	main()
{
	char src[] = "World!";
	char dest[] = "Hello ";
	printf("%s\n", dest);
	printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
}
*/
