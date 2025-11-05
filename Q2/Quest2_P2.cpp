#include<bits/stdc++.h>
using namespace std;

struct cn {
    long long x, y;
};

int main()
{
    string s; getline(cin, s);
    int l = s.find('['), r = s.find(']'), c = s.find(',', l);
    long long ix = stoll(s.substr(l + 1, c - l - 1));
    long long iy = stoll(s.substr(c + 1, r - c - 1));

    int ct = 0;
    for (long long x = ix; x <= ix + 1000; x += 10){
        for (long long y = iy; y <= iy + 1000; y += 10){
            long long curr_x = 0, curr_y = 0;
            int flag = 1;
            for (int i = 0; i < 100; i++)
            {
                long long n_x = curr_x * curr_x - curr_y * curr_y;
                long long n_y = curr_x * curr_y + curr_y * curr_x;
                curr_x = n_x / 100000 + x;
                curr_y = n_y / 100000 + y;
                if (abs(curr_x) > 1000000 || abs(curr_y) > 1000000){flag = 0; break;}
            }
            if (flag == 1)
                ct++;
        }
    }
    cout << ct << '\n';
    return (0);
}