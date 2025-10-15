#include "../include/lab.hpp"

void plusesDeleter(vector<int>& v)
{
    v.erase(remove_if(v.begin(), v.end(), [](int x){ return x > 0; }), v.end());
}