#include <iostream>
#include <string>

using std::string, std::cout, std::endl, std::cin;

void maiuscula(string x)
{ 
    int i;
    int contador=0;
    for (i=0; i<x.size(); i++){
        if(isupper(x[i])){
            contador +=1;
        }
        else{
            continue;
        }
    }
    cout << "Essa frase tem " << contador << " letras maiúsculas." << endl;
}

int main()
{
    string s;
    cout << "Digite uma frase: ";
    getline(cin, s);
    maiuscula(s);

    return 0;
}