// Initializing variables using initializer list
#include <iostream>
using namespace std;
class example
{
private:
    int a, b;

public:
    example(int x, int y) : a(x), b(y)
    {
        cout << a << " " << b;
    }
};
int main()
{
    example e(5, 6);
}