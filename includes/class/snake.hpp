/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   snake.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 16:51:57 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/26 23:58:10 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class snake
{
private:
	bool	m_alive;
	int		m_x;
	int		m_y;
public:
	snake() : m_alive(false), m_x(-1), m_y(-1) {}
	snake(bool life, int xStart, int yStart) : m_alive(life), m_x(xStart), m_y(yStart) {}

	inline bool	alive(void) const { return (this->m_alive); }
	inline int	x(void) const { return (this->m_x); }
	inline int	y(void) const { return (this->m_y); }

	void		setX(int n);
	void		setY(int n);
	void		setAlive(bool life);
};
