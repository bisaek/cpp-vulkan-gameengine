#include <iostream>
using namespace std;
int main()
{
    int a = 1;
    int b = 2;
    int c = 0;
    string text = "hello world";
    cout << text << endl;
    c = b;
    b = a;
    a = c;

    std::cout << "b: "
              << b << endl;
    std::cout << "a: " << a << endl;
    return 0;
}