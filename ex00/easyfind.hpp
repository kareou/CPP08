/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 10:49:47 by mkhairou          #+#    #+#             */
/*   Updated: 2023/08/20 10:52:08 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
#include <exception>
#include <vector>

template <typename T>
void easyfind(T a, int b)
{
    typename T::iterator tmp;
    tmp = std::find(a.begin(), a.end(), b);
    if (tmp == a.end())
        throw std::out_of_range("there is no such element in the container");
    std::cout << "there is a " << b << " in the container" << std::endl;
}

#endif
