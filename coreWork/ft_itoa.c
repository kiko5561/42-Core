/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 19:29:53 by selow             #+#    #+#             */
/*   Updated: 2025/04/17 14:43:44 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <unistd.h>

void  ft_putchar(char c)
{
        write(1, &c, 1);
}

int     ft_atoi(const char *str)
{
        int     i;
        int     sign;
        int     val;

        i = 0;
        while (str[i] == ' ' || (str[i] <= 13 && str[i] >= 9))
                i++;

        sign = 1;
        if (str[i] == '+')
                i++;
        else if (str[i] == '-')
        {
                sign = -sign;
                i++;
        }

        val = 0;
        while (str[i] >= '0' && str[i] <= '9')
        {
                val = val * 10 + (str[i] - '0');
                i++;
        }
        return (val * sign);
}

void	ft_putnbr(int n)
{
	if (n == INT_MIN)
	{
		write(1, "-2147483648", 11);
		return;
	}
	else if (n > 9) // more than one digit
		ft_putnbr(n / 10);
	ft_putchar(n % 10 + '0');
}


char	*ft_itoa(int n)
{
	// similar to putnbr + atoi

		
}

#include <stdio.h>
int	main(int argc, char **argv)
{
	ft_putnbr(ft_atoi(argv[1]));
	printf("%d", INT_MIN);
	write(1, "\n", 1);
	return 0;
}
