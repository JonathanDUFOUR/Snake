/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:37:26 by jodufour          #+#    #+#             */
/*   Updated: 2021/04/12 13:27:43 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <ncurses.h>
# include <string>
# include "class/snake.hpp"
# include "class/fruit.hpp"

# define WIDTH 60
# define HEIGHT 30

# define MAX_SIZE 2048

enum	e_std_fd
{
	STDIN,
	STDOUT,
	STDERR
};

enum	e_lements
{
	EMPTY = 1,
	SNAKE,
	WALL,
	FRUIT,
	GAMEOVER
};

enum	e_ret_codes
{
	SUCCESS,
	QUIT,
	PAUSE,
	CONTINUE
};

enum	e_directions
{
	STOP,
	RIGHT,
	LEFT,
	UP,
	DOWN
};

int		input(e_directions &dir);
void	setup(	bool &gameOver,
				e_directions &dir,
				snake player[MAX_SIZE],
				fruit &fruit,
				int &score);
void	pause(void);
void	draw(	snake player[MAX_SIZE],
				fruit fruit,
				int score);
void	drawHorizontalWall(void);
void	drawLeftWallCell(void);
void	drawSnakeCell(void);
void	drawFruitCell(void);
void	drawEmptyCell(void);
void	drawRightWallCell(void);
void	displayScore(int score);
void	update(	e_directions dir,
				bool &gameOver,
				int &score,
				snake player[MAX_SIZE],
				fruit &fruit);
void	rdmSpawnPlayer(snake player[MAX_SIZE]);
void	rdmSpawnFruit(snake player[MAX_SIZE], fruit &fruit);
void	printGameOver(void);
bool	cellAvailable(snake player[MAX_SIZE], fruit fruit);
