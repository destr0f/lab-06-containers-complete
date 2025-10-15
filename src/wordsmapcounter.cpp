#include "../include/lab.hpp"
#include "sstream"

map<string, int> wordsMapCounter(const string& str)
{
    string cleaned = str;
    for (char& c : cleaned)
    {
        if (c == ',' || c == '.') c = ' ';
    }

    map<string, int> wordsMap;
    istringstream in(cleaned);
    string word;
    while (in >> word) {
        wordsMap[word]++;
    }
    return wordsMap;
}