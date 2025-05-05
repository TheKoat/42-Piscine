/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 13:42:52 by akok              #+#    #+#             */
/*   Updated: 2025/04/15 08:55:23 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_is_non_printable(char c)
{
	return (c < 32 || c == 127);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_hex(char c)
{
	char	*hex;
	char	high;
	char	low;

	hex = "0123456789abcdef";
	high = hex[(unsigned char)c / 16];
	low = hex[(unsigned char)c % 16];
	write(1, "\\", 1);
	write(1, &high, 1);
	write(1, &low, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (ft_is_non_printable(str[i]))
			ft_print_hex(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*
void	ft_putstr_non_printable(char *str);

void	ft_putchar(char c);

int     main(void)
{
        char    str1[] = "Hello\nworld";
        char    str2[] = "";
        char    str3[] = "Hello\tworld";

        ft_putstr_non_printable(str1);
	ft_putchar('\n');
        ft_putstr_non_printable(str2);
	ft_putchar('\n');
        ft_putstr_non_printable(str3);
        return (0);
}
*/
