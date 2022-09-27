/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   camel_to_snake.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 23:54:34 by mialbert          #+#    #+#             */
/*   Updated: 2022/09/27 01:11:39 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	count_word(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 1;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			count++;
		str++;
	}
	return (count);
}

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
	int		i;
	int		j;
	int		len;
	int		count;
	char	*snake;

	j = 0;
	i = 0;
	len = 0;
	if (argc != 2)
		return (0);
	count = count_word(argv[1]);
	len = ft_strlen(argv[1]) + (count - 1);
	snake = malloc(len * sizeof(char));
	while (i < len)
	{
		if ((argv[1][i] >= 'A' && argv[1][i] <= 'Z'))
		{
			if (i != 0)
				snake[j++] = '_';
			snake[j] = (argv[1][i] + 32);
		}
		else
			snake[j] = argv[1][i];
		i++;
		j++;
	}
	printf("%s", snake);
	return (0);
}
