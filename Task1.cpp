#include <iostream>
using namespace std;
/* ���������� �� ���� ���������� � 2^n, ������ n � �������, ����� ������������ � �����
*/
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
