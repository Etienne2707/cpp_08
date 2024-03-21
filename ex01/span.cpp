#include "span.hpp"

Span::Span()
{
    std::cout << yellow << "Default constructor call" << std::endl;
}

Span::Span(unsigned int size) : _size_max(size), _index(0)
{
    std::cout << yellow << "Parametric constructor call" << std::endl;
}

void    Span::addNumber(int number)
{
    try
    {
        if (this->_index == this->_size_max)
        {
            throw (Span::SizeMaxSpanReach());
        }
        this->_span.push_back(number);
        std::cout << green << "the number :" << number << " has been added to _span at index " << this->_index << reset << std::endl;
        this->_index++;
    }
    catch(Span::SizeMaxSpanReach& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}

int Span::shortestSpan(void)
{
    
    std::sort (this->_span.begin(), this->_span.end());
    std::vector<int>::iterator it;
    it = this->_span.begin();
    std::cout << *it << std::endl;
    it = this->_span.end() - 1;
    std::cout << *it << std::endl;
    return (1);
}

const char* Span::SizeMaxSpanReach::what() const throw()
{
    return ("The Size Max of the Span has been aldready reach you can't add another number !");
}

const  char * Span::NoDistanceBeCalculate::what() const throw ()
{
    return ("You need to have a minimum of 2 interger to calculate a distance");
}
Span::~Span()
{
    std::cout << yellow << "default destructor call" << std::endl;
}
