#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include<iostream>
#include<vector>
#include<algorithm>

template<typename T>

int easyfind(T& cont, int n)
{
    typename T::iterator it = std::find(cont.begin(), cont.end(), n);
    if(it != cont.end())
        return(distance(cont.begin(), it));
    return(-1);
}

#endif
