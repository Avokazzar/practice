#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using std::string;
using std::reverse;
using std::cout;
using std::cin;

int IsPalindrom(string s)
{
    for (int i = 0; i <= s.length(); i++) {
        if (s[i] == ' ') {
            s.erase(i, 1);
        }
        s[i] = tolower(s[i]);
    }
    string s_new = s;
    reverse(s_new.begin(), s_new.end());
    bool res;
    if (s == s_new) {
        res = true;
    }
    else {
        res = false;
    }
    return res;
}

int main()
{
    string s;
    cout << "Input:\n";
    getline(cin, s);
    
    cout << "Output:\n" << IsPalindrom(s);
}
