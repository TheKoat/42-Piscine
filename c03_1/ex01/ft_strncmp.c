/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 09:48:08 by akok              #+#    #+#             */
/*   Updated: 2025/04/16 11:58:42 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
	{
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	str1[] = "ABC";
	char	str2[] = "ABC";
	char	str3[] = "A";
	char	str4[] = "ABZ";
	char	str5[] = "123";

	printf("Test 1 Expected: %d\n", strncmp(str1, str2, 3));
	printf("Test 1 Actual: %d\n", ft_strncmp(str1, str2, 3));
	printf("Test 2 Expected: %d\n", strncmp(str1, str3, 1));
	printf("Test 2 Actual: %d\n", ft_strncmp(str1, str3, 1));
	printf("Test 3 Expected: %d\n", strncmp(str1, str3, 3));
	printf("Test 3 Actual: %d\n", ft_strncmp(str1, str3, 3));
	printf("Test 4 Expected: %d\n", strncmp(str1, str4, 3));
	printf("Test 4 Actual: %d\n", ft_strncmp(str1, str4, 3));
	printf("Test 5 Expected: %d\n", strncmp(str4, str1, 3));
	printf("Test 5 Actual: %d\n", ft_strncmp(str4, str1, 3));
	printf("Test 6 Expected: %d\n", strncmp(str1, str5, 3));
	printf("Test 6 Actual: %d\n", ft_strncmp(str1, str5, 3));
	printf("Test 7 Expected: %d\n", strncmp(str1, str5, 0));
	printf("Test 7 Actual: %d\n", ft_strncmp(str1, str5, 0));
	return (0);
}
*/
