/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysoumar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 16:05:39 by aysoumar          #+#    #+#             */
/*   Updated: 2025/01/22 17:04:56 by aysoumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;
	int	no_alphabet;

	i = 0;
	no_alphabet = 0;
	while (str[i]!= '\0')
	{
		if (!((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123)))
		{
			no_alphabet++;
		}
		i++;
	}
	if (no_alphabet = 0)
	{	
		write(1, "Y", 1);
		return (1);
	}
	else
	{
		write(1, "N", 1);
		return (0);
	}
}

int	main(void)
{
	char str[] = "ayouba";
	ft_str_is_alpha(str);
	return (0);
}
