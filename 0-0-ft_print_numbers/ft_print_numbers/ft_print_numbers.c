/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertocaravantes <albertocaravantes@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 23:33:09 by albertocara       #+#    #+#             */
/*   Updated: 2020/12/15 23:35:29 by albertocara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_print_numbers(void)
{
	int i = 57;
	while(i > 47)
	{
		write(1, &i, 1);
		i--;
	}
}
