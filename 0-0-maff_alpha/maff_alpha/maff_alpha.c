/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertocaravantes <albertocaravantes@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 23:37:31 by albertocara       #+#    #+#             */
/*   Updated: 2020/12/15 23:44:40 by albertocara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	int i;

	i = 97;
	while(i < 123)
	{
		if(i % 2 != 0)
			write(1, &i, 1);
		else
		{
			i -= 32;
			write(1, &i, 1);
			i += 32;
		}
		i++;
	}
}