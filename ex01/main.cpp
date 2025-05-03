#include"Span.hpp"

int main()
{
    try
    {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
std::cout << "--------------------\n";

try
{
    Span sp2(100000);
    std::srand(std::time(0));
    std::vector<int> nbs;
    for (int i = 0; i < 10000; i++)
        nbs.push_back(std::rand()% 10000);
    sp2.add_numbers(nbs.begin(), nbs.end());
    std::cout << sp2.shortestSpan() << std::endl;
    std::cout << sp2.longestSpan() << std::endl;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}

return 0;
}