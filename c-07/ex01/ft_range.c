/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:13:12 by jcapistr          #+#    #+#             */
/*   Updated: 2022/09/01 17:14:15 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*range;

	if (min >= max)
		return (NULL);
	range = (int *) malloc((max - min) * sizeof(int));
	if (range == NULL)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (range);
}

/*
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	*range;

	i = 0;
	min = 2;
	max = 7;
	range = ft_range(min, max);
	while (i < (max - min))
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}
*/
