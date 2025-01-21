/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysoumar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 23:14:38 by aysoumar          #+#    #+#             */
/*   Updated: 2025/01/21 23:48:13 by aysoumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		write(1, &dest[i], 1);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char *src = "ayouba";
	char *dest;
	*ft_strcpy(src, dest);
	return (0);
}
