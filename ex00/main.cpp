#include"easyfind.hpp"

int main()
{
    std::vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(2);
    v.push_back(2);
    v.push_back(9);
    int oc = easyfind(v, 2);
    if (oc == -1)
        std::cout << "Element not found!" << std::endl;
    else
        std::cout << "Element found in " << oc << std::endl;
}
