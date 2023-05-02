/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebronzin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 08:37:24 by ebronzin          #+#    #+#             */
/*   Updated: 2023/05/02 12:40:15 by ebronzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"philo.h"



int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	if (argc == 4 || argc == 5)
	{
		while (j < argc)
		{
			if (!((argv[j][i] > 48 && argv[j][i] < 57) ||
						(argv[j][i] == 32)))
				write(1, "Gli argomenti devono essere numeri positivi", 43);
			j++;
		}
	}
	else
		write(1, "Errore nel numero argomenti", 27);
	philosopher();
}
