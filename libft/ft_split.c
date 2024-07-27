/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tda-cost <tda-cost@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 20:45:56 by tda-cost          #+#    #+#             */
/*   Updated: 2024/05/01 17:31:19 by tda-cost         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_countwords(char const *s, char c)
{
	int	i;
	int	words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			while (s[i] != '\0' && s[i] != c)
			{
				i++;
			}
			words++;
		}
		else
			i++;
	}
	return (words);
}

char	*ft_wordarray(const char *s, int start, int end)
{
	int		i;
	char	*temp;

	i = 0;
	temp = (char *)malloc(sizeof(char) * (end - start + 2));
	if (!temp)
		return (NULL);
	while (start <= end)
	{
		temp[i] = s[start];
		start++;
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

char	**ft_split(char const *s, char c)
{
	char	**str;

	auto int i = 0;
	auto int j = 0;
	auto int start = 0;
	str = (char **)malloc(sizeof(char *) * (ft_countwords(s, c) + 1));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			str[j] = ft_wordarray(s, start, i - 1);
			j++;
		}
		else
			i++;
	}
	str[j] = NULL;
	return (str);
}
/*
int main() {
    char **result;
    int i = 0;

    result = ft_split("Hello World! This is a test.", ' ');
    while (result[i]) {
        printf("%s\n", result[i]);
        i++;
    }
    i = 0;
    while (result[i]) {
        free(result[i]);
        i++;
    }
    free(result);

    return 0;
}*/