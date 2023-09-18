/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aapryce <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:06:39 by aapryce           #+#    #+#             */
/*   Updated: 2023/03/16 12:58:53 by aapryce          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write_number(int num)
{
	if (num > 9)
		ft_write_number(num / 10);
	write (1, &"0123456789"[num % 10], 1);
}

int	main()
{
	int	n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (n % 3 == 0)
			write (1, "fizz", 4);
		else if (n % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_write_number(n);
		write (1, "\n", 1);
		n++;
	}
}
