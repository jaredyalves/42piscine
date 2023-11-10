/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 22:00:04 by jcapistr          #+#    #+#             */
/*   Updated: 2022/08/30 14:22:02 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_verify_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+' || base[i] == base[i + 1])
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base_size(int nbr, char *base, long int size)
{
	long int	lgi;

	lgi = nbr;
	if (lgi < 0)
	{
		ft_putchar('-');
		lgi *= -1;
	}
	if (lgi < size)
	{
		ft_putchar(base[lgi]);
		return ;
	}
	else
		ft_putnbr_base_size(lgi / size, base, size);
	ft_putnbr_base_size(lgi % size, base, size);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long int	size;

	size = 0;
	if (ft_verify_base(base))
	{
		while (base[size] != '\0')
			size++;
		ft_putnbr_base_size(nbr, base, size);
	}
}

/*
int	main(void)
{
	ft_putnbr_base(INT_MIN, "0123456789");
	return (0);
}
*/
