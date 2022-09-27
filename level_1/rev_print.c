/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:31:15 by mialbert          #+#    #+#             */
/*   Updated: 2022/09/26 19:52:47 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main(int argc, char *argv[])
{
	int	len;

	if (argc != 2)
		return (write(1, "\n", 1), 0);
	len = ft_strlen(argv[1]);
	while (len > -1)
		write(1, &argv[1][len--], 1);
	return (0);
}
