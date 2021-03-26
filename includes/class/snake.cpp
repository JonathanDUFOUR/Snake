/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 17:41:18 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/26 22:29:46 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "snake.hpp"

void	snake::setX(int n)
{
	m_x = n;
}

void	snake::setY(int n)
{
	m_y = n;
}

void	snake::setAlive(bool life)
{
	m_alive = life;
}
