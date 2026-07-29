#include <iostream>
#include <vector>


int removeElement(std::vector<int>& nums, int val) 
{
    if (nums.size() == 0) return 0;
    if (nums.size() == 1)
    {
        return nums.at(0) == val ? 0 : 1;
    }

    int i = 0;
    int j = nums.size() - 1;
    int k = 0;

    while (i <= j)
    {
        if (nums.at(i) != val) k++;
        if (i != j && nums.at(j) != val) k++;

        if (nums.at(i) == val && nums.at(j) != val)
        {
            nums.at(i) = nums.at(j);
            nums.at(j) = val;
        }

        i++;
        j--;
    }

    return k;
}

int main ()
{
    std::vector<int> nums = {0,1,2,2,3,0,4,2};
    int a = removeElement(nums, 3);

    std::cout << "Result: " << a << '\n';
}
