#include <bits/stdc++.h>

using namespace std;

void learnList()
{
    // dynamic memory allocation
    // declaration
    list<int> ls;

    // add element to the list
    ls.push_back(2);    // {2}
    ls.emplace_back(4); // {2,4}

    // add element at start of the list
    ls.push_front(5); // {5,2,4}

    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;

    // rest functions are same as vector
    // begin, end , rbegin,rend,clear,insert, size, swap
}

int main()
{
    learnList();
    return 0;
}