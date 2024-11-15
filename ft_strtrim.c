/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:57:25 by esteudle          #+#    #+#             */
/*   Updated: 2024/11/14 19:30:58 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strtrim(char const *s1, char const *set)
{
	char	str1;
	char	set1;
	int		i;
	int		len;

	str1 = (char const *)s1;
	set1 = (char const *)set;
	i = 0;
	len = ft_strlen(s1);
	while (str1[i] && i < ft_strlen(set1))
	{
		while (set[i])
		{
			if (str1[i] == set[i])
				len--;
	
				
