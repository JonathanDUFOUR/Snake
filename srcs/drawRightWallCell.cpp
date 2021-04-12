/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawRightWallCell.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:22:32 by jodufour          #+#    #+#             */
/*   Updated: 2021/04/12 10:37:44 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	drawRightWallCell(void)
{
	attron(COLOR_PAIR(WALL));
	printw("# ");
	attroff(COLOR_PAIR(WALL));
}
