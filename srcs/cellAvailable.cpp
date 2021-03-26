/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cellAvailable.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 22:18:44 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/26 22:27:16 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

bool	cellAvailable(snake player[MAX_SIZE], fruit fruit)
{
	int	i;

	i = -1;
	while (player[++i].alive() && i < MAX_SIZE)
	{
		if (player[i].x() != fruit.x() || player[i].y() != fruit.y())
			return (true);
	}
	return (false);
}
