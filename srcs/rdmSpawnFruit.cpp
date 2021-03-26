/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rdmSpawnFruit.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 05:19:17 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/26 22:16:32 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	rdmSpawnFruit(snake player[MAX_SIZE], fruit &fruit)
{
	while (true)
	{
		fruit.setX(rand() % WIDTH);
		fruit.setY(rand() % HEIGHT);
		if (cellAvailable(player, fruit))
			return ;
	}
}
