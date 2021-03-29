/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:45:02 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/29 18:28:07 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

int	main(void)
{
	bool						gameOver;
	int							score;
	snake						player[MAX_SIZE];
	fruit						fruit;
	e_directions				dir;
	int							ret;

	initscr();
	if (has_colors() == FALSE)
	{
		endwin();
		std::cout << "Your terminal does not support color" << std::endl;
		return (0);
	}
	setup(gameOver, dir, player, fruit, score);
	while (!gameOver && score < MAX_SIZE)
	{
		draw(player, fruit, score);
		ret = input(dir);
		if (ret == QUIT)
			break ;
		if (ret == PAUSE)
			pause();
		update(dir, gameOver, score, player, fruit);
		napms(420 / (score + 1));
		refresh();
	}
	endwin();
	return (SUCCESS);
}
