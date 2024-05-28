/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bschneid <bschneid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 17:44:56 by bschneid          #+#    #+#             */
/*   Updated: 2024/04/15 17:55:27 by bschneid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

char	*ft_strdup(char *src);

// int	main(void)
// {
// 	printf("%s\n", ft_strdup("Test"));
// 	printf("%s\n", ft_strdup("Hello World!"));
// 	printf("%s\n", ft_strdup("sdf sdf aefwae 4 43t d4 4\t"));
// }

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

char	*ft_strdup(char *src)
{
	char	*new;
	char	*ret;

	new = (char *)malloc(ft_strlen(src) + 1);
	ret = new;
	while (*src)
	{
		*new = *src;
		new++;
		src++;
	}
	*new = '\0';
	return (ret);
}
