/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:46:55 by akok              #+#    #+#             */
/*   Updated: 2025/04/23 11:50:46 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_get_base_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		i++;
	}
	return (i);
}

int	ft_base_is_valid(char *base)
{
	int	i;
	int	j;

	if (!base || ft_get_base_len(base) < 2)
		return (0);
	i = 0;
	while (base[i])
	{
		if (base[i] == '+' || base[i] == '-' || base[i] <= 32 || base[i] == 127)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_get_pos_in_base(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (base[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_get_size(int nbr, int base_len)
{
	int		size;
	long	nb;

	nb = nbr;
	size = 0;
	if (nb <= 0)
		size++;
	while (nb)
	{
		nb /= base_len;
		size++;
	}
	return (size);
}

char	*ft_skip_white_space_sign(char *nbr, int *sign)
{
	*sign = 1;
	while (*nbr == ' ' || (*nbr >= 9 && *nbr <= 13))
		nbr++;
	while (*nbr == '+' || *nbr == '-')
	{
		if (*nbr == '-')
			*sign *= -1;
		nbr++;
	}
	return (nbr);
}
