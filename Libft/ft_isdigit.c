/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwonle3 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/19 22:21:23 by jiwonle3          #+#    #+#             */
/*   Updated: 2025/04/19 22:22:22 by jiwonle3         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isdigit(int num)
{
	if (num >= 48 && num <= 57)
		return (1);
	return (0);
}
