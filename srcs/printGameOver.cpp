/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printGameOver.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 10:54:46 by jodufour          #+#    #+#             */
/*   Updated: 2021/04/12 13:27:03 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ncurses.h>
#include "game.hpp"

void	printGameOver(void)
{
	attron(COLOR_PAIR(GAMEOVER));
	move((HEIGHT / 2) - 10 + 2, (WIDTH) - 33 + 11);
	printw("XXXXXX");
	move((HEIGHT / 2) - 10 + 3, (WIDTH) - 33 + 8);
	printw("XXXXXXXXXXXX");
	move((HEIGHT / 2) - 10 + 3, (WIDTH) - 33 + 29);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 3, (WIDTH) - 33 + 40);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 3, (WIDTH) - 33 + 47);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 3, (WIDTH) - 33 + 52);
	printw("XXXXXXXXX");
	move((HEIGHT / 2) - 10 + 4, (WIDTH) - 33 + 6);
	printw("XXXX");
	move((HEIGHT / 2) - 10 + 4, (WIDTH) - 33 + 18);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 4, (WIDTH) - 33 + 28);
	printw("XX");
	move((HEIGHT / 2) - 10 + 4, (WIDTH) - 33 + 31);
	printw("XX");
	move((HEIGHT / 2) - 10 + 4, (WIDTH) - 33 + 40);
	printw("XXXX");
	move((HEIGHT / 2) - 10 + 4, (WIDTH) - 33 + 46);
	printw("XXXX");
	move((HEIGHT / 2) - 10 + 4, (WIDTH) - 33 + 52);
	printw("XX");
	move((HEIGHT / 2) - 10 + 5, (WIDTH) - 33 + 6);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 5, (WIDTH) - 33 + 27);
	printw("XX");
	move((HEIGHT / 2) - 10 + 5, (WIDTH) - 33 + 32);
	printw("XX");
	move((HEIGHT / 2) - 10 + 5, (WIDTH) - 33 + 40);
	printw("XX");
	move((HEIGHT / 2) - 10 + 5, (WIDTH) - 33 + 43);
	printw("XXXX");
	move((HEIGHT / 2) - 10 + 5, (WIDTH) - 33 + 48);
	printw("XX");
	move((HEIGHT / 2) - 10 + 5, (WIDTH) - 33 + 52);
	printw("XX");
	move((HEIGHT / 2) - 10 + 6, (WIDTH) - 33 + 6);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 6, (WIDTH) - 33 + 16);
	printw("XXXX");
	move((HEIGHT / 2) - 10 + 6, (WIDTH) - 33 + 26);
	printw("XXXXXXXXX");
	move((HEIGHT / 2) - 10 + 6, (WIDTH) - 33 + 40);
	printw("XX");
	move((HEIGHT / 2) - 10 + 6, (WIDTH) - 33 + 44);
	printw("XX");
	move((HEIGHT / 2) - 10 + 6, (WIDTH) - 33 + 48);
	printw("XX");
	move((HEIGHT / 2) - 10 + 6, (WIDTH) - 33 + 52);
	printw("XXXXXX");
	move((HEIGHT / 2) - 10 + 7, (WIDTH) - 33 + 6);
	printw("XXXX");
	move((HEIGHT / 2) - 10 + 7, (WIDTH) - 33 + 18);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 7, (WIDTH) - 33 + 25);
	printw("XX");
	move((HEIGHT / 2) - 10 + 7, (WIDTH) - 33 + 34);
	printw("XX");
	move((HEIGHT / 2) - 10 + 7, (WIDTH) - 33 + 40);
	printw("XX");
	move((HEIGHT / 2) - 10 + 7, (WIDTH) - 33 + 48);
	printw("XX");
	move((HEIGHT / 2) - 10 + 7, (WIDTH) - 33 + 52);
	printw("XX");
	move((HEIGHT / 2) - 10 + 8, (WIDTH) - 33 + 8);
	printw("XXXXXXXXXXXXX");
	move((HEIGHT / 2) - 10 + 8, (WIDTH) - 33 + 24);
	printw("XX");
	move((HEIGHT / 2) - 10 + 8, (WIDTH) - 33 + 35);
	printw("XX");
	move((HEIGHT / 2) - 10 + 8, (WIDTH) - 33 + 40);
	printw("XX");
	move((HEIGHT / 2) - 10 + 8, (WIDTH) - 33 + 48);
	printw("XX");
	move((HEIGHT / 2) - 10 + 8, (WIDTH) - 33 + 52);
	printw("XX");
	move((HEIGHT / 2) - 10 + 9, (WIDTH) - 33 + 11);
	printw("XXXXXX");
	move((HEIGHT / 2) - 10 + 9, (WIDTH) - 33 + 19);
	printw("XX");
	move((HEIGHT / 2) - 10 + 9, (WIDTH) - 33 + 23);
	printw("XX");
	move((HEIGHT / 2) - 10 + 9, (WIDTH) - 33 + 36);
	printw("XX");
	move((HEIGHT / 2) - 10 + 9, (WIDTH) - 33 + 40);
	printw("XX");
	move((HEIGHT / 2) - 10 + 9, (WIDTH) - 33 + 48);
	printw("XX");
	move((HEIGHT / 2) - 10 + 9, (WIDTH) - 33 + 52);
	printw("XXXXXXXXX");
	move((HEIGHT / 2) - 10 + 11, (WIDTH) - 33 + 9);
	printw("XXXXXXX");
	move((HEIGHT / 2) - 10 + 12, (WIDTH) - 33 + 7);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 12, (WIDTH) - 33 + 15);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 12, (WIDTH) - 33 + 22);
	printw("XX");
	move((HEIGHT / 2) - 10 + 12, (WIDTH) - 33 + 35);
	printw("XX");
	move((HEIGHT / 2) - 10 + 12, (WIDTH) - 33 + 39);
	printw("XXXXXXXXX");
	move((HEIGHT / 2) - 10 + 12, (WIDTH) - 33 + 50);
	printw("XXXXXXX");
	move((HEIGHT / 2) - 10 + 13, (WIDTH) - 33 + 6);
	printw("XX");
	move((HEIGHT / 2) - 10 + 13, (WIDTH) - 33 + 17);
	printw("XX");
	move((HEIGHT / 2) - 10 + 13, (WIDTH) - 33 + 23);
	printw("XX");
	move((HEIGHT / 2) - 10 + 13, (WIDTH) - 33 + 34);
	printw("XX");
	move((HEIGHT / 2) - 10 + 13, (WIDTH) - 33 + 39);
	printw("XX");
	move((HEIGHT / 2) - 10 + 13, (WIDTH) - 33 + 50);
	printw("XX");
	move((HEIGHT / 2) - 10 + 13, (WIDTH) - 33 + 56);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 14, (WIDTH) - 33 + 5);
	printw("XX");
	move((HEIGHT / 2) - 10 + 14, (WIDTH) - 33 + 18);
	printw("XX");
	move((HEIGHT / 2) - 10 + 14, (WIDTH) - 33 + 24);
	printw("XX");
	move((HEIGHT / 2) - 10 + 14, (WIDTH) - 33 + 33);
	printw("XX");
	move((HEIGHT / 2) - 10 + 14, (WIDTH) - 33 + 39);
	printw("XX");
	move((HEIGHT / 2) - 10 + 14, (WIDTH) - 33 + 50);
	printw("XX");
	move((HEIGHT / 2) - 10 + 14, (WIDTH) - 33 + 56);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 15, (WIDTH) - 33 + 5);
	printw("XX");
	move((HEIGHT / 2) - 10 + 15, (WIDTH) - 33 + 18);
	printw("XX");
	move((HEIGHT / 2) - 10 + 15, (WIDTH) - 33 + 25);
	printw("XX");
	move((HEIGHT / 2) - 10 + 15, (WIDTH) - 33 + 32);
	printw("XX");
	move((HEIGHT / 2) - 10 + 15, (WIDTH) - 33 + 39);
	printw("XXXXXX");
	move((HEIGHT / 2) - 10 + 15, (WIDTH) - 33 + 50);
	printw("XXXXXXX");
	move((HEIGHT / 2) - 10 + 16, (WIDTH) - 33 + 6);
	printw("XX");
	move((HEIGHT / 2) - 10 + 16, (WIDTH) - 33 + 17);
	printw("XX");
	move((HEIGHT / 2) - 10 + 16, (WIDTH) - 33 + 26);
	printw("XX");
	move((HEIGHT / 2) - 10 + 16, (WIDTH) - 33 + 31);
	printw("XX");
	move((HEIGHT / 2) - 10 + 16, (WIDTH) - 33 + 39);
	printw("XX");
	move((HEIGHT / 2) - 10 + 16, (WIDTH) - 33 + 50);
	printw("XX");
	move((HEIGHT / 2) - 10 + 16, (WIDTH) - 33 + 53);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 17, (WIDTH) - 33 + 7);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 17, (WIDTH) - 33 + 15);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 17, (WIDTH) - 33 + 27);
	printw("XX");
	move((HEIGHT / 2) - 10 + 17, (WIDTH) - 33 + 30);
	printw("XX");
	move((HEIGHT / 2) - 10 + 17, (WIDTH) - 33 + 39);
	printw("XX");
	move((HEIGHT / 2) - 10 + 17, (WIDTH) - 33 + 50);
	printw("XX");
	move((HEIGHT / 2) - 10 + 17, (WIDTH) - 33 + 55);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 18, (WIDTH) - 33 + 9);
	printw("XXXXXXX");
	move((HEIGHT / 2) - 10 + 18, (WIDTH) - 33 + 28);
	printw("XXX");
	move((HEIGHT / 2) - 10 + 18, (WIDTH) - 33 + 39);
	printw("XXXXXXXXX");
	move((HEIGHT / 2) - 10 + 18, (WIDTH) - 33 + 50);
	printw("XX");
	move((HEIGHT / 2) - 10 + 18, (WIDTH) - 33 + 57);
	printw("XXX");
	attroff(COLOR_PAIR(GAMEOVER));

	move((HEIGHT + 4), (WIDTH - 8));
	printw("Press Q to quit");

	while (1)
		if (getch() == 'q')
			break ;
}
