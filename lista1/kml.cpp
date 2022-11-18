#include <iostream>
#include <string>

using std::string, std::cout, std::cin, std::endl;

main()
{
    int km = 0;
    double litros = 0;
    double tlitros = 0;
    double tkm = 0; 

    while(km != -1)
    { 
    cout << "Digite os quilometros percorridos: ";
    cin >> km;

    if (km == -1){
        break;
    }
    else{
        tkm += km;
    }

    cout << "Digite a quantidade de litros utilizada: ";
    cin >> litros;
    tlitros += litros;

    double media = km/litros;

    cout << "Média: " << media << "km/l" << endl;
    }

    double mediaT = tkm/tlitros;

    cout << "Programa finalizado!" << endl << "Total de km percorridos: " << tkm << endl;
    cout << "Total de litros utilizados: " << tlitros << endl;
    cout << "Média total dos dados informados: " << mediaT << "km/l" << endl;
}