/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 20:04:42 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/11 20:19:48 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*d;

	d = dest;
	while (*d != '\0')
	{
		d++;
	}
	while (*src != '\0')
	{
		*d = *src;
		d++;
		src++;
	}
	*d = '\0';
	return (dest);
}

/*int	main(void)
{
	char dest[] = "Diogo ";
	char src[] = "Pereira";

	printf ("String destino %s\n", dest);
	printf ("String src %s\n", src);
	ft_strcat(dest, src);
	printf ("Resultado %s", dest);
}*/
