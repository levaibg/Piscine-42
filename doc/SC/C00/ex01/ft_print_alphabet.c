/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 09:26:20 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/25 09:38:38 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}	

void	ft_print_reverse_alphabet(void)
{
	int	i;

	i = 'a';
	while (i != 'z')
	{	
		ft_putchar(i);
		i--;
	}
	ft_putchar('z');
}

int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
