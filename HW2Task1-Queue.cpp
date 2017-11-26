#include<iostream>
#include <stack>

using namespace std;

class myQueue
{
	stack<int> firstStack;
	stack<int> secondStack;
public:
	void enQueue(int x)
	{
		firstStack.push(x);
	}

	void deQueue()
	{
		if (secondStack.empty())
		{
			while (!firstStack.empty())
			{
				secondStack.push(firstStack.top());
				firstStack.pop();
			}
		}
		secondStack.pop();
	}
	void print()
	{
		if (secondStack.empty())
		{
			while (!firstStack.empty())
			{
				secondStack.push(firstStack.top());
				firstStack.pop();
			}
		}
		cout << secondStack.top() << endl;
	}
};

int main()
{
	int t;
	cin >> t;
	myQueue q;
	for (int i = 0; i < t; i++)
	{
		int a;
		cin >> a;
		if (a == 1)
		{
			int x;
			cin >> x;
			q.enQueue(x);
		}
		else
		{
			if (a == 2) q.deQueue();
			if (a == 3) q.print();
		}
	}
	return 0;
}
