/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:19:32 by ritavasques       #+#    #+#             */
/*   Updated: 2025/03/31 20:38:01 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"



int main(void) {
    //Empty Array
    std::cout << "EMPTY ARRAY" << std::endl;
    Array<int> array;
    try {
        std::cout "array[0]: " << array[0] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    for (unsigned int i = 0; i < array.size(); i++)
        print(array[i]);
    
    Array<int> num(4);
    Array<char> c(4);
    try{
        for (unsigned int i = 0; i < num.size(); i++)
            std::cout << num[i] << std::endl;
        for (unsigned int i = 0; i < c.size(); i++)
            std::cout << c[i] << std::endl;
    }
    catch (std::exception &e)
        std::cout << e.what() << std::endl;
    
    return 0;
}