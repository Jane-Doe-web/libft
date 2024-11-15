/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 15:19:00 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/14 17:49:31 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h>

static char	*ft_strcpy(char	*dest, const char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	char	*str12;
	int		i;
	int		j;

	if (s1[0] == '\0' && s2[0] == '\0')
	{
		str12 = malloc(1);
		if (!str12) 
			return (NULL);
		str12[0] = '\0';
		return (str12);
	}
	str1 = (char *)s1;
	str2 = (char *)s2;
	str12 = malloc(ft_strlen(str1) + ft_strlen(str2) + 1);
	if (!str12)
		return (NULL);
	ft_strcpy(str12, str1);
	i = ft_strlen(str12);
	j = 0;
	while (str2[j])
	{
		str12[i] = str2[j];
		i++;
		j++;
	}
	str12[i] = '\0';
	return (str12);
}
/*
int	main()
{
	char const *s1 = "Bundes";
	char const *s2 = "verwaltungsamt";
	char const *s12 = ft_strjoin(s1, s2);
	printf("%s", s12);
}
*/
