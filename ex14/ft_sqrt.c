/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschneid <bschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:40:15 by bschneid          #+#    #+#             */
/*   Updated: 2024/04/15 16:53:40 by bschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_sqrt(int nb);

// int	main(void)
// {
// 	printf("%d\n", ft_sqrt(0));
// 	printf("%d\n", ft_sqrt(1));
// 	printf("%d\n", ft_sqrt(2));
// 	printf("%d\n", ft_sqrt(3));
// 	printf("%d\n", ft_sqrt(4));
// 	printf("%d\n", ft_sqrt(64));
// }

int	ft_sqrt(int nb)
{
	int	test;
	int	range;

	test = 0;
	range = 0;
	while (range < nb)
	{
		range = test * test;
		if (range == nb)
			return (test);
		test++;
	}
	return (0);
}
