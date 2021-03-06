/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   displayScore.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 05:34:13 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/29 15:57:40 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.hpp"

void	displayScore(int score)
{
	std::string	score_s(std::to_string(score));

	printw("       score: ");
	printw(score_s.c_str());
	printw("    ");
}
