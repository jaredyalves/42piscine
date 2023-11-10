/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 14:08:46 by jcapistr          #+#    #+#             */
/*   Updated: 2022/08/31 14:11:16 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(unsigned char chr)
{
	write(1, &chr, 1);
}

void	ft_print_hex(unsigned char chr, unsigned int depth)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (depth == 0)
		ft_putchar('\\');
	if (chr < 16)
	{
		if (depth == 0)
			ft_putchar('0');
		ft_putchar(hex[chr]);
	}
	else
	{
		ft_print_hex(chr / 16, depth + 1);
		ft_print_hex(chr % 16, depth + 1);
	}
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			ft_putchar(str[i]);
		else
			ft_print_hex(str[i], 0);
		i++;
	}
}

/*
int	main(void)
{
	ft_putstr_non_printable("Coucou\ntu vas bien ?");
	return (0);
}
*/
