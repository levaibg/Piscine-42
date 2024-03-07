/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcmp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 09:35:55 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/28 10:35:15 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	
	i = 0;
	while(s1[i] && s2[i] && (s1[i] == s2[i]))
	{
	i++;
	}
	return (s1[i] - s2[i]);
}

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 2;
	while(ac == 2)
	{
		while(av[j][i] != '\0')
		{
			ft_strcmp(&av[1][i],&av[2][j]);
			i++;
			j++;
		}
	}
}
