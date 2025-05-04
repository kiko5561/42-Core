/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: selow <selow@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 17:36:53 by selow             #+#    #+#             */
/*   Updated: 2025/04/19 02:30:37 by selow            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	val;

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
/*
int	_compare(int a, int b)
{
	if (a == b)
		return (1);
	return (0);
}

void	__print(char *str)
{
	int control = atoi(str);
	int res = ft_atoi(str);
	printf("\n\nCONTROL: %d\n", control);
	printf("RESULT: %d\n", res);
	if (control == res)
		printf("TRUE\n");
	else
		printf("FALSE\n");
}

void	_print(char **strs)
{
	int	i;
	int	j;
	
	for (i = 0; strs[i] != NULL; i++)
	{
		__print(strs[i]);
	}
	
}

int main(int argc, char **argv)
{
	char *test[] = {
	"42",             // basic number
	"   42",          // leading spaces
	"+42",            // positive sign
	"-42",            // negative sign
	"0042",           // leading zeros
	"+0000123",       // positive with leading zeros
	"-00000123",      // negative with leading zeros
	"   +42abc",      // valid number followed by junk
	"   -42 123",     // stops at first invalid char
	"abc42",          // invalid start
	"",               // empty string
	" ",		// just space
	"   \t\n\r\v\f42",// all whitespace types before number
	"\n\n-2147483648",// INT_MIN
	"2147483647",     // INT_MAX
	"2147483648",     // overflow (1 above INT_MAX)
	"-2147483649",    // underflow (1 below INT_MIN)
	"+-42",           // invalid format
	"--42",           // invalid format
	"-+42",           // invalid format
	"12345678901234567890", // large number overflow
	"0",		// zero
	"-0",             // negative zero
	"+0",             // positive zero
	NULL              // end of list (important!)
	};

	_print(test);
	printf("INT MAX: %d\n", INT_MAX);
	return 0;
}*/
