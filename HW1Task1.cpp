#include <iostream>

using namespace std;

template <typename T>
class node
{
    public:
	T data;
	node* next;
};

template <typename T>
class LinkedStack
{
private:
	node<T>* topNode;
	void tocopy(node<T>* other);
	void eraseStack();
	void copyStack(LinkedStack const&);
public:
	LinkedStack();
	LinkedStack(LinkedStack const&);
	LinkedStack& operator=(LinkedStack const&);
	~LinkedStack();
	bool IsEmpty() const;
	void push(T const& x);
	T pop();
	T top() const;
};

template <typename T>
LinkedStack<T>::LinkedStack()
{
    topNode = nullptr;
}

template <typename T>
bool LinkedStack<T>::IsEmpty() const
{
	return topNode == nullptr;
}

template <typename T>
void LinkedStack<T>::push(T const& x)
{
	node<T>* p = new node<T>;
	p->data = x;
	p->next = topNode;
	topNode = p;
}

template <typename T>
T LinkedStack<T>::pop()
{
	if (IsEmpty())
	{
		cerr << "Empty Stack!";
		return 0;
	}
	node<T>* p = topNode;
	topNode = topNode->next;
	T x = p->data;
	delete[] p;
	return x;
}

template <typename T>
T LinkedStack<T>::top() const
{
	if (IsEmpty())
	{
		cerr << "Empty Stack!";
		return 0;
	}
	return topNode->data;
}

template <typename T>
void LinkedStack<T>::eraseStack()
{
	while (!IsEmpty())
	{
		pop();
	}
}

template <typename T>
LinkedStack<T>::~LinkedStack()
{
	eraseStack();
}

template <typename T>
void LinkedStack<T>::tocopy(node<T>* other)
{
	if (other == nullptr)
	{
		return;
	}
	tocopy(other->next);
	push(other->data);
}

template <typename T>
void LinkedStack<T>::copyStack(LinkedStack const& ls)
{
	topNode = nullptr;
	tocopy(ls.topNode);
}

template <typename T>
LinkedStack<T>::LinkedStack(LinkedStack const& ls)
{
	copyStack(ls);
}

template <typename T>
LinkedStack<T>& LinkedStack<T>::operator=(LinkedStack const& ls)
{
	if (this != &ls)
	{
		eraseStack();
		copyStack(ls);
	}
	return *this;
}

int main()
{
	return 0;
}
