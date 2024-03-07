/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:01:17 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/19 14:11:15 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (!(*str >= ' ' && *str <= '~'))
			return (0);
		str++;
	}
	return (1);
}
/*
int	main(void)
{
	int result = ft_str_is_printable("sawfdasd!!!5");
	printf("%d", result);
	return 3;
}*/
