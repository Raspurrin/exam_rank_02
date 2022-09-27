/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 15:23:44 by mialbert          #+#    #+#             */
/*   Updated: 2022/09/26 17:36:27 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	size_t	i;

	i = 0;
	if (argc < 2)
		return (0);
	while (argv[1][i] == ' ' || argv[1][i] == '\t')
		i++;
	while ((argv[1][i]) && (argv[1][i] != ' ' && argv[1][i] != '\t'))
		write(1, &argv[1][i++], 1);
	write(1, "\n", 1);
	return (0);
}
