/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 10:08:55 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/15 11:37:15 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_num(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	a ;
	int	b ;
	int	c ;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		while (b <= 8)
		{
			c = b + 1;
			while (c <= 9)
			{
				ft_print_num(a + '0');
				ft_print_num(b + '0');
				ft_print_num(c + '0');
				if (!(a == '7' && b == '8' && c == '9'))
					write(1, ", ", 2);
				c++;
			}
			b++;
		}
		a++;
	}
}
int main(void)
{
	ft_print_comb();
	return 0;
}
