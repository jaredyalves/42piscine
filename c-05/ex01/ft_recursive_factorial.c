/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:15:29 by jcapistr          #+#    #+#             */
/*   Updated: 2022/08/30 18:24:41 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	else if (nb < 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*
int	main(void)
{
	int	i;
	int	r;

	i = 0;
	while (i < 13)
	{
		r = ft_recursive_factorial(i);
		printf("i: %d - %d\n", i, r);
		i++;
	}
	return (0);
}
*/
