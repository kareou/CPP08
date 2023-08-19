#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <exception>

template <typename T>
T easyfind(T a, int b)
{
    typename T::iterator tmp;
    tmp = std::find(a.begin(), a.end(), b);
    if (tmp == a.end())
        throw std::exception("Not found");
    return (tmp);
}

#endif