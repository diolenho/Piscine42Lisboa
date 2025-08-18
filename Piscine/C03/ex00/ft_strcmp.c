/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 15:19:40 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/12 18:53:29 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	char	s1[] = "Diogo Pereira";
	char	s2[] = "Diogo";
	int result = ft_strcmp(s1, s2);
	printf("Resultado da comparacao entre \"%s\" e \"%s\" é:
       	%d\n", s1, s2, result);
	return (0);
}*/
