/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strcpy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 13:56:06 by lloginov          #+#    #+#             */
/*   Updated: 2024/03/06 14:07:02 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while(dest[i] && src[i])
	{
		dest[i]=src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(int argc, char **argv)
{
	if(argc > 1)
	{
		printf("%s", ft_strcpy(argv[1], argv[2]));
	}
	return 0;
}
