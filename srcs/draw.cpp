/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 05:03:06 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/27 00:21:04 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	draw(snake player[MAX_SIZE], fruit fruit, int score)
{
	int		i;
	int		j;
	int		k;
	bool	printDone;

	std::cout << "\e[H";
	j = -1;
	while (++j < WIDTH + 2)
	{
		if (j)
			std::cout << ' ';
		std::cout << "\e[33m" << "#" << "\e[0m";
	}
	std::cout << std::endl;
	i = -1;
	while (++i < HEIGHT)
	{
		std::cout << "\e[33m" << "#" << "\e[0m" << " ";
		j = -1;
		while (++j < WIDTH)
		{
			printDone = false;
			k = -1;
			while (player[++k].alive() && k < MAX_SIZE)
			{
				if (i == player[k].y() && j == player[k].x())
				{
					std::cout << "\e[32m" << "O" << "\e[0m" << " ";
					printDone = true;
					break ;
				}
			}
			if (!printDone)
			{
				if (i == fruit.y() && j == fruit.x())
					std::cout << "\e[31m" << "F" << "\e[0m" << " ";
				else
					std::cout << "  ";
			}
		}
		std::cout << "\e[33m" << "#" << "\e[0m";
		if (i <= (HEIGHT / 2) && (i + 1) > (HEIGHT / 2))
			displayScore(score);
		std::cout << std::endl;
	}
	j = -1;
	while (++j < WIDTH + 2)
	{
		if (j)
			std::cout << ' ';
		std::cout << "\e[33m" << "#" << "\e[0m";
	}
	std::cout << std::endl;
}
