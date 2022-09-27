/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:24:32 by mialbert          #+#    #+#             */
/*   Updated: 2022/09/26 23:53:17 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int		i;
	int		index;
	char	c;

	i = 0;
	if (argc != 2)
		return (write(1, "\n", 1), 0);
	while (argv[1][i])
	{
		if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			index = argv[1][i] - ('a');
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			index = argv[1][i] - ('A');
		if (index < 14)
			c = 'z' - index;
		else
			c = 'a' + (25 - index);
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			c -= 32;
		write(1, &c, 1);
		i++;
	}
	return (0);
}
