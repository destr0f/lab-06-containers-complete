#include "../include/lab.hpp"

void Sort(std::list<int>& nums)
{
    if (nums.size() < 2) return;

    bool sorted;
    do
    {
        sorted = false;

        auto it = nums.begin();
        while (it != nums.end())
        {
            auto next = it;
            ++next;
            if (next == nums.end()) break;

            if (*it < *next)
            {
                iter_swap(next, it);
                sorted = true;
            }
            ++it;
        }
    } while (sorted);
}