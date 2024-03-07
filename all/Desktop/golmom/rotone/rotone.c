/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:15:04 by lloginov          #+#    #+#             */
/*   Updated: 2024/03/06 15:30:43 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int	i;
	
	i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'y')
			str[i] += 1;
		else if(str[i] >= 'A' && str[i] <= 'Y')
			str[i] += 1;
		else if (str[i] == 'z' || str[i] == 'Z')
			str[i] -= 25;
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if(argc == 2)
		rotone(argv[1]);
	return 0;
}
