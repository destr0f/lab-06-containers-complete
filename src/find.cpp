#include "../include/lab.hpp"

vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el)
{
    for (auto it = first; it != last; ++it)
    {
        if (*it == el) return it;
    }
    return last;
}