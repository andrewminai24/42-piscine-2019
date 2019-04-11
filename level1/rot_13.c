/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aminai <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 03:49:10 by aminai            #+#    #+#             */
/*   Updated: 2019/04/11 03:49:15 by aminai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str)
{
	char c;

	while (*str != '\0')
	{
		c = *str;
		if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
			c += 13;
		else if (( c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		{
			c -= 13;
		}
		write(1, &c, 1);
		str++;
	}
}

int 	main(int ac, char **av)
{
	if (ac == 2)
		rot_13(av[1]);
	return (0);
}
