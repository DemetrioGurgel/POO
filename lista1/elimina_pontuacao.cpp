#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

void removePontuacao(string &s) {
    for (int i = 0, len = s.size(); i < len; i++)
    {
        if (ispunct(s[i])) {
            s.erase(i--, 1);
            len = s.size();
        }
    }
}

int main(){
    string text = "";
    cout << "Digite uma frase: ";
    getline(cin, text);
    removePontuacao(text);
    cout << text << endl;

 return EXIT_SUCCESS;
}