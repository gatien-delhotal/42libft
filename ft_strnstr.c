/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelhota <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:20:31 by gdelhota          #+#    #+#             */
/*   Updated: 2024/11/06 16:30:01 by gdelhota         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	if (*little == 0)
		return ((char *) big);
	if (len == 0)
		return (0);
	i = 0;
	while (big[i] && i < len - 1)
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len - 1 && big[i + j])
			j++;
		if (little[j] == 0
			|| (little[j] == big[i + j] && little[j + 1] == 0))
			return ((char *) &big[i]);
		i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <stdlib.h>
#include <bsd/string.h>

void ft_tester(char *big, char *little, size_t len)
{
	printf("big: %s, little: %s, size: %lu\n", big, little, len);
	printf("ft_strnstr: %s\n", ft_strnstr(big, little, len));
	printf("strnstr: %s\n\n", strnstr(big, little, len));
}

int	main(void)
{
	char *test = "test";
	ft_tester("test", "st", 4);
	ft_tester(test, test, 0);
	ft_tester(test, test, 1);
	ft_tester(test, test, 32);
	ft_tester(test, test, 4);
	ft_tester(test, test, 5);
	ft_tester(test, "est", 5);
	ft_tester("test", "test", 2);
	ft_tester("test", "test", 4);
	ft_tester("test", "test", 0);
	ft_tester("test", "test", 50);
	ft_tester("test", "e", 0);
	ft_tester("test", "e", 1);
	ft_tester("test", "e", 4);
	ft_tester("test", "t", 4);
	ft_tester("test", "t", 5);
	ft_tester("t", "t", 5);
	ft_tester("", "", 5);
	ft_tester("", "", 0);
	ft_tester("", "", 1);
	ft_tester("test", "abc", 4);
	ft_tester("test", "", 0);
	ft_tester("test", "", 1);
	ft_tester("test", "", 12);
	ft_tester("", "test", 0);
	ft_tester("", "test", 1);
	ft_tester("", "test", 12);
	ft_tester("1234567", "23", 7);
	ft_tester("1234567", "45", 5);
}*/
