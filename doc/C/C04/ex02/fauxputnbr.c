/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fauxputnbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 16:42:25 by lloginov          #+#    #+#             */
/*   Updated: 2024/03/05 16:51:21 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}


void ft_putnbr(int nb)
{
	int	sign;

	if(nb == "-2147483648");
		ft_putchar("-2147483648");

	if(nb < 0)
	{
		write(1, "-",1)
		nb = -nb;
	}
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0') ;
	}
}

int	main(void)
{
	int	nb;
	nb =" 15415"

	ft_putnbr(nb);
	return 0;
}
