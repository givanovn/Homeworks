#include "llist.cpp"

template <typename T>
class graph
{
	public:
		void addTop(const T&);
		void deleteTop(const T&);
		void addRib(const T&, const T&);
		void deleteRib(const T&, const T&);
		bool top(const T&);
		bool rib(const T&, const T&);
		bool empty() const;
		elem_link1<T>* point(const T&);
		LList<T> vertexes();
		void print();
	private:
		LList< LList<T> > g;
};

template <typename T>
void graph<T>::addTop(const T& a)
{
	LList<T> l;
	l.ToEnd(a);
	g.ToEnd(l);
}

template <typename T>
void graph<T>::deleteTop(const T& a)
{
	g.IterStart();
	elem_link1<LList<T> >* p = g.Iter(), *r;
	while(p)
	{
		p->inf.IterStart();
		elem_link1<T>* q = p->inf.Iter();
		if(rib(q->inf, a)) deleteRib(q->inf, a);
		p = p->link;
	}
	g.IterStart();
	elem_link1<T>* q;
	do
	{
		r = g.Iter();
		r->inf.IterStart();
		q = r->inf.Iter();
	}
	while(q->inf != a);
	LList<T> x;
	g.deleteElem(r, x);
}

template <typename T>
void graph<T>::addRib(const T& a, const T& b)
{
	elem_link1<T>* q = point(a),
		*p;

	p = new elem_link1<T>;

	p->inf = b;
	p->link = q->link;
	q->link = p;
}

template <typename T>
void graph<T>::deleteRib(const T& a, const T& b)
{
	g.IterStart();
	elem_link1<LList<T> > *p;
	elem_link1<T> *q;
	do
	{
		p = g.Iter();
		p->inf.IterStart();
		q = p->inf.Iter();
	}
	while(q->inf != a);
	q = q->link;
	while(q->inf != b) q = q->link;
	T x;
	p->inf.deleteElem(q, x);
}

template <typename T>
bool graph<T>::top(const T& a)
{
	if(g.empty()) return false;
	g.IterStart();
	elem_link1<LList<T> > *p = g.Iter();
	elem_link1<T> *q;
	do
	{
		p->inf.IterStart();
		q = p->inf.Iter();
		p = p->link;
	}
	while(q->inf != a && p);

	return q->inf == a;
}

template <typename T>
bool graph<T>::rib(const T& a, const T& b)
{
	elem_link1<T>* p = point(a);
	p = p->link;
	while(p && p->inf != b) p = p->link;
	return p != NULL;
}

template <typename T>
bool graph<T>::empty() const
{
	return g.empty();
}

template <typename T>
elem_link1<T>* graph<T>::point(const T& a)
{
	g.IterStart();
	elem_link1<LList<T> > *p;
	elem_link1<T> *q;
	do
	{
		p = g.Iter();
		p->inf.IterStart();
		q = p->inf.Iter();
	}
	while(q->inf != a);
	return q;
}

template <typename T>
LList<T> graph<T>::vertexes()
{
	LList<T> l;
	g.IterStart();
	elem_link1<LList<T> > *p = g.Iter();
	while(p)
	{
		p->inf.IterStart();
		elem_link1<T>* q = p->inf.Iter();
		l.ToEnd(q->inf);
		p = p->link;
	}
	return l;
}

template <typename T>
void graph<T>::print()
{
	g.IterStart();
	elem_link1<LList<T> > *p = g.Iter();
	while(p)
	{
		p->inf.print();
		p = p->link;
	}
	cout << endl;
}
