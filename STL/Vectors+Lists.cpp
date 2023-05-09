#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;
    // v.push_back(1);
    // v.push_back(2);
    // v.push_back(5);
    // v.push_back(4);
    // v.push_back(5);

    // vector<int>::iterator b = v.begin();
    // cout << *b << " " << endl;

    // v.erase(v.begin());
    // cout << *b << " " << endl;

    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }

    // cout << endl;

    // cout << *b << " ";

    // b += 2; // points to the next element

    // vector<int>::iterator e = v.end();
    // e--;
    // cout << *e << " ";

    // vector<int>::iterator rb = v.rend();
    // cout << *rb << " ";

    // vector<int>::iterator rb = v.rend();
    // cout << *rb << " ";

    list<int> ls;
    ls.push_back(1);
    ls.push_back(2);
    ls.push_back(3);

    // ls.push_front(0);

    // auto rb = ls.begin();
    list<int>::iterator i = ls.begin();
    // rb--;
    // rb--;
    // rb++;
    cout << *i << " ";

    return 0;
}