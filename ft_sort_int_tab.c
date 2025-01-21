/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aysoumar <aysoumar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/21 19:50:37 by aysoumar          #+#    #+#             */
/*   Updated: 2025/01/21 22:30:13 by aysoumar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	p;

	i = 0;
	while (p < size - 1)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
			temp = tab[i + 1];
			tab[i + 1] = tab[i];
			tab[i] = temp;
			}
			i++;
		}	
		p++;
	}
}
// int main(void)
// {   
//     int i = 0;
//     int tab[] = {0,1,4,9,2,7,3,5,8,6};
//     ft_rev_int_tab(tab, 10);
//     write(1, "[", 1);
//     while (i < 10)
//     {   
//         tab[i] = tab[i] + '0';
//         write(1, &tab[i], 1);
//         write(1, ",", 1);
//         i++;
//     }
//     write(1, "]", 1);
//     return (0);
// }
