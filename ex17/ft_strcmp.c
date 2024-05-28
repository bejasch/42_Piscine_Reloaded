/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschneid <bschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 16:58:28 by bschneid          #+#    #+#             */
/*   Updated: 2024/04/15 17:05:20 by bschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

// int	main(void)
// {
// 	printf("%d\n", ft_strcmp("test","tesu"));
// 	printf("%d\n", ft_strcmp("test","tess"));
// 	printf("%d\n", ft_strcmp("test","test1"));
// 	printf("%d\n", ft_strcmp("test","test"));
// 	printf("%d\n", ft_strcmp("test",""));
// }

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
