
#include <bits/stdc++.h>
using namespace std;

int MatrixChainOrder(int p[], int n)
{

	int m[n][n];

	int i, j, k, L, q;

	for (i = 1; i < n; i++)
		m[i][i] = 0;

	// L is chain length.
	for (L = 2; L < n; L++)
	{
		for (i = 1; i < n - L + 1; i++)
		{
			j = i + L - 1;
			m[i][j] = INT_MAX;
			for (k = i; k <= j - 1; k++)
			{
				// q = cost/scalar multiplications
				q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
				if (q < m[i][j])
					m[i][j] = q;
			}
		}
	}

	return m[1][n - 1];
}

// Driver Code
int main()
{
	int arr[] = {4, 10, 3, 12, 20, 7};
	int size = sizeof(arr) / sizeof(arr[0]);

	cout << "Minimum number of multiplications is "
		 << MatrixChainOrder(arr, size);

	return 0;
}


/*
// C++ code to implement the
// matrix chain multiplication using recursion

#include <bits/stdc++.h>
using namespace std;

// Matrix Ai has dimension p[i-1] x p[i]
// for i = 1 . . . n
int MatrixChainOrder(int p[], int i, int j)
{
	if (i == j)
		return 0;
	int k;
	int mini = INT_MAX;
	int count;

	// Place parenthesis at different places
	// between first and last matrix,
	// recursively calculate count of multiplications
	// for each parenthesis placement
	// and return the minimum count
	for (k = i; k < j; k++)
	{
		count = MatrixChainOrder(p, i, k)
				+ MatrixChainOrder(p, k + 1, j)
				+ p[i - 1] * p[k] * p[j];

		mini = min(count, mini);
	}

	// Return minimum count
	return mini;
}

// Driver Code
int main()
{
	int arr[] = { 4, 10, 3, 12, 20, 7 };
	int N = sizeof(arr) / sizeof(arr[0]);

	// Function call
	cout << "Minimum number of multiplications is "
		<< MatrixChainOrder(arr, 1, N - 1);
	return 0;
}

// This code is contributed by Shivi_Aggarwal
*/