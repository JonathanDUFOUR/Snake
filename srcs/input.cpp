/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 05:03:56 by jodufour          #+#    #+#             */
/*   Updated: 2021/04/12 10:32:36 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

int	input(e_directions &dir)
{
	int	ch;

	ch = getch();
	if (ch == KEY_UP)
	{
		if (dir == RIGHT || dir == LEFT || dir == STOP)
			dir = UP;
	}
	else if (ch == KEY_DOWN)
	{
		if (dir == RIGHT || dir == LEFT || dir == STOP)
			dir = DOWN;
	}
	else if (ch == KEY_RIGHT)
	{
		if (dir == UP || dir == DOWN || dir == STOP)
			dir = RIGHT;
	}
	else if (ch == KEY_LEFT)
	{
		if (dir == UP || dir == DOWN || dir == STOP)
			dir = LEFT;
	}
	else if (ch == 'p')
		return (PAUSE);
	else if (ch == 'q')
		return (QUIT);
	return (CONTINUE);
}
