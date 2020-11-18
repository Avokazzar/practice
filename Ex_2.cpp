#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::cin;

int main()
{
    string s;
    cout << "Input:\n";
    getline(cin, s);
    int count = 0, temp;
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == 'f') {
            count++;
            temp = i;
        }
    }
    cout << "Output:\n";
    if (count == 1) {
        cout << "-1\n";
    }
    else if (count == 0) {
        cout << "-2\n";
    }
    else {
        cout << temp;
    }
    system("pause");
}
