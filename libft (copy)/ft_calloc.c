/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/20 06:49:35 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/04/29 01:34:16 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*ans;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	ans = malloc(size * count);
	if (!ans)
		return (NULL);
	ft_bzero(ans, count * size);
	return (ans);
}
