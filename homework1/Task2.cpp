#include <iostream>
using namespace std;
const int MAX = 1000;
long long Store[MAX]; //I will store my Fibonacci numbers here
long long Fibonacci(unsigned int n)
{
    if(n<2) Store[n]=n;
    else if(Store[n]==0) Store[n]= Fibonacci(n-1)+ Fibonacci(n-2);
    return Store[n];
    // The complexity is O(n)
}

int main()
{
    int n;
    cin >> n;
    cout << Fibonacci(n) << endl;
    return 0;
}
