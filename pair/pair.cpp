#include <bits/stdc++.h>

using namespace std;

void learnPair()
{
    // pair declaration
    pair<int, int> p = {1, 5};

    // accessing pair
    cout << p.first << " " << p.second << endl;

    // Nested pair
    pair<int, pair<int, int>> p1 = {1, {4, 6}};

    cout << p1.first << " " << p1.second.first << " " << p1.second.second << endl;

    // array of pair
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}, {9, 10}};

    for (auto it : arr)
    {
        cout << it.first << " " << it.second << endl;
    }
}

int main()
{
    learnPair();
    return 0;
}