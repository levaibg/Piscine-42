/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 11:27:00 by lloginov          #+#    #+#             */
/*   Updated: 2024/03/02 11:37:25 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	char c;

	if(ac == 2)
		while(*av[1])
		{
			c = *av[1]++;
			if ((c >= 'a' && c <= 'm') || (c >= 'A' && c<= 'M'))
				c +=13;
			else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c<='Z'))
				c -=13;
			write(1, &c,1); 
		}

	write(1, "\n", 1);
	return 0;

}
