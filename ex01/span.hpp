#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>     // std::cout
#include <algorithm>    // std::find
#include <vector>       // std::vector

const std::string red("\033[0;31m");
const std::string green("\033[1;32m");
const std::string yellow("\033[1;33m");
const std::string cyan("\033[0;36m");
const std::string magenta("\033[0;35m");
const std::string reset("\033[0m");


class Span
{
private:
    unsigned int _size_max;
    std::vector<int> _span;
    unsigned int _index; 

public:
    //constructor & destructor 
    Span(/* args */);
    Span(unsigned int size);
    ~Span();

    //function
    void addNumber(int number);
    int shortestSpan( void );
    int longestSpan( void );

    class NoDistanceBeCalculate : public std::exception
    {
        public : 
            NoDistanceBeCalculate() throw() {};
            virtual const char * what() const throw();
            virtual ~NoDistanceBeCalculate() throw() {};
    };

    class SizeMaxSpanReach : public std::exception
    {
        public :
            SizeMaxSpanReach() throw() {};
            virtual const char* what() const throw();
            virtual ~SizeMaxSpanReach() throw(){};
    };

};
#endif