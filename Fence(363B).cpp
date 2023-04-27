#include <iostream>
#include <climits>
using namespace std;
int main()
{
	int n, k;
	cin >> n >> k;
	int arr[150000];
	int a[150000];
	cin >> arr[0];
	a[0] = arr[0];
	for (int i = 1;i < n;i++)
	{
		cin >> arr[i];
		a[i] = a[i - 1] + arr[i];
	}
	int h = INT_MAX, place = 0;
	

	for (int i = 0;i <=n-k;i++)
	{
		int j = i + k - 1;
		int c;
		if (i == 0)
			c = a[j];
		else
		{
			c = a[j] - a[i-1];
		}
		if (c < h)
		{
			h = c;
			place = i;
		}

	}
	cout << place+1 << endl;
}

