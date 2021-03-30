/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 05:03:56 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/30 11:54:12 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

int	input(e_directions &dir)
{
	int	ch;

	ch = getch();
	if (ch == 'w' || ch == '8')
	{
		if (dir == RIGHT || dir == LEFT || dir == STOP)
			dir = UP;
	}
	else if (ch == 's' || ch == '5')
	{
		if (dir == RIGHT || dir == LEFT || dir == STOP)
			dir = DOWN;
	}
	else if (ch == 'd' || ch == '6')
	{
		if (dir == UP || dir == DOWN || dir == STOP)
			dir = RIGHT;
	}
	else if (ch == 'a' || ch == '4')
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
