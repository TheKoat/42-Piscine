/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 11:46:06 by akok              #+#    #+#             */
/*   Updated: 2025/04/16 09:16:36 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	src_len;
	unsigned int	dest_len;

	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	src_len = 0;
	while (src[src_len] != '\0' && src_len < nb)
	{
		dest[dest_len + src_len] = src[src_len];
		src_len++;
	}
	dest[dest_len + src_len] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src[] = "World";
	char	dest[20] = "Hello ";
	char	src1[] = "World";
	char	dest1[20] = "Hello ";

	printf("Expected: %s\n", strncat(dest, src, 3));
	printf("Actual: %s\n", ft_strncat(dest1, src1, 3));
	printf("Expected == Actual ? %d\n", strcmp(dest, dest1) == 0);
	return (0);
}
*/
