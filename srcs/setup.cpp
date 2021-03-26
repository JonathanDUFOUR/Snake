/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 05:05:53 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/26 22:28:35 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	setup(	bool &gameOver,
				e_directions &dir,
				snake player[MAX_SIZE],
				fruit &fruit,
				int &score)
{
	gameOver = false;
	dir = STOP;
	rdmSpawnPlayer(player);
	rdmSpawnFruit(player, fruit);
	score = 0;
}
