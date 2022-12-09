#include <iostream>
#include<cstring>
using namespace std;
int knapSack(int W, int wt[], int val[], int n)
{
	// making and initializing dp array
	int dp[W + 1];
	memset(dp, 0, sizeof(dp));


// Memset() is a C++ function. It copies a single character 
// for a specified number of times to an object. It is useful 
// for filling a number of bytes with a given value starting 
// from a specific memory location. It is defined in <cstring> header file.

// int main()
// {
//     char str[] = "geeksforgeeks";
//     memset(str, 't', sizeof(str));
//     cout << str;
//     return 0;
// }
// output: tttttttttttttt




	for (int i = 1; i < n + 1; i++) {
		for (int w = W; w >= 0; w--) {

			if (wt[i - 1] <= w)
				// finding the maximum value
				dp[w] = max(dp[w],dp[w - wt[i - 1]] + val[i - 1]);
		}
	}
	return dp[W]; // returning the maximum value of knapsack
}
int main()
{
	int val[] = { 3,4,5,6 };
	int wt[] = { 2,3,4,5 };
	int W = 5;
	int n = sizeof(val) / sizeof(val[0]);
	cout << knapSack(W, wt, val, n);
	return 0;
}
