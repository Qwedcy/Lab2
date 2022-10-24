#include <iostream>
using namespace std; 

int main()
{
    double a, b, c, d, f, g;
    cout << "Input 2 number:";
    cin >> a >> b;
    c = a + b;
    d = a - b;
    f = a / b;
    g = a * b;
    cout << "a+b=" << c << std::endl;
    cout << "a-b=" << d << std::endl;
    cout << "a/b=" << f << std::endl;
    cout << "a*b=" << g << std::endl;
    system("pause");
}