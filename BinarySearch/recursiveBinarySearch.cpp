#include <iostream>
#include <vector>
#include <cmath>


template <typename T>
int binarySearch(std::vector<T> arr, T target, int start, int end)
{
    
    if (arr.size() == 0 || start > end) return -1;
    if (arr.size() == 1) {
        return arr.at(0) == target ? 0 : -1; 
    }
    
    if (start <= end)
    {
        int middle = floor(start + (end - start) / 2);
        if (arr.at(middle) == target) return middle;
        
        if (arr.at(middle) < target)
        {
            start = middle + 1;
        }
        else 
        {
            end = middle - 1;
        }
    }
    return binarySearch(arr, target, start, end);
    
}

template <typename T>

int binarySearch(std::vector<T> arr, T target)
{
    int start = 0;
    int end = arr.size() - 1;
    return binarySearch<T>(arr, target, start, end);

}

int main() 
{
    std::vector<int> nums = {2, 5, 8, 66};
    int result = binarySearch<int>(nums, 663);

    std::cout << "Result: " << result << '\n';
    return 0;
}
