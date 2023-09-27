/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ade-beco <ade-beco@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 11:21:54 by ade-beco          #+#    #+#             */
/*   Updated: 2023/09/27 11:49:54 by ade-beco         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	if ((s1[i] == '\0') && (s2[i] == '\0'))
		return (0);
	if (s1[i] == '\0')
		return (-1);
	else
		return (1);
}
/*
int main(void)
{
    char s1[] = {"abce"};
    char s2[] = {"abccdd"};
    char res = 0;

    res = ft_strcmp(s1, s2);
    printf("%d", res);
    return (0);
}
*/
