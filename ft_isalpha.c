/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeestev <adeestev@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 11:27:17 by adeestev          #+#    #+#             */
/*   Updated: 2024/12/03 11:19:59 by adeestev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (c);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	x;
	int	y;
	int	other;

	x = 'A';
	y = 'a';
	other = '3';
	printf("%d\n", ft_isalpha(x));
	printf("%d\n", ft_isalpha(y));
	printf("%d\n", ft_isalpha(other));
	printf("%d\n", isalpha(x));
	printf("%d\n", isalpha(y));
	printf("%d\n", isalpha(other));
	return (0);
}
*/