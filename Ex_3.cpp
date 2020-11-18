#include <iostream>

using std::cout;
using std::cin;

int main()
{
    int a, b;
    cout << "Input:\n";
    cin >> a >> b;
    cout << "Output:\n";
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << i;
            break;
        }
    }
system("pause");
}
