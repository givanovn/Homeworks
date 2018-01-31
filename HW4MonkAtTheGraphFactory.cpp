#include<iostream>
#include<fstream>
#include"ImplementationOfGraph.cpp"
#include<string>
using namespace std;

int main()
{
	graph<int> g;
	ifstream file;
	file.open("inputfile.txt");

	if (!file) {
		cerr << "File not found!";
		return 0;
	}

	int a, b;
	while (!file.eof()) {
		file >> a;
		file >> b;

		if (!Point(a, g))
			AddTop(a, g);
		if (!Point(b, g))
			AddTop(b, g);
		AddRib(a, b, g);
	}
	cout << isTree(g) << endl;

	return 0;
}
