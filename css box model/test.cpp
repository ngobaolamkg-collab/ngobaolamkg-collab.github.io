#include <bits/stdc++.h>
using namespace std;

// cho n số nguyên, lưu lại trong mảng, rồi in ra
int main()
{
    //          0 1 2 3 4 5       99
    int m[100]; // [6][5][7][9][4][ ][ ].....[ ]
    int n;
    // 6 5 7 9 4
    // m[0] = 6;
    // m[1] = 5;
    // m[2] = 7;
    // m[3] = 9;
    // m[4] = 4;
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> m[i];
    }
    for(int i = 0; i < n; ++i)
    {
        cout << m[i] << ' ';
    }
}