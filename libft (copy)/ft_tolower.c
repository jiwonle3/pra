/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:42:58 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/04/29 04:03:37 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_tolower(int num)
{
	if (num >= 'A' && num <= 'Z')
		num += 32;
	return (num);
}
