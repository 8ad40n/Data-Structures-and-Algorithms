#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int LCS(string A, string B, int i, int j)
{
    if (i == 0 || j == 0)
        return 0;
    if (A[i - 1] == B[j - 1])
    {
        return 1 + LCS(A, B, i - 1, j - 1);
    }
    else
    {
        return max(LCS(A, B, i - 1, j), LCS(A, B, i, j - 1));
    }
}
int main()
{
    string A, B;
    cin >> (A);
    cin >> (B);
    //   A = "abcedefghij";
    //   B = "cdgi";
    cout << "Length of LCS is: " << LCS(A, B, A.size(), B.size()) << endl;
}