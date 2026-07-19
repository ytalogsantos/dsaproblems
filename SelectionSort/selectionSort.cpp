#include <iostream>
#include <vector>


int findSmallestNumber(std::vector<int> nums)
{
    int smallest = nums.at(0);
    int smallestIndex = 0;

    for (int i = 0; i < nums.size(); ++i)
    {
        if (nums.at(i) < smallest)
        {
            smallest = nums.at(i);
            smallestIndex = i;
        }
    }
    return smallestIndex;
}


std::vector<int> selectionSort(std::vector<int> nums)
{
    std::vector<int> sortedNums;
    std::vector<int>::iterator it;

    for (int i = 0; i < nums.size(); ++it)
    {
        int smallestNumberIndex = findSmallestNumber(nums);
        sortedNums.push_back(*(nums.begin() + smallestNumberIndex));
        nums.erase(nums.begin() + smallestNumberIndex);
    }
    return sortedNums;
}


int main()
{
    std::vector<int> nums = { 1, 9, 1242, 5, 0 };
    std::vector sortedNums = selectionSort(nums);
    std::vector<int>::iterator it;

    for (it = sortedNums.begin(); it != sortedNums.end(); ++it)
    {
        std::cout << *it << '\n';
    }
    return 0;
}
