/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawLeftWallCell.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:12:50 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/29 18:13:51 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	drawLeftWallCell(void)
{
	attron(COLOR_PAIR(WALL));
		printw("# ");
	attroff(COLOR_PAIR(WALL));
}
