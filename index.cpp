#include <bits/stdc++.h>

using namespace std;

// function with no return Type
void print()
{
    cout << "Welcome Back to Exploring C++" << endl;
}

// function with return type as integer
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    // fuction call in c++
    print();

    int result = sum(2, 5);
    cout << "Result : " << result << endl;
    return 0;
}