/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 14:18:28 by akok              #+#    #+#             */
/*   Updated: 2025/04/15 09:01:04 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
#include <stdio.h>
void print_chars(char *str, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (str[i] == '\0')
            printf("\\0 ");
        else
            printf("%c  ", str[i]);
    }
    printf("\n");
}

int	main(void)
{
	char	*src;
	char	dest[10];

	src = "Hello";
	print_chars(dest, 10);
	ft_strncpy(dest, src, 3);
	print_chars(dest, 10);
	ft_strncpy(dest, src, 6);
	print_chars(dest, 10);
	ft_strncpy(dest, src, 9);
	print_chars(dest, 10);
	return (0);
}
*/
