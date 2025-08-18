/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 19:42:01 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/12 18:54:17 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	if (i == n)
	{
		return (0);
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	char	s1[] = "Dioguito";
	char	s2[] = "Dioguets";
	int	result;
	
	result = ft_strncmp(s1, s2, 5);
	printf("Comparing first 5 characters of \"%s\" and \"%s\":
       	%d\n", s1, s2, result);
	result = ft_strncmp(s1, s2, 6);
	printf("Comparing first 6 characters of \"%s\" and \"%s\":
       	%d\n", s1, s2, result);
	return (0);
}*/
