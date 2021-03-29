/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawHorizontalWall.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:08:25 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/29 18:11:53 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	drawHorizontalWall(void)
{
	int	j;

	j = -1;
	while (++j < WIDTH + 2)
	{
		if (j)
			printw(" ");
		attron(COLOR_PAIR(WALL));
		printw("#");
		attroff(COLOR_PAIR(WALL));
	}
	printw("\n");
}
