/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertocaravantes <albertocaravantes@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 00:42:39 by albertocara       #+#    #+#             */
/*   Updated: 2020/12/16 01:11:55 by albertocara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc,char *argv[])
{
	if(argc == 2)
	{
		int i;
		int j;
		int k;
		int cont;

		i = 0;
		j = 0;
		k = 65;
		while(argv[1][i] != '\0')
		{
			if ((argv[1][i] > 64) && (argv[1][i] < 91))
			{
				k = 65;
				cont = 0;
				while(k < 91)
				{
					if(argv[1][i] == k)
					{
						cont = k - 64;
						k = 91;
					}
					k++;
				}
			}

			else if ((argv[1][i] > 96) && (argv[1][i] < 123))
			{
				k = 97;
				cont = 0;
				while(k < 123)
				{
					if(argv[1][i] == k)
					{
						cont = k -96;
						k = 123;
					}
					k++;
				}
			}

			else
				cont = 1;
			
			j = 0;
			while(j < cont)
			{
				write(1, &argv[1][i], 1);
				j++;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}