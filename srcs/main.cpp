/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 21:45:02 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/26 23:53:42 by jodufour         ###   ########.fr       */
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
	std::chrono::milliseconds	timespan(100);

	setup(gameOver, dir, player, fruit, score);
	while (!gameOver && score < MAX_SIZE)
	{
		draw(player, fruit, score);
		if (input(dir) == QUIT)
			break ;
		update(dir, gameOver, score, player, fruit);
		std::this_thread::sleep_for(timespan);
	}
	return (SUCCESS);
}
