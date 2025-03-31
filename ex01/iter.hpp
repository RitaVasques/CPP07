/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:09:24 by ritavasques       #+#    #+#             */
/*   Updated: 2025/03/31 18:48:54 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template< typename T>
void iter(T *array, int len, void f(T const & element)) {
    for (int i = 0; i < len; i++)
        f(array[i]);
}

template< typename T>
void print(T const & element) {
    std::cout << element << std::endl;
}

#endif