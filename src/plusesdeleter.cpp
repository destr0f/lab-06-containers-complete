#include "../include/lab.hpp"

void plusesDeleter(vector<int>& v)
{
    size_t write = 0;
    for (auto read = 0; read<v.size(); ++read)
    {
        if (v[read]<=0)
        {
            v[write++] = v[read];
        }
    }
    v.resize(write);
}