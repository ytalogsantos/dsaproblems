#include <iostream>
#include <vector>
#include <cmath>

int binarySearch(std::vector<int> nums, int target)
{
    if (nums.size() < 1) return -1;
    if (nums.size() == 1)
    {
        if (nums.at(0) == target) return 0;
        return -1;
    }

    int start = 0;
    int end = nums.size() - 1;

    while (start <= end)
    {
        int middle = floor(start + (end - start) / 2);
        
        if (nums.at(middle) == target) return middle;

        if (nums.at(middle) > target) 
        {
            end = middle - 1;
        }
        else
        {
            start = middle + 1;
        }
    }
    return -1;
}
