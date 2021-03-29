/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 05:05:53 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/29 17:54:26 by jodufour         ###   ########.fr       */
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
	start_color();
	init_pair(SNAKE, COLOR_GREEN, COLOR_BLACK);
	init_pair(WALL, COLOR_YELLOW, COLOR_BLACK);
	init_pair(FRUIT, COLOR_RED, COLOR_BLACK);
	init_pair(EMPTY, COLOR_BLACK, COLOR_BLACK);
	curs_set(0);
	cbreak();
	noecho();
	scrollok(stdscr, TRUE);
	nodelay(stdscr, TRUE);
}
