/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neozoeme <neozoeme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/13 16:57:11 by neozoeme          #+#    #+#             */
/*   Updated: 2026/05/18 13:31:25 by neozoeme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *a / *b;
	*b = c % *b;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 5;
	ft_ultimate_div_mod(&a, &b);
	printf("%d %d", a, b);
}*/
