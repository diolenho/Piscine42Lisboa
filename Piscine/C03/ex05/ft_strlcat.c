/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dipereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 21:41:36 by dipereir          #+#    #+#             */
/*   Updated: 2025/03/12 17:15:05 by dipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_len;
	unsigned int	src_len;
	unsigned int	i;

	dest_len = 0;
	src_len = 0;
	i = 0;
	while (dest[dest_len] != '\0' && dest_len < size)
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] != '\0' && dest_len + i < size - 1)
		dest[dest_len + i] = src[i];
	i++;
	if (dest_len + i < size)
		dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}

int	main(void)
{
	char dest[20] = "Diogo ";
	char src[] = "Pereira";
	unsigned int result;

	result = ft_strlcat(dest, src, sizeof(dest));
	printf("Destino após ft_strlcat: %s\n", dest);
       	printf("Tamanho total pretendido: %u\n", result);
}
