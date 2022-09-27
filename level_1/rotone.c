/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 22:56:38 by mialbert          #+#    #+#             */
/*   Updated: 2022/09/26 23:06:46 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	char	c;
	int		i;

	i = 0;
	if (argc != 2)
		return (write(1, "\n", 1), 0);
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'a' && argv[1][i] < 'z') || \
			(argv[1][i] >= 'A' && argv[1][i] < 'Z'))
			c = (argv[1][i] + 1);
		else if (argv[1][i] == 'z')
			c = 'a';
		else if (argv[1][i] == 'Z')
			c = 'A';
		write(1, &c, 1);
		i++;
	}
	return (0);
}
