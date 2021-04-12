/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawHorizontalWall.cpp                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:08:25 by jodufour          #+#    #+#             */
/*   Updated: 2021/04/12 10:38:53 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	drawHorizontalWall(void)
{
	int	j;

	j = -1;
	while (++j < WIDTH + 2)
	{
		attron(COLOR_PAIR(WALL));
		printw("# ");
		attroff(COLOR_PAIR(WALL));
	}
	printw("\n");
}
