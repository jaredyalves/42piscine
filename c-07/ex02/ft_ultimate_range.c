/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 17:43:22 by jcapistr          #+#    #+#             */
/*   Updated: 2022/09/01 17:44:54 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	len;
	int	*values;

	i = 0;
	len = max - min;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	values = (int *) malloc((max - min) * sizeof(int));
	*range = values;
	if (*range == NULL)
		return (0);
	while (min < max)
	{
		values[i] = min;
		i++;
		min++;
	}
	return (len);
}

/*
int	main(void)
{
	int	i;
	int	min;
	int	max;
	int	res;
	int	*range;

	i = 0;
	min = 2;
	max = 7;
	res = ft_ultimate_range(&range, min, max);
	printf("Total: %d\n", res);
	while (i < (max - min))
	{
		printf("%d\n", range[i]);
		i++;
	}
	free(range);
	return (0);
}
*/
