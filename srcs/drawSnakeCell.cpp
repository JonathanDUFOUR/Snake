/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawSnakeCell.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:15:12 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/29 18:15:47 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	drawSnakeCell(void)
{
	attron(COLOR_PAIR(SNAKE));
	printw("O ");
	attroff(COLOR_PAIR(SNAKE));
}
