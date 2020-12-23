#include<iostream>
using namespace std;

int main()
{
	int a;
	while (cin >> a)
	{
		int n1[1000], n2[1000], sum[1000], temp;
		for (int d = 0; d < 1000; d++)
		{
			n1[d] = 0;
			n2[d] = 0;
			sum[d] = 0;
		}
		n1[0] = 1;
		n2[0] = 1;
		if (a == 1 || a == 2)
			cout << "1" << endl;
		else 
		{
			for (int i = 3; i <= a; i++)
			{
				for (int j = 0; j < 1000; j++)
				{
					if (j == 0)
						temp = n1[j] + n2[j];
					else
						temp = n1[j] + n2[j] + temp / 10;
					sum[j] = temp % 10;
				}
				for (int k = 0; k < 1000; k++)
				{
					n1[k] = n2[k];
					n2[k] = sum[k];
				}
			}
			int ans;
			for (int n = 999; n >= 0; n--)
			{
				if (sum[n] != 0)
				{
					ans = n;
					break;
				}
			}
			for (int m = ans; m >= 0 ; m--)
			{

				cout << sum[m];
			}
			cout << endl;
		}
	}
}