/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 14:48:52 by jcapistr          #+#    #+#             */
/*   Updated: 2022/08/29 19:52:09 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	slen;
	unsigned int	dlen;

	i = 0;
	slen = ft_strlen(src);
	dlen = ft_strlen(dest);
	if (size > dlen)
	{
		while (i < size - dlen - 1 && src[i] != '\0')
		{
			dest[dlen + i] = src[i];
			i++;
		}
		dest[dlen + i] = '\0';
		return (dlen + slen);
	}
	else
	{
		while (i < size)
			i++;
		return (slen + i);
	}
}

/*
int main() { 
	for (int i = 0; i < 20; i++)
	{
		char *s = "llo"; 
		char target2[128] = "he"; 

		unsigned int r2 = ft_strlcat(target2, s, i); 
		printf("i: %d - New target: \"%s\" - (%d)\n", i, target2, r2); 
	}
 
    return 0; 
}
*/
