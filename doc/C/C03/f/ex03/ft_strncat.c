/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:14:00 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/28 16:32:52 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;

	while(dest[i])
	{
	i++;
	}
	while(src[j] &&  j <n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	

}
