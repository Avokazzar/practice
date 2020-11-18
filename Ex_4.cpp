#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::cin;
using std::vector;
using std::reverse;

int main()
{
    long long n;
    cout << "Input N:\n";
    cin >> n;
    vector<long long> rem;
    int end;
    do {
        end = n % 2;
        n /= 2;
        rem.push_back(end);
    } while (n >= 1);
    cout << "Output:\n";
    reverse(rem.begin(), rem.end());
    for (int i = 0; i < rem.size(); i++) {
        cout << rem[i];
    }
    system ("pause");
}
