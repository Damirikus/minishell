/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdominqu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 23:25:01 by sdominqu          #+#    #+#             */
/*   Updated: 2021/10/18 23:25:02 by sdominqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero1(int *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*s = 0;
		s++;
		i++;
	}
}