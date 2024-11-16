/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol_handle.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oissa <oissa@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 10:54:21 by oissa             #+#    #+#             */
/*   Updated: 2024/11/16 10:54:21 by oissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	handle_initial(const char *str, int *sign)
{
	size_t	i;

	i = 0;
	*sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			*sign = -1;
		i++;
	}
	while (str[i] == '0')
		i++;
	return (i);
}

static int	is_valid_length(const char *str, size_t i)
{
	return (ft_strlen(str + i) <= 10);
}

static long	convert_and_validate(const char *str, size_t i, int sign,
		int *valid)
{
	long	result;

	result = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
		{
			*valid = 0;
			return (0);
		}
		result = result * 10 + (str[i] - '0');
		if (result * sign > INT_MAX || result * sign < INT_MIN)
		{
			*valid = 0;
			return (0);
		}
		i++;
	}
	return (result * sign);
}

long	ft_atol_handle(const char *str, int *valid)
{
	int		sign;
	size_t	i;

	*valid = 1;
	i = handle_initial(str, &sign);
	if (!is_valid_length(str, i))
	{
		*valid = 0;
		return (0);
	}
	return (convert_and_validate(str, i, sign, valid));
}
