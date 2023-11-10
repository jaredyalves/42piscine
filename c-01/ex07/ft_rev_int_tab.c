/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <jcapistr@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/19 15:18:54 by jcapistr          #+#    #+#             */
/*   Updated: 2022/08/19 15:25:15 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	aux;
	int	idx;
	int	i;

	i = 0;
	idx = size - 1;
	while (i < size / 2)
	{
		aux = tab[idx];
		tab[idx] = tab[i];
		tab[i] = aux;
		i++;
		idx--;
	}
}
