/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/07 14:10:42 by sfidan            #+#    #+#             */
/*   Updated: 2022/08/07 14:12:10 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdarg.h>

int	ft_printf(const char *fmt, ...);

int	ft_chr(int c);
int	ft_str(char *s);
int	ft_uns(unsigned int n);
int	ft_nbr(int n);
int	ft_hex(unsigned long long n, char c);

#endif
