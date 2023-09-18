/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lastwordtest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:52:58 by aapryce           #+#    #+#             */
/*   Updated: 2023/03/10 11:17:33 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	lastwrd(char *str)
{
	int	i;
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (str[i] == ' ' || str[i] == '\t')
		i--;
	while (i > 0)
	{	if (str[i] == ' ' || str[i] == '\t')
			break;
		i--;
	}
	i++;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
	{
		write (1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		lastwrd(argv[1]);
	write(1, "\n", 1);
}
