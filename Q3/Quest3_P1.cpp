#include <bits/stdc++.h>
using namespace std;

int main()
{
    string nums;
    getline(cin, nums);

    vector<string> n_v;
    set<int> n_set;
    stringstream ss_n(nums);
    string num;
    while (getline(ss_n, num, ','))
    {
        n_v.push_back(num);
    }
    int sum = 0;
    for (int i = 0, n = n_v.size(); i < n; i++)
        n_set.insert(stoi(n_v[i]));
    for (auto n : n_set)
        sum += n;
    cout << sum << '\n';
    return (0);
}