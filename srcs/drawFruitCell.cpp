/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   drawFruitCell.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/29 18:18:04 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/29 18:18:36 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	drawFruitCell(void)
{
	attron(COLOR_PAIR(FRUIT));
	printw("F ");
	attroff(COLOR_PAIR(FRUIT));
}
