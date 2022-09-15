/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rphuyal <rphuyal@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 16:38:41 by rphuyal           #+#    #+#             */
/*   Updated: 2022/09/15 17:13:59 by rphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	char	*str_copy;

	str_copy = str;
	while (*str != '\0')
	{
		if (*str >= 97 && *str <= 122)
			*str -= 32;
		str++;
	}
	return (str_copy);
}

/*int main(void)
{
	char	first[] = "abcd";
	char	second[] = "AbCdE";
	char	third[] = "aB554gF.,';";

	printf("%s", ft_strupcase(first));
	printf("%s", ft_strupcase(second));
	printf("%s", ft_strupcase(third));
}*/