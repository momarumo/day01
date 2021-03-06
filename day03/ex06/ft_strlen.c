/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momarumo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:15:04 by momarumo          #+#    #+#             */
/*   Updated: 2020/07/16 15:05:37 by momarumo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
int	ft_strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		ft_putchar(str[len++]);
	}
	return(len);
}

