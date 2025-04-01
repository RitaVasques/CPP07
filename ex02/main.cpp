/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rivasque <rivasque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:19:32 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/01 18:24:37 by rivasque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"



int main(void) {
    //Empty Array
    std::cout << "EMPTY ARRAY" << std::endl;
    Array<int> array;
    try {
        int *a = new int();
        std::cout << "*a: " << *a << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    //create array
    Array<int> num(4);
    //fill array
    num[0] = 1;
    num[1] = 2;
    num[2] = 3;
    num[3] = 4;
    Array<char> c(4);
    c[0] = 'A';
    c[1] = 'B';
    c[2] = 'C';
    c[3] = 'D';   
    try{
        for (unsigned int i = 0; i < num.size(); i++)
            std::cout << num[i] << std::endl;
        for (unsigned int i = 0; i < c.size(); i++)
            std::cout << c[i] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}