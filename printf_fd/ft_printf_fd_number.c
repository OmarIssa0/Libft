/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_number.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oissa <oissa@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:24:45 by oissa             #+#    #+#             */
/*   Updated: 2024/09/14 14:53:28 by oissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_fd.h"

int	ft_printf_fd_number(int n, int fd)
{
	char	*a;
	int		len;

	len = 0;
	a = ft_itoa(n);
	len += ft_printf_fd_string(a, fd);
	free(a);
	return (len);
}
