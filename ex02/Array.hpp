/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:19:45 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/03 10:13:52 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdexcept>

template< typename T >
class Array {
    public:
        Array(void) : _size(1), _array(new T[1]()) {
        }
        
        Array(unsigned int size) : _size(size), _array(new T[size]()) {
        }
        
        Array(const Array & other) : _size(other._size), _array(new T[other._size]) {
            for (unsigned int i = 0; i < _size; i++)
                _array[i] = other._array[i];
        }
        
        ~Array(void) {
            delete [] _array;
        }
        
        Array & operator=(const Array & other) {
            if (this != &other)
            {
                delete [] _array;
                _size = other._size;
                _array = new T[_size];
                for (unsigned int i = 0; i < _size; i++)
                    _array[i] = other._array[i];
            }
            return *this;
        }
        
        T & operator[](unsigned int index) {
            if (index >= _size)
                throw std::out_of_range("Index out of range");
            return _array[index];
        }

        unsigned int size(void) const {
            return _size;
        }

    private:
        unsigned int    _size;
        T*              _array;
};

template< typename T>
void print(const T & element) {
    std::cout << element << std::endl;
}

#endif