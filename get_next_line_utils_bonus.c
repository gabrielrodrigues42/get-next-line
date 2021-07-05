/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 01:41:38 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/04 01:51:25 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (char)c)
			return ((char *)s);
		s++;
	}
	if ((char)c == 0)
		return ((char *)s);
	return (NULL);
}

char	*ft_strdup(const char *s1)
{
	char	*dup;
	char	*tmp;

	dup = malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!dup)
		return (NULL);
	tmp = dup;
	while (*s1)
		*tmp++ = *s1++;
	*tmp = '\0';
	return (dup);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joined;
	char	*tmp;

	joined = malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!joined)
		return (NULL);
	tmp = joined;
	while (*s1)
		*tmp++ = *s1++;
	while (*s2)
		*tmp++ = *s2++;
	*tmp = '\0';
	return (joined);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	char	*tmp;
	size_t	size;

	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	size = ft_strlen(&s[start]);
	if (size < len)
		len = size;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	tmp = sub;
	while (len--)
		*tmp++ = s[start++];
	*tmp = '\0';
	return (sub);
}
