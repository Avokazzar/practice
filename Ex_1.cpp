#include <iostream>
#include <math.h>

using std::cout;
using std::cin;

int main()
{
    double a, b, c, d, x1, x2;
    cout << "Input:\n";
    cin >> a >> b >> c;
    if (a == 0) {
            x1 = -c / b;
            cout << "Output:\n" << x1 << "\n";
    }
    else {
        cout << "Output:\n";
        d = (pow(b, 2)) - (4 * a * c);
        if (d > 0) {
            x1 = (-b + sqrt(d)) / (2 * a);
            x2 = (-b - sqrt(d)) / (2 * a);
            cout << x1 << " " << x2 << "\n";
        }
        else if (d == 0) {
            x1 = -b / (2 * a);
            cout << x1 << "\n";
        }
        else {
            cout << "\n";
        }
    }
    system("pause");
}
