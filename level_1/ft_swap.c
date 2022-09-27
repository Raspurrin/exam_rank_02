/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mialbert <mialbert@student.42wolfsburg.de> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 19:13:23 by mialbert          #+#    #+#             */
/*   Updated: 2022/09/26 19:19:04 by mialbert         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *b;
	*b = *a;
	*a = temp;
}

int	main(void)
{
	int	*a;
	int	*b;
	int	int_a;
	int	int_b;

	int_a = 69;
	int_b = 42;
	a = &int_a;
	b = &int_b;
	ft_swap(a, b);
	printf("a: %d b: %d\n", *a, *b);
}
