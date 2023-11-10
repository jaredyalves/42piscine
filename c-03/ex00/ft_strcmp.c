/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcapistr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:59:19 by jcapistr          #+#    #+#             */
/*   Updated: 2022/08/29 14:01:15 by jcapistr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/*
int	main(void)
{
    char	*s1 = "ABC";
    char	*s2 = "ABC";
    int		r = strcmp(s1, s2);
    printf("%d\n", r);
    r = ft_strcmp(s1, s2);
    printf("%d", r);
    return (0);
}
*/
