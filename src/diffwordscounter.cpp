#include "../include/lab.hpp"

int diffWordsCounter(const string& str) {
    return static_cast<int>(uniqueWords(str).size());
}