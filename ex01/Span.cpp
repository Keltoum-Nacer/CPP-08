#include"Span.hpp"

Span::Span():N(0) {}

Span::Span(unsigned int n)
{
    N = n;
}

Span::Span(const Span &other)
{
    N = other.N;
    V = other.V;
}

Span& Span::operator=(const Span &other)
{
    if (this != &other)
    {
        N = other.N;
        V = other.V;
    }
    return(*this);
}

Span::~Span() {}

const char* Span::FullContainer::what()const throw()
{
    return("Error, the Container is full!");
}

const char* Span::InsufficientNumbers::what()const throw()
{
    return("Error, no span can be found!");
}

void Span::addNumber(int nb)
{
    if (V.size() != N)
        V.push_back(nb);
    else
        throw FullContainer();
}

int Span::longestSpan()
{
    if (V.size() < 2)
        throw InsufficientNumbers();
    else
    {
        int max_dis;
        max_dis = *max_element(V.begin(), V.end()) - *min_element(V.begin(), V.end());
        return(max_dis);
    }
    return(0);
}

int Span::shortestSpan()
{
    if (V.size() < 2)
        throw InsufficientNumbers();
    else
    {
        int min_dis = std::numeric_limits<int>::max();
        int dis;
        sort(V.begin(), V.end());
        for(unsigned int i = 0; i < V.size() - 1; i++)
        {
            dis = V.at(i + 1) - V.at(i);
            if (dis < min_dis)
                min_dis = dis;
        }
        return(min_dis);
    }
    return(0);
}

void Span::add_numbers(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
    if (V.size() + distance(first, last) >= N)
        throw FullContainer();
    V.insert(V.end(), first, last);
}

