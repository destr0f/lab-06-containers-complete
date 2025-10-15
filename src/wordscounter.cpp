#include "../include/lab.hpp"

int wordsCounter(const string& str)
{
    int cnt=0;
    bool in=false;

    for (char ch : str)
    {
        bool sep = (ch == ' ' || ch == '.' || ch == ',');
        if (sep)
        {
            in=false;
        }
        else
        {
            if (!in) {++cnt; in=true;}
        }
    }
    return cnt;
}