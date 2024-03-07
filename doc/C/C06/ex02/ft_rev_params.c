/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 18:06:48 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/26 10:43:50 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	f;

	i = 1;
	f = argc;
	argc--;
	while (argc >= 1)
	{
		j = 0;
		while (argv[argc][j])
		{
			write (1, &argv[argc][j], 1);
			j++;
		}
		ft_putchar ('\n');
		argc--;
	}
}
