/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschneid <bschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:16:55 by bschneid          #+#    #+#             */
/*   Updated: 2024/04/15 16:25:33 by bschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_iterative_factorial(int nb);

// int	main(void)
// {
// 	printf("%d", ft_iterative_factorial(0));
// }

int	ft_iterative_factorial(int nb)
{
	int	erg;

	if (nb < 0)
		return (0);
	erg = 1;
	while (nb > 0)
	{
		erg *= nb;
		nb--;
	}
	return (erg);
}
