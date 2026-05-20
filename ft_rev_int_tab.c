/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: neozoeme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/14 13:33:07 by neozoeme          #+#    #+#             */
/*   Updated: 2026/05/14 13:33:10 by neozoeme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = size - 1;
	while (b > a)
	{
		c = tab[a];
		tab[a] = tab[b];
		tab[b] = c;
		a++;
		b--;
	}
}

/*#include <stdio.h>

int	main(void)
{
	int	num[] = {25, 50, 75, 100};

	int	size = 4;
	ft_rev_int_tab(num, size);
	int	i = 0;
	while (i < size)
	{
		printf("%d ", num[i]);
		i++;
	}
}*/
