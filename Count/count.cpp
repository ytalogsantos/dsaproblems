#include <iostream>
#include <vector>
#include <ranges>
#include <string>

template <typename T>
int count(std::vector<T> items)
{
    
    typename std::vector<T>::iterator it = items.begin();
    if (it == items.end()) return 0;
    if (it == items.end() - 1) return 1;
    std::vector<T> slice(items.begin() + 1, items.end());
    return count(slice) + 1;
    
}


int main ()
{
    std::vector<int> nums = {1, 5};
    std::vector<std::string> fruits = {};
    int result = count<std::string>(fruits);
    std::cout << "Total: " << result << " items\n";
    return 0;
}
