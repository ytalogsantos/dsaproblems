#include <iostream>
#include <vector>
#include <cmath>

int missingNumber(std::vector<int> nums)
{
    auto vectorSize = nums.size();
    int missing = 0;

    std::cout << "First loop\n";

    for (int i = 1; i <= vectorSize; i++)
    {
        missing = missing ^ i;
        std::cout << "I: " << i << ", Value: " << missing << "\n";
    }

    std::cout << "Second loop\n";

    for (int i = 0; i < vectorSize; i++)
    {
        missing = missing ^ nums.at(i);
        std::cout << "I: " << i << ", Value: " << missing << "\n";
    }

    return missing;
}

int main()
{
    std::vector<int> nums = {3, 0, 1};
    missingNumber(nums);
    return 0;
}












