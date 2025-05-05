/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lezu-yan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 16:00:11 by lezu-yan          #+#    #+#             */
/*   Updated: 2025/04/13 15:23:10 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_putchar(char c);

//Helper function to print a line based on start, middle, and end chars
void	print_line(int width, char start, char middle, char end)
{
	int	i;

	if (width >= 1)
		ft_putchar(start);
	i = 1;
	while (i < width - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (width > 1)
		ft_putchar(end);
	ft_putchar('\n');
}

//Main function to draw the rectangle
void	rush(int x, int y)
{
	int	i;

	if (x <= 0 || y <= 0)
		return ;
	print_line(x, 'o', '-', 'o');
	i = 1;
	while (i < y - 1)
	{
		print_line(x, '|', ' ', '|');
		i++;
	}
	if (y > 1)
		print_line(x, 'o', '-', 'o');
}
