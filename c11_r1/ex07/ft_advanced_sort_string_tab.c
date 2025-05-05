/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akok <akok@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 08:15:27 by akok              #+#    #+#             */
/*   Updated: 2025/04/30 08:26:10 by akok             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char *))
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
			if (cmp(tab[i], tab[j]) > 0)
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

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

char **copy_tab(char **src) {
    int len = ft_tablen(src);
    char **copy = malloc((len + 1) * sizeof(char *));
    for (int i = 0; i < len; i++)
        copy[i] = strdup(src[i]);
    copy[len] = NULL;
    return copy;
}

void free_tab(char **tab) {
    for (int i = 0; tab[i]; i++)
        free(tab[i]);
    free(tab);
}

void print_tab(char **tab) {
    for (int i = 0; tab[i]; i++)
        printf("%s%s", tab[i], tab[i + 1] ? ", " : "");
    printf("\n");
}

// Reverse strcmp for descending order
int reverse_cmp(char *a, char *b) {
    return -ft_strcmp(a, b);
}

void test_case(char *name, char **input, char **expect,
               int (*cmp)(char *, char *)) {
    char **tab = copy_tab(input);
    printf("%s:\nExpected: ", name);
    print_tab(expect);
    ft_advanced_sort_string_tab(tab, cmp);
    printf("Actual:   ");
    print_tab(tab);
    printf("\n");
    free_tab(tab);
}

int main(void) {
    char *t1[] = {"banana", "apple", "cherry", NULL};
    char *e1[] = {"apple", "banana", "cherry", NULL};

    char *t2[] = {"apple", "banana", "cherry", NULL};
    char *e2[] = {"cherry", "banana", "apple", NULL};

    char *t3[] = {"same", "same", "same", NULL};
    char *e3[] = {"same", "same", "same", NULL};

    char *t4[] = {"", "a", "", "b", NULL};
    char *e4[] = {"", "", "a", "b", NULL};

    char *t5[] = {"alone", NULL};
    char *e5[] = {"alone", NULL};

	char *t6[] = {"C", "a", "B", "b", "A", NULL};
	char *e6[] = {"A", "B", "C", "a", "b", NULL}; 

	char *t7[] = {"Zebra", "apple", "123", "!", "~", NULL};
	char *e7[] = {"!", "123", "Zebra", "apple", "~", NULL};

	char *t8[] = {"ßeta", "alpha", "Ωmega", "gamma", NULL};
	char *e8[] = {"alpha", "gamma", "ßeta", "Ωmega", NULL}; 

	char *t9[] = {"Hello", "HELLO", "hello", NULL};
	char *e9[] = {"HELLO", "Hello", "hello", NULL};

	char *t10[] = {"!start", "#tag", " a", "Zebra", "b", NULL};
	char *e10[] = {" a", "!start", "#tag", "Zebra", "b", NULL};

	char *t13[] = {"😊", "🙂", "😢", "😁", NULL}; 
	char *e13[] = {"😁", "😊", "😢", "🙂", NULL}; 

    test_case("Ascending sort", t1, e1, ft_strcmp);
    test_case("Descending sort", t2, e2, reverse_cmp);
    test_case("All same", t3, e3, ft_strcmp);
    test_case("Empty strings", t4, e4, ft_strcmp);
    test_case("Single string", t5, e5, ft_strcmp);
	test_case("Case Mix", t6, e6, ft_strcmp);
	test_case("Symbols & Digits", t7, e7, ft_strcmp);
	test_case("Unicode ASCII", t8, e8, ft_strcmp);
	test_case("Case Sensitivity", t9, e9, ft_strcmp);
	test_case("Punctuation Sort", t10, e10, ft_strcmp);
	test_case("Emoji Sort", t13, e13, ft_strcmp);
    return 0;
}
*/
