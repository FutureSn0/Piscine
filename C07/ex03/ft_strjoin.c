/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 15:13:00 by aapryce           #+#    #+#             */
/*   Updated: 2023/03/15 11:20:44 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*result;
	int			i;
	int			len;

	i = -1;
	len = 0;
	while (++i < size)
	{
		len = len + ft_strlen(strs[i]);
		if (i < size - 1)
			len = len + ft_strlen(sep);
	}
	result = (char *)malloc(len + 1);
	if (result == NULL)
		return (NULL);
	result[0] = '\0';
	i = -1;
	while (++i < size)
	{
		ft_strcat(result, strs[i]);
		if (i < size - 1)
			ft_strcat(result, sep);
	}
	return (result);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*strs[] = {"hello", "world", "how", "are", "you"};
	char	*sep = "-";
	char	*result = ft_strjoin(5, strs, sep);

	if (!result)
		return (1);

	printf("%s\n", result);

	free(result);

	return (0);
}
*/
