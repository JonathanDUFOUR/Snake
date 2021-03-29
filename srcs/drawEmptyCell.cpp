/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawEmptyCell.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:19:49 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/29 18:20:17 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	drawEmptyCell(void)
{
	attron(COLOR_PAIR(EMPTY));
	printw("  ");
	attroff(COLOR_PAIR(EMPTY));
}
