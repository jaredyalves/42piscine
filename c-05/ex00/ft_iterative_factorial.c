/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 17:24:24 by jcapistr          #+#    #+#             */
/*   Updated: 2022/08/30 18:21:34 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb < 0)
		return (0);
	else if (nb < 1)
		return (1);
	while (nb > 0)
	{
		fact *= nb;
		nb--;
	}
	return (fact);
}

/*
int	main(void)
{
	int	i;
	int	r;

	i = 0;
	while (i < 13)
	{
		r = ft_iterative_factorial(i);
		printf("i: %d - %d\n", i, r);
		i++;
	}
	return (0);
}
*/
