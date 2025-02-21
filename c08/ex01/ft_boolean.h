/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrami <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 15:55:20 by hrami             #+#    #+#             */
/*   Updated: 2024/09/17 16:13:10 by hrami            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have an even number of arguments.\n"
# define ODD_MSG "I have an odd number of arguments.\n"
# define SUCCESS 0
# define EVEN maxiso9k

typedef int	t_bool;
void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);

static inline int	maxiso9k(int nbr)
{
	if (nbr % 2 == 0)
		return (1);
	return (0);
}
#endif
