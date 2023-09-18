/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/02 09:24:59 by aapryce           #+#    #+#             */
/*   Updated: 2023/03/03 08:51:41 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_lowercase(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i] = s[i] + 32;
		}
		i++;
	}
	return (s);
}

int	ft_is_alpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int	ft_is_numeric(char n)
{
	return (n >= '0' && n <= '9');
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_lowercase(str);
	while (str[i] != '\0')
	{
		if (i == 0 || !ft_is_alpha(str[i - 1]))
		{
			if (ft_is_alpha(str[i]))
			{
				if (i == 0 || !ft_is_numeric(str[i - 1]))
					str[i] = str[i] - 32;
			}
		}
		i++;
	}
	return (str);
}
/*
#include <stdio.h>

int	main()
{
	char	str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(str));
	return (0);
}
*/
