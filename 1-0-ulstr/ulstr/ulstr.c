/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertocaravantes <albertocaravantes@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 01:26:34 by albertocara       #+#    #+#             */
/*   Updated: 2020/12/16 01:32:53 by albertocara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		int i;

		i = 0;
		while(argv[1][i] != '\0')
		{
			if((argv[1][i] > 64) && (argv[1][i] < 91))
			{
				argv[1][i] += 32;
				write(1, &argv[1][i], 1);
			}
			else if((argv[1][i] > 96) && (argv[1][i] < 123))
			{
				argv[1][i] -= 32;
				write(1, &argv[1][i], 1);
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}