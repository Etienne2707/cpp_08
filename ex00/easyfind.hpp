#ifndef EASY_FIND_HPP
#define EASY_FIND_HPP

#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>       // std::vector


class NoFindInContainer : public  std::exception
{
   public :    
        virtual const char	*what() const throw()
        {
            return ("The was not find in the container !");
        }
};

template<typename T>
int easyfind(T & container, int value)
{
    std::vector<int>::iterator it;

    it = find(container.begin(),container.end(), value);
    try
    {
        if (it == container.end())
        {
            throw (NoFindInContainer());
        }
        else
            return (value);
    }
    catch(NoFindInContainer & e)
    {
        std::cerr << e.what() << '\n';
        return (-1);
    }
    
}

#endif