/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:42:17 by akok              #+#    #+#             */
/*   Updated: 2025/04/30 08:13:48 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	ft_tablen(char **tab)
{
	int	len;

	len = 0;
	while (tab[len])
		len++;
	return (len);
}

void	ft_sort_string_tab(char **tab)
{
	int	i;
	int	j;
	int	len;
	int	swapped;

	swapped = 1;
	len = ft_tablen(tab);
	while (swapped)
	{
		swapped = 0;
		i = 0;
		while (i < len - 1)
		{
			j = i + 1;
			if (ft_strcmp(tab[i], tab[j]) > 0)
			{
				ft_swap(&tab[i], &tab[j]);
				swapped = 1;
			}
			i++;
		}
	}
}
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// Helper to print tab
void print_tab(char **tab) {
    for (int i = 0; tab[i]; i++)
        printf("%s%s", tab[i], tab[i + 1] ? ", " : "");
    printf("\n");
}

// Clone array using malloc and strdup
char **copy_tab(char **src) {
    int len = ft_tablen(src);
    char **copy = malloc((len + 1) * sizeof(char *));
    for (int i = 0; i < len; i++)
        copy[i] = strdup(src[i]);
    copy[len] = NULL;
    return copy;
}

// Free a tab
void free_tab(char **tab) {
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
}

// Test function
void test_case(char *name, char **input, char **expect) {
    char **tab = copy_tab(input);
    printf("%s:\nExpected: ", name);
    print_tab(expect);
    ft_sort_string_tab(tab);
    printf("Actual:   ");
    print_tab(tab);
    printf("\n");
    free_tab(tab);
}

int main(void) {
    char *t1[] = {"banana", "apple", "cherry", NULL};
    char *e1[] = {"apple", "banana", "cherry", NULL};

    char *t2[] = {"", "apple", "banana", "", NULL};
    char *e2[] = {"", "", "apple", "banana", NULL};

    char *t3[] = {"alpha", "beta", "delta", "omega", NULL};
    char *e3[] = {"alpha", "beta", "delta", "omega", NULL};

    char *t4[] = {"zulu", "tango", "echo", "alpha", NULL};
    char *e4[] = {"alpha", "echo", "tango", "zulu", NULL};

    char *t5[] = {"apple", "Banana", "banana", "Apple", NULL};
    char *e5[] = {"Apple", "Banana", "apple", "banana", NULL};

    char *t6[] = {"alone", NULL};
    char *e6[] = {"alone", NULL};

    char *t7[] = {"", "", "", NULL};
    char *e7[] = {"", "", "", NULL};

    char *t9[] = {"echo", "echo", "alpha", "alpha", NULL};
    char *e9[] = {"alpha", "alpha", "echo", "echo", NULL};

    char *t10[] = {" a", "b", " !start", " #tag", "Zebra", NULL};
    char *e10[] = {" !start", " #tag", " a", "Zebra", "b", NULL};

    test_case("Test 1", t1, e1);
    test_case("Test 2", t2, e2);
    test_case("Test 3", t3, e3);
    test_case("Test 4", t4, e4);
    test_case("Test 5", t5, e5);
    test_case("Test 6", t6, e6);
    test_case("Test 7", t7, e7);
    test_case("Test 9", t9, e9);
    test_case("Test 10", t10, e10);

    return 0;
}
*/
