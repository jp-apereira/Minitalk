/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nums.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jalves-p <jalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 12:53:06 by jalves-p          #+#    #+#             */
/*   Updated: 2023/04/19 12:55:14 by jalves-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int		len;

	len = 0;
	if (nb == -2147483648)
	{
		len += ft_putchar('-');
		len += ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		len += ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	else
	{
		len += ft_putchar(nb + 48);
	}
	return (len);
}

int	ft_put_u(unsigned int nb)
{
	int		len;

	len = 0;
	if (nb >= 10)
	{
		len += ft_putnbr(nb / 10);
		len += ft_putnbr(nb % 10);
	}
	else
	{
		len += ft_putchar(nb + 48);
	}
	return (len);
}

int	ft_puthex(unsigned int n, int is_lower)
{
	int		len;
	char	*hex;

	len = 0;
	if (is_lower)
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (n < 16)
	{
		len += ft_putchar(hex[n % 16]);
		return (len);
	}
	len += ft_puthex(n / 16, is_lower);
	len += ft_putchar(hex[n % 16]);
	return (len);
}

int	ft_put_pointer(unsigned long n)
{
	int		len;

	len = 0;
	if (!n)
		return (ft_putstr("(nil)"));
	else
	{
		if (n < 16)
		{
			len += ft_putstr("0x");
			len += ft_putchar("0123456789abcdef"[n % 16]);
			return (len);
		}
		len += ft_put_pointer(n / 16);
		len += ft_putchar("0123456789abcdef"[n % 16]);
	}
	return (len);
}
