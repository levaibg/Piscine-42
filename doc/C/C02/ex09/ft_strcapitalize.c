/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 16:26:14 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/19 17:50:35 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
		i++;
	}
	while (str[i])
	{
		if (str[i] == ' ' && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			str[i + 1] -= 32;
		if (str[i] == '+' || str[i] == '-')
			str[i + 1] -= 32;
		str++;
	}
	return (str);
}
/*
int	main(void)
{
	char result1[] = "salut, cont tu vas ? 42mots deux; cite+et+un";
	ft_strcapitalize(result1);
	printf("%s\n", result1);
	return 3;
}*/
