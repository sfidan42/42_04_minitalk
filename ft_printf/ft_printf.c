/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:24:05 by sfidan            #+#    #+#             */
/*   Updated: 2022/11/29 17:24:07 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list ap, const char fmt)
{
	if (fmt == 'c')
		return (ft_chr(va_arg(ap, int)));
	if (fmt == 's')
		return (ft_str(va_arg(ap, char *)));
	if (fmt == 'p')
		return (ft_str("0x") + ft_hex(va_arg(ap, unsigned long long), 'x'));
	if (fmt == 'd' || fmt == 'i')
		return (ft_nbr(va_arg(ap, int)));
	if (fmt == 'u')
		return (ft_uns(va_arg(ap, unsigned int)));
	if (fmt == 'x' || fmt == 'X')
		return (ft_hex(va_arg(ap, unsigned long long), fmt));
	if (fmt == '%')
		return (ft_chr('%'));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		len;

	len = 0;
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
			len += ft_format(ap, *(++fmt));
		else
			len += ft_chr(*fmt);
		fmt++;
	}
	va_end(ap);
	return (len);
}
