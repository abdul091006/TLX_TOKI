#include <iostream>
#include <string>
using namespace std;

int palindrom(string s) {
    if (s.size() <= 1) {
        return true;
    }
    if (s[0] != s[s.size()-1]) {
        return false;
    } else {
        return palindrom(s.substr(1, s.size()-2));
    }
}

// Fungsi main() di bawah tidak boleh diubah!
int main() {
    cout << palindrom("") << endl;
    cout << palindrom("x") << endl;
    cout << palindrom("aa") << endl;
    cout << palindrom("ab") << endl;
    cout << palindrom("ini") << endl;
    cout << palindrom("itu") << endl;
    cout << palindrom("anna") << endl;
    cout << palindrom("ibu ratna antar ubi") << endl;
    cout << palindrom("rumah murah") << endl;
    cout << palindrom("aku suka rajawali bapak apabila wajar aku suka") << endl;
}
