/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/02 15:46:27 by lloginov          #+#    #+#             */
/*   Updated: 2024/03/02 17:03:02 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void rot13(char *str)
{
	int i;
	
	i = 0;

	while(str[i])
	{
		while((str[i] >= 'a' && str[i] <= 'm') || (str[i] >= 'A' && str[i]<= 'M'))
		{
			str[i] +=13;
			write(1, &str[i],1);
			i++;
		}
		while ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i]<='Z'))
		{	
			str[i] -=13;
			write(1, &str[i],1);
			i++;
		}
	} 
	
}


int main (int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (i < argc)
	{
		j = 0;
/*		while (argv[i][j])
		{
			rot13(&argv[i][j]);
			j++;
		}
		i++;*/
		rot13(argv[1]);
	}
	return (0);
}
