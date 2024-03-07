/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 09:51:01 by lloginov          #+#    #+#             */
/*   Updated: 2024/03/03 10:36:22 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c )
{
	write(1, &c, 1);
}

char	*ft_rev_print(char *str)
{
	int i;
	
	i = 0;
	while(str[i])
		i++;
	
	while(i > 0)
	{
		ft_putchar(str[i-1]);
		i--;
	}
	ft_putchar('\n');
	return(&str[i]);
}
int main()
{
	char str[] = "jour";
	ft_rev_print(str);
}
