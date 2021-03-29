/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 05:03:06 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/29 18:25:05 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	draw(snake player[MAX_SIZE], fruit fruit, int score)
{
	int		i;
	int		j;
	int		k;
	bool	printDone;

	move(0, 0);
	drawHorizontalWall();
	i = -1;
	while (++i < HEIGHT)
	{
		drawLeftWallCell();
		j = -1;
		while (++j < WIDTH)
		{
			printDone = false;
			k = -1;
			while (player[++k].alive() && k < MAX_SIZE)
			{
				if (i == player[k].y() && j == player[k].x())
				{
					drawSnakeCell();
					printDone = true;
					break ;
				}
			}
			if (!printDone)
			{
				if (i == fruit.y() && j == fruit.x())
					drawFruitCell();
				else
					drawEmptyCell();
			}
		}
		drawRightWallCell();
		if (i <= (HEIGHT / 2) && (i + 1) > (HEIGHT / 2))
			displayScore(score);
		printw("\n");
	}
	drawHorizontalWall();
}
