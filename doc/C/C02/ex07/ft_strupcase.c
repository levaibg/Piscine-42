/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/19 14:31:48 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/19 15:41:12 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		str++;
	}
	return (str);
}
/*
int	main(void)
{
	char result1[] = "apagneuro DD";
	ft_strupcase(result1);
	printf("%s\n", result1);
	return 3;
}*/
