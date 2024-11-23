/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oissa <oissa@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:24:38 by oissa             #+#    #+#             */
/*   Updated: 2024/09/14 14:53:59 by oissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

int	ft_printf_fd_unsigned(unsigned int n, int fd)
{
	int	len;

	len = 0;
	if (n <= UINT_MAX)
	{
		if (n >= 10)
		{
			len += ft_printf_fd_unsigned(n / 10, fd);
			len += ft_printf_fd_unsigned(n % 10, fd);
		}
		else
			len += ft_printf_fd_char(n + '0', fd);
		return (len);
	}
	return (0);
}
