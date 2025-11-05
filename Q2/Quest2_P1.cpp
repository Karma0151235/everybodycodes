#include<bits/stdc++.h>
using namespace std;

struct cn {
    long long x, y;
};

int main()
{
    string s; getline(cin, s);
    int l = s.find('['), r = s.find(']'), c = s.find(',', l);
    long long x = stoll(s.substr(l + 1, c - l - 1));
    long long y = stoll(s.substr(c + 1, r - c - 1));

    cn A = {x, y};
    cn R = {0, 0};
    for (int i = 0; i < 3; i++)
    {
        long long n_x = R.x * R.x - R.y * R.y;
        long long n_y = R.x * R.y + R.y * R.x;
        R = {n_x, n_y};

        R.x /= 10; R.y /= 10;
        R.x += A.x; R.y += A.y;
    }
    cout << "[" << R.x << ", " << R.y << "]" << '\n';
    return (0);
}