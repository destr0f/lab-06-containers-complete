#include "../include/lab.hpp"

void Sort(std::list<int>& nums)
{
    nums.sort(greater<int>());
}