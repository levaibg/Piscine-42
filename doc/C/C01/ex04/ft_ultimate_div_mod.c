/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lloginov <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 19:28:13 by lloginov          #+#    #+#             */
/*   Updated: 2024/02/15 19:39:01 by lloginov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	teps ;
	int	rse;

	teps = *a;
	rse = *b;
	*a = teps / rse;
	*b = teps % rse;
}
