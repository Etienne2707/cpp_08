#include "span.hpp"

int main()
{
    srand (time(NULL));

    Span test(10);
    
    for (int i = 0; i != 11 ; i++)
    {
        int number = rand() % 100 + 1;
        test.addNumber(number);
    }
    test.shortestSpan();
}