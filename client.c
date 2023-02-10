/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:59:16 by sfidan            #+#    #+#             */
/*   Updated: 2022/11/29 15:59:18 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send_chr(int pid, char c, int bit)
{
	while (bit--)
	{
		kill(pid, SIGUSR2 - (c >> bit & 1));
		usleep(50);
	}
	usleep(150);
}

int	main(int c, char **v)
{
	if (c == 3)
	{
		while (*v[2])
			ft_send_chr(ft_atoi(v[1]), *v[2]++, 8);
		ft_send_chr(ft_atoi(v[1]), '\n', 8);
	}
	else
	{
		ft_str("\033[91mError: wrong format.\033[0m\n");
		ft_str("\033[33mTry: ./client <PID> <MESSAGE>\033[0m\n");
	}
}
