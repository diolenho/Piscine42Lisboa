/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 21:09:36 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/01 21:17:27 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_display_line(int x, int a, int b, int c)
{
	int	i;	i = 0;
	if (x >= 1)
	{
		ft_putchar(a);
	}
	while (i <= (x - 3))
	{
		ft_putchar(b);
		i++;
	}
	if (x >= 2)
	{
		ft_putchar(c);
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;	i = 0;
	if (x < 1 || y < 1)
	{
		write(1, "Error! Need number greater than 1 for x or y\n", 45);
	}
	if (y >= 1 && x >= 1)
	{
		ft_display_line(x, 'o', '-', 'o');
	}
	while (i < y - 2 && x >= 1)
	{
		ft_display_line(x, '|', ' ', '|');
		i++;
	}
	if (y >= 2 && x >= 1)
	{
		ft_display_line(x, 'o', '-', 'o');
	}
}

