/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:53:09 by mialbert          #+#    #+#             */
/*   Updated: 2022/09/26 22:55:13 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	main(int argc, char const *argv[])
{
	int		i;
	char	c;

	i = 0;
	if (argc != 2)
		return (write(1, "\n", 1), 0);
	while (argv[1][i])
	{
		if ((argv[1][i] >= 'a' && argv[1][i] <= 'z') \
			|| (argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
		{
			if ((argv[1][i] + 13 <= 'z' && argv[1][i] + 13 >= 'a') || \
				(argv[1][i] + 13 <= 'Z' && argv[1][i] + 13 >= 'A'))
				c = argv[1][i] + 13;
			else
			{
				printf("yo: %d\n", (argv[1][i] + 13));
				c = (argv[1][i] + 13) - 26;
			}
			write(1, &c, 1);
		}
		i++;
	}
}
