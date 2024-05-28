/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschneid <bschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 10:23:03 by bschneid          #+#    #+#             */
/*   Updated: 2024/04/16 10:39:34 by bschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max);

// int	main(void)
// {
// 	int	*arr;
// 	int	i;

// 	arr = ft_range(-123, 234);
// 	i = 0;
// 	while (i < 357)
// 	{
// 		printf("%d\n", arr[i]);
// 		i++;
// 	}
// 	free(arr);
// }

int	*ft_range(int min, int max)
{
	int	*arr;
	int	counter;

	if (min >= max)
		return (0);
	counter = 0;
	arr = (int *)malloc((max - min) * sizeof(int));
	if (arr == 0)
		return (0);
	while (min < max)
	{
		arr[counter] = min;
		counter++;
		min++;
	}
	return (arr);
}
