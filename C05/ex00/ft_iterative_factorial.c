/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 17:13:54 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/22 21:30:12 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	long	result;

	result = nb;
	while (nb > 1)
	{
		nb = nb - 1;
		result *= nb;
	}
	return (result);
}

/*int main(int argc, char *argv[])
{
	printf("%i\n", ft_iterative_factorial(10));
	return 0;
}*/
