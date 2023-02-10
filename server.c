/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sfidan <sfidan@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:59:27 by sfidan            #+#    #+#             */
/*   Updated: 2022/11/29 15:59:28 by sfidan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_receive(int signal)
{
	static int				i;
	static unsigned char	c;

	if (signal == SIGUSR1)
		c |= 1;
	i++;
	if (i == 8)
	{
		ft_chr(c);
		i = 0;
		c = 0;
	}
	else
		c <<= 1;
}

int	main(void)
{
	signal(SIGUSR1, ft_receive);
	signal(SIGUSR2, ft_receive);
	ft_printf("Process ID: %d\n", getpid());
	while (1)
		pause();
}
