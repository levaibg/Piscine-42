/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_lasyt.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 10:40:00 by lloginov          #+#    #+#             */
/*   Updated: 2024/03/03 11:03:49 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;
	
	j = ac - 1;
	if(ac > 1)
	{
		i = 0;
		ac--;
		while(av[j][i])
		{
			ft_putchar(av[j][i]);
			i++;
		}
	//	j++;
	}
	ft_putchar('\n');
	
	return (0);

}
