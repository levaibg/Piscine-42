/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 17:27:24 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/15 18:12:45 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include <unistd.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
}

int	main(void)
{
	int a ;
	ft_ft(&a);
	if (a == 42)
	{
		write(1, "OK\n", 3);
	}
	else
	{
		write(1, "FAIL\n", 5);
	}
}
	

