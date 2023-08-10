/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: macarval <macarval@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 15:40:09 by macarval          #+#    #+#             */
/*   Updated: 2022/05/28 00:35:50 by macarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(char *s)
{
	size_t	r;

	r = 0;
	if (s)
	{
		while (s[r] != '\0')
			r++;
	}
	return (r);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*res;

	j = 0;
	i = 0;
	res = malloc ((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	if (s1)
	{
		i = -1;
		while (s1[++i])
			res[i] = s1[i];
	}
	while (s2[j])
		res[i++] = s2[j++];
	res[i] = '\0';
	free(s1);
	return (res);
}

void	ft_bzero(void *b, size_t len)
{
	size_t	i;
	char	*r;

	i = 0;
	r = b;
	while (i < len)
	{
		r[i] = '\0';
		i++;
	}
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*res;

	if (str != NULL)
	{
		i = 0;
		res = malloc ((ft_strlen(str) + 1) * sizeof(char));
		if (!res)
			return (NULL);
		while (str[i])
		{
			res[i] = str[i];
			i++;
		}
		res[i] = '\0';
		str = NULL;
		return (res);
	}
	return (NULL);
}
