/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:19:30 by mialbert          #+#    #+#             */
/*   Updated: 2022/09/26 19:30:03 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char const *argv[])
{
	int	i;
	int	j;
	int	index;

	i = 0;
	if (argc != 2)
		return (write(1, "\n", 1), 0);
	while (argv[1][i])
	{
		if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			index = argv[1][i] - ('A' - 1);
		else if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			index = argv[1][i] - ('a' - 1);
		while (j < index)
		{
			write(1, &argv[1][i], 1);
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}
