#include <iostream>
using namespace std;
// This is very bad solution because the complexity is 2^n
int Fibonacci(unsigned int n)
{
    if(n==1) return 1;
    else if(n==2) return 1;
    return Fibonacci(n-1)+Fibonacci(n-2);
}

int main()
{
    int n;
    cin >> n;
    cout << Fibonacci(n) << endl;
    return 0;
}
