/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stralloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalonzo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 14:51:47 by alalonzo          #+#    #+#             */
/*   Updated: 2020/12/03 17:55:59 by alalonzo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_stralloc(size_t n)
{
	char	*ptr;

	ptr = (char *)malloc(sizeof(char) * (n + 1));
	return (ptr);
}
