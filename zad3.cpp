#include <iostream>

using namespace std;

unsigned long long fibonacci(int n)
{
    if (n < 2) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}

unsigned long long factorial(int f)
{
    if (f < 2) return 1;
    return f * factorial(f-1);
}

int main ()
{
    cout << "Fibonacci sequence result is: ";
    for (int n = 0; n < 94; n++)
    {
        cout << fibonacci(n) << " ";
    }
    cout << endl << endl << "Factorial result is: ";

    for (int f = 0; f < 21; f++)
    {
        cout << factorial(f) << " ";
    }
    cout << endl;
}
