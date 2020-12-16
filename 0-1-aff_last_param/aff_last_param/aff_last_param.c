/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertocaravantes <albertocaravantes@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 00:00:06 by albertocara       #+#    #+#             */
/*   Updated: 2020/12/16 00:28:26 by albertocara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while(str[i] != '\0')
	{
		i++;
		count++;
	}
	return (count);
}

int	main(int argc, char **argv)
{
	int i;

	i = 0;
	
	if(argc > 1)
	{
		while(i < ft_strlen(argv[argc - 1]))
		{
			write(1, &argv[ft_strlen(argv[argc - 1])][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}