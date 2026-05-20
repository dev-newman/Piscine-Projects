/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neozoeme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 17:33:15 by neozoeme          #+#    #+#             */
/*   Updated: 2026/05/13 17:33:19 by neozoeme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*int	main(void)
{
	char	input [] = "Hello";

	ft_putstr(input);
}*/
