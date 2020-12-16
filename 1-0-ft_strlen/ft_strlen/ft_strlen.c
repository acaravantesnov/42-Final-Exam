/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertocaravantes <albertocaravantes@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 00:41:05 by albertocara       #+#    #+#             */
/*   Updated: 2020/12/16 00:42:06 by albertocara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str)
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