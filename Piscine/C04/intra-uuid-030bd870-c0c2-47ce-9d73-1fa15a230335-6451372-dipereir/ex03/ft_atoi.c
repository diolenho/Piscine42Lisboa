/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 20:44:15 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/16 21:21:57 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	guarda;
	int	posneg;

	i = 0;
	guarda = 0;
	posneg = 1;
	if (str[i] == '\0')
		return (0);
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			posneg *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		guarda = guarda * 10 + str[i] - '0';
		i++;
	}
	return (guarda * posneg);
}
/*
#include <stdio.h>
int	main()
{
	printf("Resultado %d ", ft_atoi("  123uas"));
	printf("Resultado %d ", ft_atoi("---123uas"));
	printf("Resultado %d ", ft_atoi("+-+-+-123uas"));
}*/
