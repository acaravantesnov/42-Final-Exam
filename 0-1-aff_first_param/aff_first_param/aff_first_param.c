/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertocaravantes <albertocaravantes@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 23:45:10 by albertocara       #+#    #+#             */
/*   Updated: 2020/12/15 23:59:13 by albertocara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str);

int	main(int argc, char **argv)
{
	int i;
	if (argc > 1)
	{
		i = 0;
		while(i < ft_strlen(argv[1]))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		write(1, "\n", 1);
	}
	else
		write(1, "\n", 1);
	return (0);
}

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