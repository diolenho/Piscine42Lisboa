/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:46:33 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/11 14:56:03 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

/*int	main(void)
{
	char	str[20];

	str[0] = 'T';
	str[1] = 'E';
	str[2] = 'S';
	str[3] = 'T';
	printf ("antes %s\n", str);
	ft_strlowcase(str);
	printf ("depois %s", str);
}*/
