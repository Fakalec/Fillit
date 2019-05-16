/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_revwd.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dstracke <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/30 17:23:47 by dstracke          #+#    #+#             */
/*   Updated: 2019/01/30 17:43:05 by dstracke         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_revwd(char *t)
{
	size_t	i;
	size_t	len;
	char	k;

	i = 0;
	len = ft_strlen(t);
	if (t)
	{
		while (i < len)
		{
			k = t[i];
			t[i++] = t[--len];
			t[len] = k;
		}
	}
	t[len + i] = '\0';
}
