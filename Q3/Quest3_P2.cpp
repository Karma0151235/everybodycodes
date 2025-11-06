#include <bits/stdc++.h>
using namespace std;

int main()
{
    string nums;
    getline(cin, nums);

    vector<string> n_v;
    set<int> n_set;
    vector<int> unique_n;
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
        unique_n.push_back(n);
    sort(unique_n.rbegin(), unique_n.rend());
    while (unique_n.size() > 20)
    {
        unique_n.erase(unique_n.begin());
    }
    for (auto n : unique_n)
        sum += n;
    cout << sum << '\n';
    return (0);
}