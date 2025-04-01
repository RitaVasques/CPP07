/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:19:45 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/01 18:07:48 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template< typename T >
class Array {
    public:
        Array(void) {
            _size = 1;
            _array = new T[1];
            _array[0] = 0;
        }
        
        Array(unsigned int size) {
            _size = size;
            _array = new T[size];
        }
        
        Array(const Array & other) {
            _size = other._size;
            _array = new T[other._size];
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = other._array[i];
        }
        
        ~Array(void) {
            delete [] _array;
        }
        
        Array & operator=(const Array & other) {
            delete [] _array;
            _size = other._size;
            _array = new T[other._size];
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = other._array[i];
            return *this;
        }
        
        T & operator[](unsigned int index) {
            if (index >= _size)
                throw std::exception();
            else
                return _array[index];
        }

        unsigned int size(void) const {
            return _size;
        }

    private:
        T*              _array;
        unsigned int    _size;
};

template< typename T>
void print(T const & element) {
    std::cout << element << std::endl;
}

#endif