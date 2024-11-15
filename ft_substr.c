/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 13:44:22 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/15 18:58:53 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	char	*substr;
	size_t	i;

	s1 = (char *)s;
	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		substr = malloc(1);
		if (!substr) 
			return (NULL);
		substr[0] = '\0';
		return (substr);
	}
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	substr = malloc(ft_strlen(s) - start + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s1[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*
#include <stdio.h>

int	main()
{
	const char *s = "Guess who?";
	char *substr;
	substr = ft_substr(s, 6, 4);
	printf("%s", substr);
	free(substr);
}
*/
