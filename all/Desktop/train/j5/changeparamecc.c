/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   changeparamecc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/05 11:32:44 by lloginov          #+#    #+#             */
/*   Updated: 2024/03/05 14:14:42 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

int	scrp(char *caca, char b, char a)
{
	int	i;
	char	j;

	j = *caca;
	i = 0;

	while(caca[i])
	{
		if(caca[i] == b)
			caca[i] = a;
		i++;
	}
	if(j == caca)
		write(1, "\n",1);
	return(caca);
	
}


	
int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	
	if(argc == 3)
	{
		scrp(argv[1], agrv[2], argv[3]);
	}

	else
		write(1, "/n",1)
}
