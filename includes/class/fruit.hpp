/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fruit.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jodufour <jodufour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/26 20:00:43 by jodufour          #+#    #+#             */
/*   Updated: 2021/03/26 23:49:08 by jodufour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class fruit
{
private:
	int	m_x;
	int	m_y;
public:
	fruit() : m_x(2), m_y(2) {}
	fruit(int xyStart) : m_x(xyStart), m_y(xyStart) {}
	fruit(int xStart, int yStart) : m_x(xStart), m_y(yStart) {}

	inline int	x(void) const { return (this->m_x); }
	inline int	y(void) const { return (this->m_y); }

	void		setX(int n);
	void		setY(int n);
};
