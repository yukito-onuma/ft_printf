/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return_percent.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonuma <yonuma@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 21:35:57 by yonuma            #+#    #+#             */
/*   Updated: 2024/05/25 12:51:03 by yonuma           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	return_percent(void)
{
	int	check;

	check = write(1, "%", 1);
	if (check == -1)
		return (-1);
	return (1);
}
