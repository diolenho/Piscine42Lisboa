/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 12:26:09 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/19 13:03:27 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0' && s2[i] == '\0')
		{
			return (0);
		}
	}
	if (s1[i] > s2[i])
	{
		return (s1[i] - s2[i]);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

void	ft_swap(char **a, char **b)
{
	char	*c;

	c = *b;
	*b = *a;
	*a = c;
}

int	main(int argc, char *argv[])
{
	int		count;
	int		value;

	count = 1;
	while (count < argc - 1)
	{
		value = 0;
		while (value < argc - 1)
		{
			if (ft_strcmp(argv[value], argv[value + 1]) > 0)
				ft_swap(&argv[value], &argv[value + 1]);
			value++;
		}
		count++;
	}
	count = 1;
	while (count < argc)
	{
		value = 0;
		while (argv[count][value])
			write(1, &argv[count][value++], 1);
		write(1, "\n", 1);
		count++;
	}
	return (0);
}
