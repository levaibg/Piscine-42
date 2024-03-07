/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:12:39 by lloginov          #+#    #+#             */
/*   Updated: 2024/03/06 14:45:27 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}	

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	
	int	i;
	int	j;

	j = 0;
	i = 0;
	
	
	if(argc == 4 && (ft_strlen(argv[2]) == 1 && ft_strlen(argv[3]) == 1))
	{
		while(argv[1][i])
		{
			if (argv[1][i] == argv[2][j])
			{
				argv[1][i] = argv[3][j];
				ft_putchar(argv[1][i]);
				i++;	
			}
			else
			{	
				ft_putchar(argv[1][i]);
				i++;
			}
		}
	}
	ft_putchar('\n');
	return 0;
	
}
