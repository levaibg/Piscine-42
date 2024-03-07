/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fwr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 08:53:16 by lloginov          #+#    #+#             */
/*   Updated: 2024/03/05 11:20:42 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	put_number(int nb)
{
	if( nb > 9)
	{
		put_number(nb / 10);
	//	put_number(nb % 10);
	}
	//else
		ft_putchar(nb % 10 + '0');
}


int	main(void)
{
	int	nb;
	
	
	nb = 1 ;
	while(nb <= 100)
	{
		if(nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz", 8);
		else if (nb % 5 == 0)
			write(1, "buzz", 4);
		else if (nb % 3 == 0 )
			write(1, "fizz", 4);
		else 
			put_number(nb);
		ft_putchar('\n');
	nb++;
	}
	
	
}

