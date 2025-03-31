/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:44:15 by ritavasques       #+#    #+#             */
/*   Updated: 2025/03/31 18:07:21 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template< typename T >
void swap(T & x, T & y) {
    T temp;

    temp = x;
    x = y;
    y = temp;
}

template< typename T >
T const & min(T const & a, T const & b) {
    if (a < b)
        return a;
    else
        return b;
}

template< typename T >
T const & max(T const & a, T const & b) {
    if (a > b)
        return a;
    else
        return b;
}

#endif