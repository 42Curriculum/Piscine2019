/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjosephi <jjosephi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/19 01:49:18 by jjosephi          #+#    #+#             */
/*   Updated: 2019/07/19 23:21:34 by jjosephi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strdup_range(char *src, int start, int end)
{
	int		i;
	char	*dest;

	if (!src)
	{
		return (0);
	}
	if (!(dest = malloc((end - start) + 1)))
	{
		return (0);
	}
	i = 0;
	while (start < end)
		dest[i++] = src[start++];
	dest[i] = '\0';
	return (dest);
}

int		ft_isdelimiter(char c, char *delimiter)
{
	while (*delimiter)
		if (c == *delimiter++)
			return (1);
	return (0);
}

int		ft_word_count(char *str, char *delimiters)
{
	int words;

	words = 0;
	while (*str)
	{
		while (*str && ft_isdelimiter(*str, delimiters))
			str++;
		if (*str && !ft_isdelimiter(*str, delimiters))
		{
			words++;
			while (*str && !ft_isdelimiter(*str, delimiters))
				str++;
		}
	}
	return (words);
}

char	**ft_split_whitespaces(char *str)
{
	char	**strarray;
	int		strarray_size;
	int		i;
	int		j;
	int		k;

	strarray_size = ft_word_count(str, " \t\n");
	if (!(strarray = malloc(
		sizeof(char *) * (strarray_size = ft_word_count(str, " \t\n") + 1))))
		return ((strarray = 0));
	i = 0;
	k = 0;
	while (k < (strarray_size - 1))
	{
		while (str[i] && ft_isdelimiter(str[i], " \t\n"))
			i++;
		j = i;
		while (str[i] && !ft_isdelimiter(str[i], " \t\n"))
			i++;
		if (!(strarray[k++] = ft_strdup_range(str, j, i)))
			return ((strarray = 0));
	}
	strarray[k] = 0;
	return (strarray);
}
