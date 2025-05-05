/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 16:48:57 by akok              #+#    #+#             */
/*   Updated: 2025/04/30 21:07:20 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int		ft_get_base_len(char *base);
int		ft_base_is_valid(char *base);
int		ft_get_pos_in_base(char c, char *base);
int		ft_get_size(int nbr, int base_len);
char	*ft_skip_white_space_sign(char *nbr, int *sign);

int	ft_atoi_base(char *nbr, char *base)
{
	int		sign;
	int		pos;
	long	number;

	if (!ft_base_is_valid(base))
		return (0);
	nbr = ft_skip_white_space_sign(nbr, &sign);
	number = 0;
	while (*nbr)
	{
		pos = ft_get_pos_in_base(*nbr, base);
		if (pos == -1)
			break ;
		number = (number * ft_get_base_len(base)) + pos;
		if ((sign == 1 && number > 2147483647)
			|| (sign == -1 && - number < -2147483648))
			return (0);
		nbr++;
	}
	return ((int)(sign * number));
}

long	ft_set_negative_flag(int nbr, char *str)
{
	long	nb;

	nb = nbr;
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	return (nb);
}

void	ft_fill_base_digits(char *str, long nb, char *base, int str_size)
{
	int	base_len;
	int	i;

	base_len = ft_get_base_len(base);
	i = str_size - 1;
	while (nb)
	{
		str[i] = base[nb % base_len];
		nb /= base_len;
		i--;
	}
}

char	*ft_itoa_base(int nbr, char *base)
{
	char	*str;
	int		str_size;
	int		base_len;
	long	nb;

	if (!ft_base_is_valid(base))
		return (0);
	base_len = ft_get_base_len(base);
	str_size = ft_get_size(nbr, base_len);
	str = (char *)malloc(str_size + 1);
	if (!str)
		return (0);
	str[str_size] = '\0';
	nb = ft_set_negative_flag(nbr, str);
	if (nb == 0)
		str[0] = base[0];
	else
		ft_fill_base_digits(str, nb, base, str_size);
	return (str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		num;
	char	*res;

	if (!nbr || !base_from || !base_to
		|| !ft_base_is_valid(base_from) || !ft_base_is_valid(base_to))
		return (NULL);
	num = ft_atoi_base(nbr, base_from);
	res = ft_itoa_base(num, base_to);
	return (res);
}

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

char    *ft_convert_base(char *nbr, char *base_from, char *base_to);
int     ft_atoi_base(char *nbr, char *base);
char    *ft_itoa_base(int nbr, char *base);

void test_convert(char *nbr, char *base_from, char *base_to, 
char *desc, char *expected)
{
    char *result = ft_convert_base(nbr, base_from, base_to);
    printf("%s:\n  convert('%s', '%s' → '%s')\n", desc, nbr, base_from, base_to);
    printf("  Result     : %s\n", result ? result : "NULL");
    printf("  Expected   : %s\n\n", expected);
    free(result);
}

int main(void)
{
    printf("=== BASE CONVERSION TESTS ===\n\n");

    // Valid conversions
    test_convert("42", "0123456789", "01", "Decimal to Binary", "101010");
    test_convert("0", "0123456789", "poneyvif", "Zero conversion", "p");

    // Invalid bases
    test_convert("42", "012345+6789", "01", 
"Invalid base_from with '+'", "NULL");
    test_convert("42", "0123456789", "01-", "Invalid base_to with '-'", "NULL");
    test_convert("42", "01", "001", "Invalid base_to with duplicates", "NULL");
	printf("%s\n", ft_convert_base("-2147483648", "0123456789", "01"));
    return (0);
}

