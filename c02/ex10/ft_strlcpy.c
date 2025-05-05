/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 10:57:46 by akok              #+#    #+#             */
/*   Updated: 2025/04/15 08:54:49 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	if (size == 0)
		return (len);
	i = 0;
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
/*
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	main(void)
{
	char	src[] = "Hello";
	char	dest[5];
	unsigned int	size = 5;
	unsigned int	len = ft_strlcpy(dest, src, size);

	printf("Src to be copied from: %s\n", src);
	printf("Copied: %s\n", dest);
	printf("Buffer size: %u\n", size);
	printf("Total src len: %u\n", len);
	return (0);
}	
*/
