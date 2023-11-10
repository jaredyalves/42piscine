/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 20:57:01 by jcapistr          #+#    #+#             */
/*   Updated: 2022/08/26 13:09:15 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	li;

	li = nb;
	if (li < 0)
	{
		ft_putchar('-');
		li *= -1;
	}
	if (li < 10)
	{
		ft_putchar(li + '0');
		return ;
	}
	else
	{
		ft_putnbr(li / 10);
	}
	ft_putnbr(li % 10);
}

/*
int	main(void)
{
	ft_putnbr(INT_MIN);
	return (0);
}
*/
