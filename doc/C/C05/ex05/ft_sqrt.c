/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:39:06 by lloginov          #+#    #+#             */
/*   Updated: 2024/03/06 11:18:07 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;
	int	big;
	int	mid;
	int	small;

	small = 0;
	big = 46340;
	i = 0;
	mid = (small + big) / 2;
	if (big * big == nb)
		return (big);
	while (i < 25)
	{
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid > nb)
			big = mid;
		else if (mid * mid < nb)
			small = mid;
		mid = (big + small) / 2;
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int ft_sqrt(int nb);

int	main(void)
{
	printf("10:%d\n", ft_sqrt(100));
	printf("6:%d\n", ft_sqrt(36));
	printf("0:%d\n", ft_sqrt(37));
	printf("100:%d\n", ft_sqrt(10000));
	printf("0:%d\n", ft_sqrt(10001));
	printf("2000:%d\n", ft_sqrt(4000000));
	printf("0:%d\n", ft_sqrt(-36));
}*/
