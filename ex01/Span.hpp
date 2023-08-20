/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:02:35 by mkhairou          #+#    #+#             */
/*   Updated: 2023/08/20 11:02:36 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>

class Span
{
private:
    uint32_t size;
    std::vector<int> span;
public:
    Span();
    Span(unsigned int N);
    Span(Span const &copy);
    Span &operator=(Span const &copy);
    ~Span();
    void addNumber(int n);
    void addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();
};


#endif
