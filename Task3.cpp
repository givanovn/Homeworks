/*���������� ������� �� ���� �� ���������� �� n-���� ����� �� ��������. ���� ������� ��� �������� ���:
Fn = (f^n-g^n)/sqrt(5), ������ f = (1+sqrt(5))/2, � g = (1-sqrt(5))/2 */
#include <iostream>
#include <cmath>
using namespace std;
long long Fibonacci(unsigned int n)
  {
    const double Sqrt5 = sqrt(5);
    return (pow((1+Sqrt5)/2, n) - pow((1-Sqrt5)/2, n)) / Sqrt5;
    // ��� ���������� � O(log(n))
   }


int main()
{
    int n;
    cin >> n;
    cout << Fibonacci(n) << endl;
    return 0;
}

