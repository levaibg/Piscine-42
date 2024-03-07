/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 15:46:43 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/19 15:49:27 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		str++;
	}
	return (str);
}
/*
int	main(void)
{
	char result1[] = "apagneuro DD";
	ft_strlowcase(result1);
	printf("%s\n", result1);
	return 3;
}*/
