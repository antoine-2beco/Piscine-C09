/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/27 12:52:19 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/27 14:33:04 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_is_sep(char str, char *charset)
{
	int	i;

	i = 0;
	while (charset[i] != '\0')
	{
		if (charset[i] == str)
			return (1);
		i++;
	}
	return (0);
}

int	ft_count_str(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_is_sep(str[i], charset))
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && !ft_is_sep(str[i], charset))
			i++;
	}
	return (count);
}

int	ft_strlensep(char *str, char *charset)
{
	int	l;

	l = 0;
	while (str[l] != '\0' && !ft_is_sep(str[l], charset))
		l++;
	return (l);
}

char	*ft_getstr(char *str, char *charset)
{
	int		i;
	int		l;
	char	*out;

	i = 0;
	l = ft_strlensep(str, charset);
	out = malloc(sizeof(char) * l + 1);
	if (!out)
		return (NULL);
	while (i < l)
	{
		out[i] = str[i];
		i++;
	}
	out[i] = '\0';
	return (out);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	char	**strings;

	i = 0;
	strings = (char **)malloc (sizeof(char *)
			* (ft_count_str (str, charset) + 1));
	if (!strings)
		return (NULL);
	while (*str != '\0')
	{
		while (*str != '\0' && ft_is_sep(*str, charset))
			str++;
		if (*str != '\0')
		{
			strings[i] = ft_getstr(str, charset);
			i++;
		}
		while (*str && !ft_is_sep(*str, charset))
			str++;
	}
	strings[i] = 0;
	return (strings);
}

/*
#include <stdio.h>
int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;

	split = ft_split(argv[1], argv[2]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}*/