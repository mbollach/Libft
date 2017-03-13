/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbollach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 02:12:56 by mbollach          #+#    #+#             */
/*   Updated: 2016/12/02 15:23:37 by mbollach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	if (n > -2147483648)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = (-n);
		}
		if (n >= 10)
		{
			ft_putnbr(n / 10);
			ft_putchar((n % 10) + 48);
		}
		if (n >= 0 && n < 10)
			ft_putchar(n + 48);
	}
	else
		ft_putstr("-2147483648");
}
