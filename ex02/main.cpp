/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:19:32 by ritavasques       #+#    #+#             */
/*   Updated: 2025/04/02 14:14:33 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <cstdlib>

#define MAX_VAL 750


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
    
    try{
        //create array
        Array<int> num(4);
        //fill array
        num[0] = 1;
        num[1] = 2;
        num[2] = 3;
        num[3] = 4;
        for (unsigned int i = 0; i < num.size(); i++)
            std::cout << num[i] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    try{
        //create array
        Array<char> c(4);
        //fill array
        c[0] = 'A';
        c[1] = 'B';
        c[2] = 'C';
        c[3] = 'D';   
        //c[5] = 'C';
        for (unsigned int i = 0; i < c.size(); i++)
            std::cout << c[i] << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    
    return 0;
}


/*int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}*/