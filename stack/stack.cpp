#include <bits/stdc++.h>

using namespace std;

void learnStack()
{
    // stack work on LIFO -> Last in First out
    // declaration of stack
    stack<int> st;

    // adding element in stack
    st.push(2);    // {2}
    st.push(3);    // {2,3}
    st.push(1);    // {2,3,1}
    st.push(3);    // {2,3,1,3}
    st.emplace(5); // {2,3,1,3,5}

    // getting top element in a stack
    cout << st.top() << endl; // prints 5 "** st[2] is invalid " stack do not have indexing

    // removing element from stack
    st.pop(); // removes 5 {2,3,1,3}

    cout << st.top() << endl; //  3

    // size of stack
    cout << st.size() << endl; // 4

    // checking if stack is empty or not
    cout << st.empty() << endl; // false as stack is not empty

    // swapping a stack
    // this basically swaps the elemnts in the stack
    // stack<int> s1, s2;
    // s1.swap(s2);
}

int main()
{
    learnStack();
    return 0;
}
