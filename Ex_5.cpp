#include <iostream>

using std::cout;
using std::cin;

int  Factorial(int num)
{
    if (num <= 0) {
        return 1;
    }
    int res = num;
    for (int i = 1; i < num; i++) {
        res *= i;
    }
    return res;
}

int main()
{
    int num;
    cout << "Input:\n";
    cin >> num;
    cout << "Output:\n" << Factorial(num);
}
