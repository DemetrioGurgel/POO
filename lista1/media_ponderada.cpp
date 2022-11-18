#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

int main()
{
    string nome;
    double n1 = 0;
    double n2 = 0;
    double n3 = 0;

    cout << "Digite o seu nome: ";
    cin >> nome;

    cout << "Digite a primeira nota: ";
    cin >> n1;

    cout << "Digite a segunda nota: ";
    cin >> n2;

    cout << "Digite a terceira nota: ";
    cin >> n3;

    double conta = (n1*3 + n2*4 + n3*5)/12;

    cout << "O aluno " << nome << " obteve média: " << conta << endl;

 return 0;
}
