/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nfordoxc <nfordoxc@42luxembourg.lu>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 11:44:25 by nfordoxc          #+#    #+#             */
/*   Updated: 2024/12/19 07:49:15 by nfordoxc         ###   Luxembourg.lu     */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
 * <cat>str</cat>
 *
 * <summary>
 *	int	ft_charchr(const char *s, char c)
 * </summary>
 *
 * <description>
 *	ft_charchr return the index of char c on the string s.
 * </description>
 *
 * <param type="const char *" name="s">string to parse</param>
 * <param type="char" name="c">char to fund</param>
 *
 * <return>
 *	the index of the char c or -1 if not fund.
 * </return>
 *
 */
int	ft_charchr(const char *s, char c)
{
	int	index;

	index = -1;
	if (!s)
		return (index);
	while (s[++index])
		if (s[index] == c)
			return (index);
	if (c == 0)
		return (index);
	return (-1);
}
