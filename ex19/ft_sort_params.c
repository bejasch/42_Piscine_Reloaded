/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschneid <bschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:24:03 by bschneid          #+#    #+#             */
/*   Updated: 2024/04/15 17:44:38 by bschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <unistd.h>

void	ft_putchar(char c);

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 || *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	return (0);
}

void	bubble(int argc, char **argv)
{
	int		counter;
	char	*tmp;

	while (argc > 2)
	{
		counter = 1;
		while (counter < argc - 1)
		{
			if (ft_strcmp(argv[counter], argv[counter + 1]) > 0)
			{
				tmp = argv[counter];
				argv[counter] = argv[counter + 1];
				argv[counter + 1] = tmp;
			}
			counter++;
		}
		argc--;
	}
}

// write(1, &argv[print][counter], 1);
// write(1, "\n", 1);
int	main(int argc, char **argv)
{
	int	print;
	int	counter;

	bubble(argc, argv);
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
