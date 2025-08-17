/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:35:32 by andcardo          #+#    #+#             */
/*   Updated: 2025/03/09 20:29:11 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	display_error(void);
int		ft_strlen(char *str);
int		verify_matrix_nbs(char	*str);
int		skyscrapper_solution(char *str);

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (ft_strlen(argv[1]) == 31 && verify_matrix_nbs(argv[1]) == 1)
		{
			if (skyscrapper_solution(argv[1]) == 1)
				write(1, "You are able to build a puzzle! good luck!\n", 43);
			else
			{
				display_error();
				return (1);
			}
		}
		else
		{
			display_error();
			return (1);
		}
	}
	else
	{
		display_error();
		return (1);
	}
	return (0);
}
