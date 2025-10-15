#include "include/lab.hpp"
#include "iostream"

int main()
{
    string s = "can you can, can you. can";
    cout<<'"'<<s<<'"'<<endl;
    cout<<"wordsCounter: "<<wordsCounter(s) << "\n";

    auto map = wordsMapCounter(s);
    cout<<"wordsMapCounter: ";
    for (auto& [w,c] : map)
    {
        cout<<'['<<w<<" : "<<c<<']'<<" ";
    }
    cout<<"\n";

    auto unique = uniqueWords(s);
    cout<<"uniqueWords: ";
    for (auto& w : unique) cout<<w<<" ";
    cout<<"\n";

    auto diff = diffWordsCounter(s);
    cout<<"diffWordsCounter: "<<diff<<endl;

    list <int> nums = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout<<"nums: ";
    for (auto& x : nums) cout<<x<<" ";
    cout<<"\n";
    reverseNum(nums);
    cout<<"reverseNum(nums): ";
    for (auto& x : nums) cout<<x<<" ";
    cout<<"\n";

    vector<int> v = {-1, 312, -3, 4, -5, -6, 7, -8, -9, 4510};
    cout<<"v: ";
    for (auto& x : v) cout<<x<<" ";
    cout<<"\n";
    plusesDeleter(v);
    cout<<"plusesDeleter(v): ";
    for (auto& x : v) cout<<x<<" ";
    cout<<"\n";

    cout<<"nums: ";
    for (auto& x : nums) cout<<x<<" ";
    cout<<"\n";
    Sort(nums);
    cout<<"Sort(nums): ";
    for (auto& x : nums) cout<<x<<" ";
    cout<<"\n";

    return 0;
}