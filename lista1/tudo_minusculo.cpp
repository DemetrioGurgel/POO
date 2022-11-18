#include <iostream>
#include <algorithm>
#include <string>

using std::cout; using std::string;
using std::endl; using std::cin;
using std::transform; using std::tolower;

string minusculo(string s)
{
    transform(s.begin(), s.end(), s.begin(),
                   [](unsigned char c){ return tolower(c); });
    return s;
}

int main() {
    string string1 = "";
    cout << "Digite uma frase teste em maiúsculo: ";
    getline(cin, string1);
    cout <<  "String em minúsculo: " << minusculo(string1) << endl;

    return 0;
}