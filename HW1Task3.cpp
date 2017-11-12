#include <iostream>

using namespace std;

int main()
{
	int g;
	cin >> g;
	for (int iter1 = 0; iter1 < g; iter1++)
	{
		int n, m, x;
		cin >> n >> m >> x;
		int a[100], b[100];
		for (int iter2 = 0; iter2 < n; iter2++) cin >> a[iter2];
		for (int iter3 = 0; iter3 < m; iter3++) cin >> b[iter3];
		int sum = 0, counter = 0, temp = 0, i = 0, j = 0;

		while (i < n && sum + a[i] <= x)
		{
			sum += a[i];
			i++;
		}
		counter = i;

		while (j < m && i >= 0)
		{
			sum += b[j];
			j++;
			while (sum > x && i > 0)
			{
				i--;
				sum -= a[i];
			}
			if (sum <= x && i + j > counter)
				counter = i + j;
		}
		cout << counter << endl;
	}
	return 0;
}
