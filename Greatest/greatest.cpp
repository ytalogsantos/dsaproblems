#include <iostream>
#include <vector>
#include <ranges>


int getGreatest(std::vector<int> nums)
{
    
    std::vector<int>::iterator it;
    it = nums.begin();
    if (it == nums.end()) return 0;

    int greatest = nums.at(0);
    
    std::vector<int> slice = nums | std::views::drop(1) | std::ranges::to<std::vector<int>>();
    int next = getGreatest(slice);

    if (next > greatest) {
        greatest = next;
    }
    
    return greatest;

}


int main()
{
    
    std::vector<int> nums = {2, 3, -4, 1999};
    int greatest = getGreatest(nums);
    
    std::cout << "Result: " << greatest << '\n';

    return 0;
}
