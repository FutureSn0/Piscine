/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revstringtest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 10:17:35 by aapryce           #+#    #+#             */
/*   Updated: 2023/03/10 10:31:20 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*strrev(char *str)
{
	char	*start;
	char	*end;
	char	temp;
	int	len;

	len = ft_strlen(str);
	start = str;
	end = str + len - 1;
	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
	return (str);
}

#include <stdio.h>

int	main()
{
	char	a[] = "Trance";
	printf("%s", strrev(a));
	return (0);
}
