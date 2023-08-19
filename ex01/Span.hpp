#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>

class Span
{
private:
    int size;
    std::vector<int> span;
public:
    Span();
    Span(unsigned int N);
    Span(Span const &copy);
    Span &operator=(Span const &copy); 
    ~Span();
    void addNumber(int n);
    void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
    int shortestSpan();
    int longestSpan();
};


#endif