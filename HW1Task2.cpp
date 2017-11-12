#include <iostream>
#include <stack>
using namespace std;

int Maximum(int a, int b)
{
    if(a > b) return a;
    return b;
}


int main()
{
	stack<int> s;

	int j, k;
	int n;
	cin >> n;

	while (n > 0)
	{
	    int temp;
		cin >> j;
		switch(j)
		{
		    case 1:
		        {
		            cin >> k;
		            if(s.size() > 0) temp = s.top();
		            else temp = k;
		            s.push(Maximum(k, temp));
		            break;
		        }
            case 2:
                {
                    s.pop();
                    break;
                }
            case 3:
                {
                    cout << s.top() << " ";
                }
		}
		n--;
	}
	return 0;
}