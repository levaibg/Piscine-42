/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 17:49:51 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/27 15:32:54 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
	char	*src = "Salut";
	char	dest1[20] = {1,0,1,1,1,1,1,1,1,1};
	char	dest2[20] = {1,0,1,1,1,1,1,1,1,1};
	int	n = 2;

	ft_strncat(dest1, src, n);
	strncat(dest2, src, n);
	for (int i = 0; i < 10; i++) printf("%d ", dest1[i]);
	printf("\n");
	for (int i = 0; i < 10; i++) printf("%d ", dest2[i]);
	printf("\n");
}
*/
