#include <iostream>
#include <vector>
#include <ranges>

int sum(std::vector<int> nums)
{
    if (nums.size() == 0) return 0;
    if (nums.size() == 1) return nums.at(0);
    // std::vector<int>::iterator it;
    // std::span<int> slice(nums.data() + 1, nums.size());
    std::vector<int> slice = nums | std::views::drop(1) | std::ranges::to<std::vector>();
    return nums.at(0) + sum(slice);
    
}


int main()
{
    std::vector<int> nums = { 1, 4, 6};
    int result = sum(nums);
    std::cout << "Result: " << result << '\n';
    return 0;
}
