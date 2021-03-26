/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 05:03:56 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/27 00:26:32 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <conio.h>
#include "game.hpp"

int	input(e_directions &dir)
{
	if (_kbhit())
	{
		if (getch() == 'q')
			return (QUIT);
		getch();
		switch (getch())
		{
			case 'A':
				if (dir == RIGHT || dir == LEFT || dir == STOP)
					dir = UP;
				break ;
			case 'B':
				if (dir == RIGHT || dir == LEFT || dir == STOP)
					dir = DOWN;
				break ;
			case 'C':
				if (dir == UP || dir == DOWN || dir == STOP)
					dir = RIGHT;
				break ;
			case 'D':
				if (dir == UP || dir == DOWN || dir == STOP)
					dir = LEFT;
				break ;
		}
	}
	return (CONTINUE);
}
