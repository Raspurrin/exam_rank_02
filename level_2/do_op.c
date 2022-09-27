/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 01:14:07 by mialbert          #+#    #+#             */
/*   Updated: 2022/09/27 03:09:15 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	op(char **argv)
{
	int		nbr1;
	int		nbr2;
	int		result;

	nbr1 = atoi(argv[1]);
	nbr2 = atoi(argv[3]);

	if (argv[2][0] == '+')
		result = nbr1 + nbr2;
	else if (argv[2][0] == '-')
		result = nbr1 - nbr2;
	else if (argv[2][0] == '*')
		result = nbr1 * nbr2;
	else if (argv[2][0] == '/')
		result = nbr1 / nbr2;
	else if (argv[2][0] == '%')
		result = nbr1 % nbr2;
	return (result);
}

void	recurse(int result)
{
	char	c;

	if (result <= 0)
		return ;
	recurse(result / 10);
	recurse(result % 10);
	if (result < 10)
	{
		c = (result % 10) + '0';
		write(1, &c, 1);
	}
	return ;
}

int	main(int argc, char *argv[])
{
	int		i;
	int		result;
	char	c;

	i = 0;
	result = op(argv);
	recurse(result);
	return (0);
}
