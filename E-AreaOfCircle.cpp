#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double a = 3.141592653;
    float r;
    cin >> r;
    cout << fixed << setprecision(9) << a * (r * r);
    return 0;
}
