/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 22:33:07 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/08 22:39:17 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_str(const char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}
}

int	main(int argc, char const *argv[])
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write_str(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
