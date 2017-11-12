#include <iostream>
#include<stack>
#include <string>

using namespace std;


int main()
{
	int n;
	cin >> n;
	stack<string> Text;
	string s = "";
	while (n > 0)
	{
    int operation;
    cin >> operation;
    switch(operation)
		{
        case 1:
            {
            string s1;
			cin >> s1;
			Text.push(s);
			s = s + s1;
			break;
            }
        case 2:
            {
			int k;
			cin >> k;
			Text.push(s);
			string s2 = s.substr(0, s.length() - k);
			s = s2;
			break;
            }
        case 3:
            {
			int k;
			cin >> k;
			cout << s[k - 1] << endl;
			break;
		    }
        case 4:
            {
			s = Text.top();
			Text.pop();
			break;
		    }
		}
		n--;
	}
	return 0;
}
