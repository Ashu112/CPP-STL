#include <bits/stdc++.h>

using namespace std;

void learnDequeue()
{
    // declaration
    deque<int> dq;

    // adding in deque 
    // pushing in deque
    dq.push_back(3);    // {3}
    dq.emplace_back(7); // {3,7}

    // adding elemts in the front of deque
    dq.push_front(10);    // {10,3,7}
    dq.emplace_front(11); // {11,10,3,7}

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    // removing a element from back of  deque
    dq.pop_back();

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    // removing a from front of deque
    dq.pop_front();

    for (auto it : dq)
    {
        cout << it << " ";
    }
    cout << endl;

    // this gives the last element
    cout << dq.back() << endl;

    // this gives the first element
    cout << dq.front();

    // rest functions same as vector
    // begin,end,rbegin , rend , clear , insert , size , swap
}

int main()
{
    learnDequeue();
    return 0;
}
