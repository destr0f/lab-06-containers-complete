#include "../include/lab.hpp"

void reverseNum(list<int>& nums)
{
    for (auto it = nums.begin(); it != nums.end();)
    {
        it = nums.insert(it, -(*it));
        ++it;
        ++it;
    }
}

