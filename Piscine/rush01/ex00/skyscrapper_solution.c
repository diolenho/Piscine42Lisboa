/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscrapper_solution.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:44:25 by andcardo          #+#    #+#             */
/*   Updated: 2025/03/09 20:30:59 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	valid_skyscrapper(char *str)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (str[i] == '1' && str[i + 8] == '1' )
			return (0);
		if (str[i] == '2' && str[i + 8] == '4')
			return (0);
		if (str[i] == '3' && str[i + 8] == '3')
			return (0);
		if (str[i] == '3' && str[i + 8] == '4')
			return (0);
		if (str[i] == '4' && str[i + 8] == '2')
			return (0);
		if (str[i] == '4' && str[i + 8] == '3')
			return (0);
		if (str[i] == '4' && str[i + 8] == '4')
			return (0);
		i++;
	}
	return (1);
}

int	build_result(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (1);
}

int	skyscrapper_solution(char *str)
{
	int	i;

	i = 0;
	if (valid_skyscrapper(str) == 1)
	{
		if (build_result(str) == 1)
		{
			return (1);
		}
		else
			return (0);
	}
	else
	{
		return (0);
	}
	while (str[i])
		i++;
	return (1);
}
