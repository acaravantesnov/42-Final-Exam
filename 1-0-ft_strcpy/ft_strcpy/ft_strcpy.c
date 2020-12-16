/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albertocaravantes <albertocaravantes@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/16 00:33:22 by albertocara       #+#    #+#             */
/*   Updated: 2020/12/16 00:40:47 by albertocara      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strlen(char *str);

char    *ft_strcpy(char *s1, char *s2)
{
	int i;

	i = 0;

	while(s1[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int ft_strlen(char *str)
{
	int i;
	int cont;

	i = 0;
	cont = 0;
	while(str[i] != '\0')
	{
		i++;
		cont++;
	}
	return (cont);
}
