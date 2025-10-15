#include "../include/lab.hpp"

static bool is_sep_char(char ch) {
    return ch == ' ' || ch == ',' || ch == '.';
}

vector<string> uniqueWords(const string& str)
{
    vector<string> result;
    size_t i=0, n=str.size();

    while(i<n)
    {
        while(i<n && is_sep_char(str[i])) ++i;
        if (i >= n) break;

        string word;
        while(i<n && !is_sep_char(str[i]))
        {
            unsigned char ch = static_cast<unsigned char>(str[i]);
            word.push_back(static_cast<char>(tolower(ch)));
            ++i;
        }

        bool seen=false;
        for (const string& s : result)
        {
            if (s==word) {seen=true; break;}
        }
        if (!seen) result.push_back(word);
    }
    return result;
}