/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:24:19 by sfidan            #+#    #+#             */
/*   Updated: 2022/11/29 17:24:20 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_chr(int c)
{
	return (write(1, &c, 1));
}

int	ft_hex(unsigned long long n, char fmt)
{
	if (n > 15)
		return (ft_hex(n / 16, fmt) + ft_hex(n % 16, fmt));
	if (fmt == 'x')
		return (ft_chr("0123456789abcdef"[n]));
	return (ft_chr("0123456789ABCDEF"[n]));
}

int	ft_nbr(int n)
{
	if (n == -2147483648)
		return (ft_str("-2147483648"));
	if (n < 0)
		return (ft_chr('-') + ft_nbr(-n));
	if (n > 9)
		return (ft_nbr(n / 10) + ft_nbr(n % 10));
	return (ft_chr(n + '0'));
}

int	ft_str(char *s)
{
	if (!s)
		return (ft_str("(null)"));
	if (!*s)
		return (0);
	return (ft_chr(*s) + ft_str(s + 1));
}

int	ft_uns(unsigned int n)
{
	if (n > 9)
		return (ft_uns(n / 10) + ft_uns(n % 10));
	return (ft_chr(n + '0'));
}
