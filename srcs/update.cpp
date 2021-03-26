/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 05:02:17 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/27 00:05:11 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	update(	e_directions dir,
				bool &gameOver,
				int &score,
				snake player[MAX_SIZE],
				fruit &fruit)
{
	int	i;

	i = MAX_SIZE;
	while (--i)
	{
		if (player[i].alive())
		{
			player[i].setX(player[i - 1].x());
			player[i].setY(player[i - 1].y());
		}
	}
	switch (dir)
	{
		case UP:
			player[0].setY(player[0].y() - 1);
			break ;
		case DOWN:
			player[0].setY(player[0].y() + 1);
			break ;
		case RIGHT:
			player[0].setX(player[0].x() + 1);
			break ;
		case LEFT:
			player[0].setX(player[0].x() - 1);
			break ;
		case STOP:
			break ;
	}

	i = 0;
	if (player[0].x() < 0 || player[0].x() > (WIDTH - 1) ||
		player[0].y() < 0 || player[0].y() > (HEIGHT - 1))
	{
		gameOver = true;
		return ;
	}
	while (player[++i].alive())
	{
		if (player[0].x() == player[i].x() && player[0].y() == player[i].y())
		{	
			gameOver = true;
			return ;
		}
	}
	if (player[0].x() == fruit.x() && player[0].y() == fruit.y())
	{
		++score;
		rdmSpawnFruit(player, fruit);
		i = 0;
		while (player[++i].alive()) ;
		player[i].setAlive(true);
	}
}
