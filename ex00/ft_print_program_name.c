/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: simon.lau <simon.lau@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 16:16:31 by simon.lau         #+#    #+#             */
/*   Updated: 2026/07/10 16:21:17 by simon.lau        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	char	*letter_ptr;

	if (argc < 1)
	{
		return (-9);
	}
	letter_ptr = argv[0];
	while (*letter_ptr != '\0')
	{
		write(1, letter_ptr, 1);
		letter_ptr++;
	}
	write(1, "\n", 1);
}
