/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz_hard.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 17:37:50 by mialbert          #+#    #+#             */
/*   Updated: 2022/09/26 17:58:01 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write(1, "fizzbuzz", 9);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else
		{
			if (i < 10)
			{
				c = i + '0';
				write(1, &c, 1);
			}
			if (i > 9 && i < 100)
			{
				c = i / 10 + '0';
				write(1, &c, 1);
				c = i % 10 + '0';
				write(1, &c, 1);
			}
			else if (i == 100)
				write(1, "100", 3);
		}
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
