/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printGameOver.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:54:46 by jodufour          #+#    #+#             */
/*   Updated: 2021/04/12 23:45:24 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include "game.hpp"

void	printGameOver(void)
{
	attron(COLOR_PAIR(GAMEOVER));
	mvprintw((HEIGHT / 2) - 8, (WIDTH) - 22, "XXXXXX");
	mvprintw((HEIGHT / 2) - 7, (WIDTH) - 25, "XXXXXXXXXXXX");
	mvprintw((HEIGHT / 2) - 7, (WIDTH) - 4, "XXX");
	mvprintw((HEIGHT / 2) - 7, (WIDTH) + 7, "XXX");
	mvprintw((HEIGHT / 2) - 7, (WIDTH) + 14, "XXX");
	mvprintw((HEIGHT / 2) - 7, (WIDTH) + 19, "XXXXXXXXX");
	mvprintw((HEIGHT / 2) - 6, (WIDTH) - 27, "XXXX");
	mvprintw((HEIGHT / 2) - 6, (WIDTH) - 15, "XXX");
	mvprintw((HEIGHT / 2) - 6, (WIDTH) - 5, "XX");
	mvprintw((HEIGHT / 2) - 6, (WIDTH) - 2, "XX");
	mvprintw((HEIGHT / 2) - 6, (WIDTH) + 7, "XXXX");
	mvprintw((HEIGHT / 2) - 6, (WIDTH) + 13, "XXXX");
	mvprintw((HEIGHT / 2) - 6, (WIDTH) + 19, "XX");
	mvprintw((HEIGHT / 2) - 5, (WIDTH) - 27, "XXX");
	mvprintw((HEIGHT / 2) - 5, (WIDTH) - 6, "XX");
	mvprintw((HEIGHT / 2) - 5, (WIDTH) - 1, "XX");
	mvprintw((HEIGHT / 2) - 5, (WIDTH) + 7, "XX");
	mvprintw((HEIGHT / 2) - 5, (WIDTH) + 10, "XXXX");
	mvprintw((HEIGHT / 2) - 5, (WIDTH) + 15, "XX");
	mvprintw((HEIGHT / 2) - 5, (WIDTH) + 19, "XX");
	mvprintw((HEIGHT / 2) - 4, (WIDTH) - 27, "XXX");
	mvprintw((HEIGHT / 2) - 4, (WIDTH) - 17, "XXXX");
	mvprintw((HEIGHT / 2) - 4, (WIDTH) - 7, "XXXXXXXXX");
	mvprintw((HEIGHT / 2) - 4, (WIDTH) + 7, "XX");
	mvprintw((HEIGHT / 2) - 4, (WIDTH) + 11, "XX");
	mvprintw((HEIGHT / 2) - 4, (WIDTH) + 15, "XX");
	mvprintw((HEIGHT / 2) - 4, (WIDTH) + 19, "XXXXXX");
	mvprintw((HEIGHT / 2) - 3, (WIDTH) - 27, "XXXX");
	mvprintw((HEIGHT / 2) - 3, (WIDTH) - 15, "XXX");
	mvprintw((HEIGHT / 2) - 3, (WIDTH) - 8, "XX");
	mvprintw((HEIGHT / 2) - 3, (WIDTH) + 1, "XX");
	mvprintw((HEIGHT / 2) - 3, (WIDTH) + 7, "XX");
	mvprintw((HEIGHT / 2) - 3, (WIDTH) + 15, "XX");
	mvprintw((HEIGHT / 2) - 3, (WIDTH) + 19, "XX");
	mvprintw((HEIGHT / 2) - 2, (WIDTH) - 25, "XXXXXXXXXXXXX");
	mvprintw((HEIGHT / 2) - 2, (WIDTH) - 9, "XX");
	mvprintw((HEIGHT / 2) - 2, (WIDTH) + 2, "XX");
	mvprintw((HEIGHT / 2) - 2, (WIDTH) + 7, "XX");
	mvprintw((HEIGHT / 2) - 2, (WIDTH) + 15, "XX");
	mvprintw((HEIGHT / 2) - 2, (WIDTH) + 19, "XX");
	mvprintw((HEIGHT / 2) - 1, (WIDTH) - 22, "XXXXXX");
	mvprintw((HEIGHT / 2) - 1, (WIDTH) - 14, "XX");
	mvprintw((HEIGHT / 2) - 1, (WIDTH) - 10, "XX");
	mvprintw((HEIGHT / 2) - 1, (WIDTH) + 3, "XX");
	mvprintw((HEIGHT / 2) - 1, (WIDTH) + 7, "XX");
	mvprintw((HEIGHT / 2) - 1, (WIDTH) + 15, "XX");
	mvprintw((HEIGHT / 2) - 1, (WIDTH) + 19, "XXXXXXXXX");
	mvprintw((HEIGHT / 2) + 1, (WIDTH) - 24, "XXXXXXX");
	mvprintw((HEIGHT / 2) + 2, (WIDTH) - 26, "XXX");
	mvprintw((HEIGHT / 2) + 2, (WIDTH) - 18, "XXX");
	mvprintw((HEIGHT / 2) + 2, (WIDTH) - 11, "XX");
	mvprintw((HEIGHT / 2) + 2, (WIDTH) + 2, "XX");
	mvprintw((HEIGHT / 2) + 2, (WIDTH) + 6, "XXXXXXXXX");
	mvprintw((HEIGHT / 2) + 2, (WIDTH) + 17, "XXXXXXX");
	mvprintw((HEIGHT / 2) + 3, (WIDTH) - 27, "XX");
	mvprintw((HEIGHT / 2) + 3, (WIDTH) - 16, "XX");
	mvprintw((HEIGHT / 2) + 3, (WIDTH) - 10, "XX");
	mvprintw((HEIGHT / 2) + 3, (WIDTH) + 1, "XX");
	mvprintw((HEIGHT / 2) + 3, (WIDTH) + 6, "XX");
	mvprintw((HEIGHT / 2) + 3, (WIDTH) + 17, "XX");
	mvprintw((HEIGHT / 2) + 3, (WIDTH) + 23, "XXX");
	mvprintw((HEIGHT / 2) + 4, (WIDTH) - 28, "XX");
	mvprintw((HEIGHT / 2) + 4, (WIDTH) - 15, "XX");
	mvprintw((HEIGHT / 2) + 4, (WIDTH) - 9, "XX");
	mvprintw((HEIGHT / 2) + 4, (WIDTH), "XX");
	mvprintw((HEIGHT / 2) + 4, (WIDTH) + 6, "XX");
	mvprintw((HEIGHT / 2) + 4, (WIDTH) + 17, "XX");
	mvprintw((HEIGHT / 2) + 4, (WIDTH) + 23, "XXX");
	mvprintw((HEIGHT / 2) + 5, (WIDTH) - 28, "XX");
	mvprintw((HEIGHT / 2) + 5, (WIDTH) - 15, "XX");
	mvprintw((HEIGHT / 2) + 5, (WIDTH) - 8, "XX");
	mvprintw((HEIGHT / 2) + 5, (WIDTH) - 1, "XX");
	mvprintw((HEIGHT / 2) + 5, (WIDTH) + 6, "XXXXXX");
	mvprintw((HEIGHT / 2) + 5, (WIDTH) + 17, "XXXXXXX");
	mvprintw((HEIGHT / 2) + 6, (WIDTH) - 27, "XX");
	mvprintw((HEIGHT / 2) + 6, (WIDTH) - 16, "XX");
	mvprintw((HEIGHT / 2) + 6, (WIDTH) - 7, "XX");
	mvprintw((HEIGHT / 2) + 6, (WIDTH) - 2, "XX");
	mvprintw((HEIGHT / 2) + 6, (WIDTH) + 6, "XX");
	mvprintw((HEIGHT / 2) + 6, (WIDTH) + 17, "XX");
	mvprintw((HEIGHT / 2) + 6, (WIDTH) + 20, "XXX");
	mvprintw((HEIGHT / 2) + 7, (WIDTH) - 26, "XXX");
	mvprintw((HEIGHT / 2) + 7, (WIDTH) - 18, "XXX");
	mvprintw((HEIGHT / 2) + 7, (WIDTH) - 6, "XX");
	mvprintw((HEIGHT / 2) + 7, (WIDTH) - 3, "XX");
	mvprintw((HEIGHT / 2) + 7, (WIDTH) + 6, "XX");
	mvprintw((HEIGHT / 2) + 7, (WIDTH) + 17, "XX");
	mvprintw((HEIGHT / 2) + 7, (WIDTH) + 22, "XXX");
	mvprintw((HEIGHT / 2) + 8, (WIDTH) - 24, "XXXXXXX");
	mvprintw((HEIGHT / 2) + 8, (WIDTH) - 5, "XXX");
	mvprintw((HEIGHT / 2) + 8, (WIDTH) + 6, "XXXXXXXXX");
	mvprintw((HEIGHT / 2) + 8, (WIDTH) + 17, "XX");
	mvprintw((HEIGHT / 2) + 8, (WIDTH) + 24, "XXX");
	attroff(COLOR_PAIR(GAMEOVER));

	mvprintw((HEIGHT + 4), (WIDTH - 8), "Press Q to quit");

	while (1)
		if (getch() == 'q')
			break ;
}
