#ifndef LAB06CONTAINERS_LAB_HPP
#define LAB06CONTAINERS_LAB_HPP

#include <vector>
#include <string>
#include <map>
#include <list>
using namespace std;

// TASK #1
vector<int>::iterator Find(vector<int>::iterator first, vector<int>::iterator last, int el);
// TASK #2
vector<int>::iterator findInSorted(vector<int>::iterator first, vector<int>::iterator last, int el);
// TASK #3
int wordsCounter(const string& str);
// TASK #4
map<string, int> wordsMapCounter(const string& str);
// TASK #5
vector<string> uniqueWords(const string& str);
// TASK #6
int diffWordsCounter(const string& str);
// TASK #7
void reverseNum(list<int>& nums);
// TASK #8
void plusesDeleter(vector<int>& v);
// TASK #9
void Sort(std::list<int>& nums);

#endif //LAB06CONTAINERS_LAB_HPP