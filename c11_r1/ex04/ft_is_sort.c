/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 11:30:57 by akok              #+#    #+#             */
/*   Updated: 2025/04/30 08:58:30 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	cmp;
	int	inc;
	int	dec;

	if (length <= 1)
		return (1);
	i = 0;
	inc = 1;
	dec = 1;
	while (i < length - 1)
	{
		cmp = f(tab[i], tab[i + 1]);
		if (cmp > 0)
			inc = 0;
		if (cmp < 0)
			dec = 0;
		if (!inc && !dec)
			return (0);
		i++;
	}
	return (1);
}
/*
int	compare(int a, int b)
{
	return (a - b);
}
#include <stdio.h>
int main(void)
{
    int arr1[] = {2, 2, 2, 4, -4};
    int arr2[] = {4, 4, 4, 2, 1};
    int arr3[] = {3, 0, 0, 4, 5};
    int arr4[] = {7, 7, 7, 7};
    int arr5[] = {2};
    int arr6[] = {};
    int arr7[] = {0, 0, 0};

    printf("Test 1: Expected: 0 | Actual: %d\n", ft_is_sort(arr1, 5, compare));
    printf("Test 2: Expected: 1 | Actual: %d\n", ft_is_sort(arr2, 5, compare));
    printf("Test 3: Expected: 0 | Actual: %d\n", ft_is_sort(arr3, 5, compare));
    printf("Test 4: Expected: 1 | Actual: %d\n", ft_is_sort(arr4, 4, compare));
    printf("Test 5: Expected: 1 | Actual: %d\n", ft_is_sort(arr5, 1, compare));
    printf("Test 6: Expected: 1 | Actual: %d\n", ft_is_sort(arr6, 1, compare));
    printf("Test 7: Expected: 1 | Actual: %d\n", ft_is_sort(arr7, 1, compare));

    return 0;
}
*/
