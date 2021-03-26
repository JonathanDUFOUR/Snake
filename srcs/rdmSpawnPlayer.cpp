/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rdmSpawnPlayer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:56:53 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/26 22:29:34 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	rdmSpawnPlayer(snake player[MAX_SIZE])
{
	player[0].setAlive(true);
	player[0].setX(rand() % WIDTH);
	player[0].setY(rand() % HEIGHT);
}
