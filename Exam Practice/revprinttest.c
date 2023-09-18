/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revprinttest.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 14:34:47 by aapryce           #+#    #+#             */
/*   Updated: 2023/03/16 14:45:35 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_revprint(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
	return (str);
}

int	main(void)
{
	ft_revprint("Boost");
	ft_revprint("\n");
	return (0);
}
