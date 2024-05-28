/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschneid <bschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 11:56:10 by bschneid          #+#    #+#             */
/*   Updated: 2024/04/16 14:43:21 by bschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char*));

int	ft_count_if(char **tab, int (*f)(char*))
{
	int	counter;

	counter = 0;
	while (*tab)
	{
		if ((*f)(*tab) == 1)
			counter++;
		tab++;
	}
	return (counter);
}
