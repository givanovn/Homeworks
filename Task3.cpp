/*There is a Binet's for the n-th Fibonacci number. The formula is:
Fn = (f^n-g^n)/sqrt(5), where f = (1+sqrt(5))/2 and g = (1-sqrt(5))/2 */
#include <iostream>
#include <cmath>
using namespace std;
long long Fibonacci(unsigned int n)
  {
    const double Sqrt5 = sqrt(5);
    return (pow((1+Sqrt5)/2, n) - pow((1-Sqrt5)/2, n)) / Sqrt5;
    // The complexity here is O(log(n))
   }


int main()
{
    int n;
    cin >> n;
    cout << Fibonacci(n) << endl;
    return 0;
}

