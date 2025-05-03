#ifndef SPAN_HPP
#define SPAN_HPP

#include<iostream>
#include<vector>
#include<algorithm>
#include<limits>
#include<ctime>
#include<cstdlib>

class Span
{
    private:
        unsigned int N;
        std::vector<int> V;
    public:
        Span();
        Span(unsigned int n);
        Span(const Span &other);
        Span& operator=(const Span&other);
        ~Span();
        void addNumber(int nb);
        int shortestSpan();
        int longestSpan();
        void add_numbers(std::vector<int>::iterator first, std::vector<int>::iterator last);
        class FullContainer : public std::exception
        {
            public:
                const char* what() const throw();  
        };
        class InsufficientNumbers : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

#endif
