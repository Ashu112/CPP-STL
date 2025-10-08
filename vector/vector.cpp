#include <bits/stdc++.h>

using namespace std;

void learnVector()
{
    // declaration of vector
    vector<int> v;

    // adding element to vector
    v.push_back(1);
    cout << v[0] << endl;
    // we can use emplace_back to add as well this is faster than push_back
    v.emplace_back(2);
    cout << v[1] << endl;

    // we can add pair in vector as well
    vector<pair<int, int>> vec;

    // difference while adding is the syntax
    vec.push_back({1, 2});
    vec.emplace_back(3, 4);
    cout << vec[0].first << ", " << vec[0].second << endl;
    cout << vec[1].first << ", " << vec[1].second << endl;

    // we can have vector of size n and value m as vector<int> v(n,m)
    vector<int> v1(5, 100); // this is vector of size 5 with each index having value 100

    // we can simply initate vector of some size n, it depends on compiler whether it will take 0 or some garbage value
    vector<int> v2(10);

    // we can copy a vector into another vector
    vector<int> v3(v1);

    // we can increase the size of vector even if we declare the size of it
    v1.push_back(101);

    // we can access element at certain index using 2 ways one in same as array and another is using at() method
    cout << v1[2] << " " << v1.at(2) << endl;

    // We can use iterator as well to access the elememts in vector
    // this points to the memory address of the starting element of the vector
    vector<int> v4 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::iterator it = v4.begin();
    // shifts the iterator to next element
    it++;
    // now for printing the value we use "*" because it contains the address not the value at that index
    cout << *(it) << endl; // output --> 2

    // this shifts the iterator to 2 positions
    it += 2;
    cout << *(it) << endl; // output --> 4

    // this gives iterator on something at the last of index and when we do it-- it points to the last element of the vector
    vector<int>::iterator ite = v4.end();
    // vector<int>::iterator itre = v4.rend();   // hardly used
    //  vector<int>::iterator itrb = v4.rbegin(); // hardly used

    // traversing a vector
    for (int i = 0; i < v3.size(); i++)
    {
        cout << v3[i] << " ";
    }
    cout << endl;

    // traversing a vector using iterato
    for (auto it = v4.begin(); it != v4.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    // using for each loop --> it iterates on the data type not on the iterator
    for (auto it : v1)
    {
        cout << it << " ";
    }
    cout << endl;

    // deletion in vector
    // we can give index of the single element to remove from vector
    vector<int> v5(v4);
    // v5 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    v5.erase(v5.begin() + 4);
    // this will delete 5
    for (auto it : v5)
    {
        cout << it << " ";
    }
    cout << endl;

    // we can also delete a range from vector
    // we need to give starting index and end index of the next element which needs to be deleted
    // v.erase(start.end) --> [start,end). end is not included
    vector<int> v6(v4);
    // v6 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    v6.erase(v6.begin() + 2, v6.begin() + 5);
    // this will delete 3,4,5
    for (auto it : v6)
    {
        cout << it << " ";
    }
    cout << endl;

    // Inserting element in a vector
    vector<int> v7(2, 10); // {10,10}

    for (auto it : v7)
    {
        cout << it << " ";
    }
    cout << endl;

    // inserting at the start of vector
    v7.insert(v7.begin(), 300); // {300,10,10}

    for (auto it : v7)
    {
        cout << it << " ";
    }
    cout << endl;

    // inserting at certain index, just give the index and value to be added
    v7.insert(v7.begin() + 1, 4, 20); // {300,20,20,20,20,10,10}

    for (auto it : v7)
    {
        cout << it << " ";
    }
    cout << endl;

    // we can insert certain elements from another vector to some vector
    v7.insert(v7.begin() + 3, v4.begin(), v4.begin() + 4); // {300,20,20,20,1,2,3,4,5,10,10}

    for (auto it : v7)
    {
        cout << it << " ";
    }
    cout << endl;

    // size of vector
}

int main()
{
    learnVector();
    return 0;
}