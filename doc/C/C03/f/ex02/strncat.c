/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strncat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 10:52:21 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/28 11:12:33 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;

	while(dest[i])
	{
		i++;
	}
	while(src[j])
	{
	dest[i] = src[j];
	j++;
	i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <string.h>
#include <stdio.h>
int	main(void)
{
	char s1a[10] = "Test1";
	char s2a[] = "OK";
	char s1b[10] = "Test1";
	char s2b[] = "OK";
	char s3a[10] = "Same";
	char s4a[] = "Size";
	char s3b[10] = "Same";
	char s4b[] = "Size";
	char s5a[20] = "Shorter";
	char s6a[] = "ThanMyself";
	char s5b[20] = "Shorter";
	char s6b[] = "ThanMyself";

	printf("%s:%s\n", ft_strcat(s1a, s2a), strcat(s1b, s2b));
	printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strcat(s3a, s4a), strcat(s3b, s4b));
	printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
	printf("%s:%s\n", ft_strcat(s5a, s6a), strcat(s5b, s6b));
	printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
}
