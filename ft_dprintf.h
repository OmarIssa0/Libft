/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_fd.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oissa <oissa@student.42amman.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 23:24:34 by oissa             #+#    #+#             */
/*   Updated: 2024/11/25 13:24:50 by oissa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FD_H
#define FT_PRINTF_FD_H

#include <limits.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>
#include "libft.h"

int ft_dprintf(int fd, const char *formater, ...);
int ft_dprintf_char(char c, int fd);
int ft_dprintf_string(char *args, int fd);
int ft_dprintf_unsigned(unsigned int n, int fd);
int ft_dprintf_hex(unsigned long n, int fd);
int ft_dprintf_hex_uppercase(unsigned long n, int fd);
int ft_dprintf_number(int n, int fd);
int ft_dprintf_ptr(unsigned long long n, int fd);
char *ft_itoa(int n);

#endif