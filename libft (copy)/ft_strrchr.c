/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 00:16:57 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/04/29 06:18:03 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			len;
	char			*last;
	unsigned char	uc;

	uc = (unsigned char)c;
	len = ft_strlen(s);
	last = 0;
	if (uc == '\0')
		return ((char *)(s + len));
	s += len;
	while (len-- > 0)
	{
		if (*--s == uc)
		{
			last = (char *)s;
			break ;
		}
	}
	return (last);
}
