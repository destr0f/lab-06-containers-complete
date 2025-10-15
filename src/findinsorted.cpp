#include "../include/lab.hpp"

vector<int>::iterator findInSorted(vector<int>::iterator first, vector<int>::iterator last, int el)
{
    while (first != last && *first < el) ++first;
    return (first != last && *first == el) ? first : last;
}