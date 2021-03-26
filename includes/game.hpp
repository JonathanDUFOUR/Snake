/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:37:26 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/26 23:53:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <chrono>
# include <thread>
# include "snake.hpp"
# include "fruit.hpp"

# define WIDTH 40
# define HEIGHT 40

# define MAX_SIZE 2048

enum	e_ret_codes
{
	SUCCESS,
	QUIT,
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
void	draw(	snake player[MAX_SIZE],
				fruit fruit,
				int score);
void	displayScore(int score);
void	update(	e_directions dir,
				bool &gameOver,
				int &score,
				snake player[MAX_SIZE],
				fruit &fruit);
void	rdmSpawnPlayer(snake player[MAX_SIZE]);
void	rdmSpawnFruit(snake player[MAX_SIZE], fruit &fruit);
bool	cellAvailable(snake player[MAX_SIZE], fruit fruit);
