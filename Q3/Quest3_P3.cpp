#include <bits/stdc++.h>
using namespace std;

int main()
{
    string nums;
    getline(cin, nums);

    vector<string> n_v;
    vector<int> n_int;
    map<int, int> occs;
    stringstream ss_n(nums);
    string num;
    while (getline(ss_n, num, ','))
    {
        n_v.push_back(num);
    }
    int mx_oc = 0;
    for (int i = 0, n = n_v.size(); i < n; i++)
        n_int.push_back(stoi(n_v[i]));
    for (int n : n_int)
        occs[n]++;
    for (int n : n_int)
        mx_oc = max(occs[n], mx_oc);
    cout << mx_oc << '\n';
    return (0);
}