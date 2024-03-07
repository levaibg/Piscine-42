/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 16:30:43 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/24 18:04:44 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
	char	dest[] = {1,1,1,1,1,1,0,1,1,0};
	char	dest2[] = {1,1,1,1,1,1,0,1,1,0};
	char	src[] = "Hello";

	ft_strcat(dest, src,);
	strcat(dest2, src,);
	for (int i = 0; i < 10 ; i++)
		printf("%d ", dest[i]);
	printf("\n");
	for (int i = 0; i < 10 ; i++)
		printf("%d ", dest2[i]);
	printf("\n");
}*/
