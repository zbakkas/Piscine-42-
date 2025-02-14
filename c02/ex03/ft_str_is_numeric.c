/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zbakkas <zbakkas@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 18:51:28 by zbakkas           #+#    #+#             */
/*   Updated: 2023/09/03 12:43:01 by zbakkas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (str[a] != '\0')
	{
		if ((str[a] < 48 && str[a] < 57) 
			|| (str[a] > 48 && str[a] > 57))
		{
			b = 0;
			break ;
		}
		a++;
	}
	return (b);
}
