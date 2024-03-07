/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 09:07:25 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/15 09:16:57 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_numbers(void)
{
	char	a;

	a = '0';
	while (a <= '9' )
	{
		ft_putchar(a);
		a++;
	}
}
/*
int main(void)
{
	ft_print_numbers();
	return 0;
}*/
