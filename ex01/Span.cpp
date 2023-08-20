/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkhairou <mkhairou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/20 11:02:31 by mkhairou          #+#    #+#             */
/*   Updated: 2023/08/20 11:02:32 by mkhairou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : size(0) {}

Span::Span(unsigned int N) : size(N)
{
}

Span::Span(Span const &copy)
{
    *this = copy;
}

Span &Span::operator=(Span const &copy)
{
    if (this != &copy)
    {
        this->size = copy.size;
        this->span = copy.span;
    }
    return (*this);
}

Span::~Span() {}

void Span::addNumber(int n)
{
    if (this->span.size() < this->size)
        this->span.push_back(n);
    else
        throw std::out_of_range("span is full");
}

int Span::longestSpan()
{
    if (this->span.size() < 2)
        throw std::out_of_range("span is too small");
    int max = *std::max_element(this->span.begin(), this->span.end());
    int min = *std::min_element(this->span.begin(), this->span.end());
    return (max - min);
}

int Span::shortestSpan()
{
    if (this->span.size() < 2)
        throw std::out_of_range("span is too small");
    std::vector<int> tmp = this->span;
    std::sort(tmp.begin(), tmp.end());
    std::vector<int>::iterator i;
    int shortdist = tmp.at(1) - tmp.at(0);
    for (i = tmp.begin() ; i != tmp.end(); ++i)
    {
        if (shortdist > *i - *(i - 1))
            shortdist = *i - *(i - 1);
    }
    return (shortdist);
}

void Span::addRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (this->span.size() + std::distance(begin, end) > this->size)
        throw std::out_of_range("span is full");
    this->span.insert(this->span.end(), begin, end);
}
