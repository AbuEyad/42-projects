/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_ptr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: habu-zua <habu-zua@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 21:43:17 by habu-zua          #+#    #+#             */
/*   Updated: 2023/08/23 10:59:20 by habu-zua         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ptr_len(uintptr_t n);
static void	print_ptr(uintptr_t n);

int	ft_put_ptr(uintptr_t ptr)
{
	int	length;

	length = 0;
	length += write(1, "0x", 2);
	if (ptr == 0)
		length += write(1, "0", 1);
	else
	{
		print_ptr(ptr);
		length += ptr_len(ptr);
	}
	return (length);
}

static int	ptr_len(uintptr_t n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		len++;
		n = n / 16;
	}
	return (len);
}

static void	print_ptr(uintptr_t n)
{
	if (n >= 16)
	{
		print_ptr(n / 16);
		print_ptr(n % 16);
	}
	else
	{
		if (n <= 9)
			ft_putchar_plus((n + '0'));
		else
			ft_putchar_plus((n - 10 + 'a'));
	}
}
