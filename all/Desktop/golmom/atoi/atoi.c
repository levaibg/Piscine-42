/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:31:57 by lloginov          #+#    #+#             */
/*   Updated: 2024/03/06 15:49:18 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ***************************************************************************/
int	ft_atoi(const char *str)
{
	int	i;
	int nb;
	int sign;
	
	i = 0;
	nb = 0;
	sign = 1;
	
	while(str[i] >= 9 && str[i] <= 13 || str[i] == ' ')
		i++;
	
	if(str[i]== '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -sign;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		nb = nb * 10 +  (str[i] - '0');
		i++;
	}
	return(nb * sign);
	
}
#include <stdio.h>


int	main(void)
{
	printf("42:%d\n", ft_atoi("  \n  42t4457"));
	printf("-42:%d\n", ft_atoi(" --+-42sfs:f545"));
	}
