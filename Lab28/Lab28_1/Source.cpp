#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define in_range(x,y,z) for(int x=y;x<z;x++)
int findSubstr(string t, string s)
{
	const int p = 97;
	vector<int> p_wow(s.length());
	p_wow[0] = 1;
	for (size_t i = 1; i < p_wow.size(); ++i)
	{
		p_wow[i] = p_wow[i - 1] * p;
	}
	vector<int> h(s.length());
	for (size_t i = 0; i < s.length(); ++i)
	{
		h[i] = (s[i] - 't' + 1) * p_wow[i];
		if (i)
		{
			h[i] += h[i - 1];
		}
	}
	int h_t = 0;
	for (size_t i = 0; i < t.length(); ++i)
	{
		h_t += (t[i] - 't' + 1) * p_wow[i];
	}
	for (size_t i = 0; i + t.length() - 1 < s.length(); ++i)
	{
		int cur_h = h[i + t.length() - 1];
		if (i)
		{
			cur_h -= h[i - 1];
		}
		if (cur_h == h_t * p_wow[i])
		{
			return int(i);
		}
	}
	return -1;
}

int main()
{
	vector<string>T, S, C;
	int n;
	cout << "Enter count: ";
	cin >> n;
	string tmp;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter " << i + 1 << " string: ";
		cin >> tmp;
		if (tmp.length() == 1)
		{
			C.push_back(tmp);
		}
		T.push_back(tmp);
	}
	cout << "\nEnter -1 to exit: ";
	while (cin >> tmp && tmp.compare("-1") != 0)
	{
		S.push_back(tmp);
	}
	for (int i = 0; i < S.size(); i++)
	{
		string s = S[i];
		if (s == "")
		{
			continue;
		}
		if (s.length() == 1)
		{
			in_range(j, 0, C.size())
			{
				string c = C[j];
				if (s == c)
				{
					cout << s << "\n";
					break;
				}
			}
			continue;
		}
		for (int j = 0; j < n; j++)
		{
			string t = T[j];
			int pos = findSubstr(t, s);
			if (pos >= 0)
			{
				cout << s << "\n";
				break;
			}
		}
	}
	return 0;
}