// https://code.ptit.edu.vn/student/question/CPP0426
// SẮP XẾP XEN KẼ - 2

#include <bits/stdc++.h>
#define endl '\n'
using namespace std;

void TestCase()
{
    int n;
    cin >> n;
    int a[n];
    for (auto &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    int i = 0, j = n - 1;
    while (i < j) {
        cout << a[i++] << " " << a[j--] << " ";
    }
    if (i == j) cout << a[i];
    cout << endl;
}

int main()
{
    int T;
    cin >> T;
    while (T--) TestCase();
    return 0;
}