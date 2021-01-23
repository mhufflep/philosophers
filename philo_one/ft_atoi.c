/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhufflep <mhufflep@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/23 03:29:26 by mhufflep          #+#    #+#             */
/*   Updated: 2021/01/23 03:29:37 by mhufflep         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_atoi(char *s, unsigned long long *number)
{
	*number = 0;
	while (s && (*s == ' ' || *s == '\n' || *s == '\t'
			 || *s == '\v' || *s == '\f' || *s == '\r'))
		s++;
	while (*s >= '0' && *s <= '9')
	{
		*number += *number * 10 + (*s - '0');
		s++;
	}
	return ((*s == '\0' && *(s - 1) >= '0' && *(s - 1) <= '9') ? 0 : -1);
}