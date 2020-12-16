/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertocaravantes <albertocaravantes@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 01:13:06 by albertocara       #+#    #+#             */
/*   Updated: 2020/12/16 01:25:19 by albertocara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 4)
	{
		char *a = argv[2];
		char *b = argv[3];
		int i;

		i = 0;
		if ((argv[2][1] != '\0') || (argv[3][1] != '\0'))
		{
			write(1, "\n", 1);
			return (0);
		}
		else
		{
			while(argv[1][i] != '\0')
			{
				if(argv[1][i] == *a)
				{
					argv[1][i] = *b;
				}
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
	return (0);
}