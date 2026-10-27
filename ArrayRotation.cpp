#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t; // Read the number of test cases
	while (t--)
	{
		int n;
		cin >> n;

		long long a[n];
		long long maxDiff = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];

			if (i > 0)
			{
				maxDiff = max(maxDiff, a[i-1] - a[i] );
			}
		}

		maxDiff= max(maxDiff, a[n-1]-a[0] );

		long long endFix = 0;
		long long startFix = 0;

		for (int i = 1; i < n; i++)
		{
			// maxDiff= max(maxDiff, abs())
			endFix = max(endFix, a[n - 1] - a[i]);
			startFix = max(startFix, a[i] - a[0]);
		}

		cout << max(maxDiff, max(endFix, startFix));

		cout<<endl;
	}
	return 0;
}

// Time Complexity (TC): O(n) = O(10^4)
// Space Complexity (SC): O(n) = O(10^4)
