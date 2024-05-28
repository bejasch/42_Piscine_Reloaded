/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschneid <bschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:06:59 by bschneid          #+#    #+#             */
/*   Updated: 2024/04/15 17:23:25 by bschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);

// write(1, &argv[print][counter], 1);
// write(1, "\n", 1);
int	main(int argc, char **argv)
{
	int	print;
	int	counter;

	print = 1;
	while (print < argc)
	{
		counter = 0;
		while (argv[print][counter])
		{
			ft_putchar(argv[print][counter]);
			counter++;
		}
		ft_putchar('\n');
		print++;
	}
}
