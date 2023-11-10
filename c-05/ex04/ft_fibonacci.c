/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 17:49:35 by jcapistr          #+#    #+#             */
/*   Updated: 2022/08/31 17:50:56 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
int	main(void)
{
	int	i;
	int	n;
	int	r;

	i = 0;
	n = 11;
	while (i < n)
	{
		r = ft_fibonacci(i);
		printf("%d", r);
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
*/
