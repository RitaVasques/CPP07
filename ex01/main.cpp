/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ritavasques <ritavasques@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 18:09:10 by ritavasques       #+#    #+#             */
/*   Updated: 2025/03/31 19:17:18 by ritavasques      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
    int			num[4] = {42, 33, 17, 100};
    char		c[4] = "Hey";
    float		fnum[4] = {42.5f, 33.5f, 17.5f, 100.5f};
    std::string	str[2] = {"Hola", "42"};
	int len = 4;
	
	iter(num, len, print);
	std::cout << "----------------" << std::endl;
	iter(c, len - 1, print);
	std::cout << "----------------" << std::endl;
	iter(fnum, len, print);
	std::cout << "----------------" << std::endl;
	iter(str, 2, print);
	
	return 0;
}