/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 11:36:55 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/19 13:58:02 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (!(*str >= '1' && *str <= '9'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int result = ft_str_is_alpha("sawfdasd!!!5");
	printf("%d", result);
	return 3;
}*/
