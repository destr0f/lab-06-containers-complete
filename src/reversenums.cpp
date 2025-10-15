#include "../include/lab.hpp"

void reverseNum(list<int>& nums)
{
    list<int> reversed;
    for (auto need : nums)
    {
        reversed.push_back(-need);
        reversed.push_back(need);
    }
    nums.swap(reversed);
}