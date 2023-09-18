/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 15:44:59 by aapryce           #+#    #+#             */
/*   Updated: 2023/03/16 16:00:40 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	checkdouble(char *str, char c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	checkdouble1(char *str, char c, int pos)
{
	int	i;

	i = 0;
	while (i < pos)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] != '\0')
	{
		if (checkdouble1(str1, str1[i], i) == 1)
			write (1, &str1[i], 1);
		i++;
	}
	i = 0;
	while (str2[i] != '\0')
	{
		if (checkdouble(str1, str2[i]) == 1)
		{
			if (checkdouble1(str2, str2[i], i) == 1)
				write (1, &str2[i], 1);
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}
