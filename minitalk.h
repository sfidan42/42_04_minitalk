/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 17:29:21 by sfidan            #+#    #+#             */
/*   Updated: 2022/11/29 17:29:22 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <signal.h>
# include <sys/types.h>

int	ft_printf(const char *fmt, ...);

int	ft_chr(int c);
int	ft_str(char *s);
int	ft_uns(unsigned int n);
int	ft_nbr(int n);
int	ft_hex(unsigned long long n, char c);

int	ft_atoi(const char *c);

#endif
