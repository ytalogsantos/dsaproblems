#include <iostream>

int factorial(int num)
{
    if (num == 0) return 1;
    if (num < 0) throw std::invalid_argument("Negative numbers don't have defined factorial.");
    
    return  num * factorial(num - 1);
}

int main()
{
    std::cout << factorial(-5) << '\n';
    return 0;
}
