#include <iostream>
#include <stdexcept>
#include <algorithm>

#include "App.h"
#include "Time.h"
#include "SmartTv.h"

using namespace std;

SmartTV::SmartTV(string marca, string modelo, string versao_so): marca(marca), modelo(modelo), versao_so(versao_so)
{
    ligada = false;
}

SmartTV &operator << (SmartTV &s, App &a)
{
    //Adiciona app
    s.apps.push_back(&a);
    return s;
}

SmartTV &operator >> (SmartTV &s, App &a)
{
    //Remove app
    for(int i = 0; i < s.apps.size(); i++)
    {
        if(s.apps[i] == &a)
        {
            s.apps.erase(s.apps.begin() + i);
        }
    }
    return s;
}

void SmartTV::desligar()
{
    ligada = false;
    exit (0);
}


void SmartTV::run(string opcao)
{
    while (true){
        cout << endl << "-----" << endl;
        cout << "MENU:" << endl;
        cout << "-----" << endl << endl;
        cout << "-> 1 - Ligar a TV" << endl;
        cout << "-> 2 - Desligar a TV" << endl;
        cout << "-> 3 - Exibir os apps" << endl;
        cout << "-> 4 - Loja de apps" << endl;
        cout << "-> 5 - Sair do menu" << endl;
        int opcao;
        cout << endl << "Digite a opção desejada: " << endl;
        cin >> opcao;
        if (std::cin.fail()) {
      // Limpar o estado de falha de entrada
      std::cin.clear();
      // Descartar o caractere inválido da entrada
      std::cin.ignore();}
      
        if (opcao == 1){
            ligar();
                std::cout << " _______________" << std::endl;
                std::cout << "|               |" << std::endl;
                std::cout << "|   TV LIGADA   |" << std::endl;
                std::cout << "|_______________|" << std::endl;
                std::cout << "       | |" << std::endl;
                std::cout << "     __| |__" << std::endl;

        }
        else if (opcao == 2){
            desligar();

        }
        else if (opcao == 3){
            while (true) {
                if (ligada == false){
                    cout << "-------------------" << endl;
                    cout << "A TV está desligada" << endl;
                    cout << "-------------------" << endl;
                    break;
                }
                else{
                    //Imprime os apps
                    std::cout << " _______________" << std::endl;
                    std::cout << "|               |" << std::endl;
                    std::cout << "|     APPS      |" << std::endl;
                    std::cout << "|_______________|" << std::endl;
                    std::cout << "       | |" << std::endl;
                    std::cout << "     __| |__" << std::endl;
                    std::cout << endl;
                    //Listar apps
                    for(int i = 0; i < apps.size(); i++)
                    {
                        cout << "-> " << apps[i]->getNome() << endl;
                    }
                    cout << "Digite o nome do app que deseja executar: " << endl;
                    cout << "Caso queira desligar a TV, digite 'desligar' " << endl;
                    string nome = "";
                    try {
                        // Lê a string do usuário
                        cin >> nome;

                        // Verifica se a string está vazia
                        if (nome.empty()) {
                        throw std::runtime_error("A string está vazia");
                        }

                        std::transform(nome.begin(), nome.end(), nome.begin(), ::toupper);

                        for (int i = 0; i < nome.length();i+=1){
                        if (isdigit(nome[i])){
                            throw std::invalid_argument("A string é um nome ou número inválido");
                        }
                        }
                        
                    } catch (std::runtime_error& e) {
                        // Trata a exceção de string vazia
                        std::cout << "Erro: " << e.what() << std::endl;
                    } catch (std::invalid_argument& e) {
                        // Trata a exceção de string inválida
                        std::cout << "Erro: " << e.what() << std::endl;
                    }

                    if(nome == "DESLIGAR")
                    {
                        desligar();
                    }
                    else{
                        int passou = 0;
                        for(int i = 0; i < apps.size(); i++)
                        {
                            if(nome == apps[i]->getNome())
                            {
                                    apps[i]->run();
                                    passou = 1;
                            }
                        }
                        if(passou == 0)
                            {
                                cout << endl << "App não encontrado" << endl;
                                cout << endl;
                            }

                    cout << endl << "Deseja executar outro app? (s/n)" << endl;
                    string opcao;

                        try {
                        // Lê a string do usuário
                        cin >> opcao;

                        // Verifica se a string está vazia
                        if (opcao.empty()) {
                        throw std::runtime_error("A string está vazia");
                        }

                        std::transform(opcao.begin(), opcao.end(), opcao.begin(), ::toupper);

                        for (int i = 0; i < opcao.length();i+=1){
                        if (isdigit(opcao[i])){
                            throw std::invalid_argument("A string é um nome ou número inválido");
                        }
                        }

                    } catch (std::runtime_error& e) {
                        // Trata a exceção de string vazia
                        std::cout << "Erro: " << e.what() << std::endl;
                    } catch (std::invalid_argument& e) {
                        // Trata a exceção de string inválida
                        std::cout << "Erro: " << e.what() << std::endl;
                    }

                    if(opcao == "N")
                    {
                        break;
                    }
                    else if(opcao == "S")
                    {
                        continue;
                    }
                    else{
                        cout << endl << "Opção inválida" << endl;
                    }
                    }
                    }
            }
                    
                }
        else if (opcao == 4){
            if (ligada == false){
                cout << "-------------------" << endl;
                cout << "A TV está desligada" << endl;
                cout << "-------------------" << endl;
                }
            else{
                cout << endl << "Bem vindo a loja de apps" << endl;
                cout << "-------------------------" << endl;
                cout << "-> Desinstalar app: digite 1" << endl;
                cout << "-> Instalar app: digite 2" << endl;
                int opcao2;
                cin >> opcao2;
                if(opcao2 == 1)
                {
                    cout << endl << "Apps instalados: " << endl;
                    for(int i = 0; i < apps.size(); i++)
                    {
                    cout << "-> " << apps[i]->getNome() << endl;
                    }
                    cout << endl << "Digite o nome do app que deseja desinstalar: " << endl;
                    string nome;
                    try {
                        // Lê a string do usuário
                        cin >> nome;

                        // Verifica se a string está vazia
                        if (nome.empty()) {
                        throw std::runtime_error("A string está vazia");
                        }

                        std::transform(nome.begin(), nome.end(), nome.begin(), ::toupper);

                        for (int i = 0; i < nome.length();i+=1){
                        if (isdigit(nome[i])){
                            throw std::invalid_argument("A string é um nome ou número inválido");
                        }
                        }

                        } catch (std::runtime_error& e) {
                            // Trata a exceção de string vazia
                            std::cout << "Erro: " << e.what() << std::endl;
                        } catch (std::invalid_argument& e) {
                            // Trata a exceção de string inválida
                            std::cout << "Erro: " << e.what() << std::endl;
                        }

                    for(int i = 0; i < apps.size(); i++)
                    {
                        if(nome == apps[i]->getNome())
                        {
                            if (i == apps.size()){
                            cout << endl << "App não encontrado" << endl;}
                            
                            else{
                            apps.erase(apps.begin()+i);
                            cout << endl << "App desinstalado com sucesso" << endl;}
                        } 
                    }
                }
                else if(opcao2 == 2)
                {
                    cout << "Digite o nome do app que deseja instalar: " << endl;
                    string nome;
                    cin >> nome;    
                        for(int i = 0; i < apps.size(); i++)
                        {
                            if(nome == apps[i]->getNome())
                            {
                                cout << endl << "App já instalado" << endl;
                                break;
                            }
                            else{
                                nome = apps[i]->getNome();

                                cout << endl << "App instalado com sucesso" << endl;
                                break;
                            }
                        }
                    
                }
                else{
                    cout << "Opção inválida" << endl;
                }
            }
    
        }
        else if (opcao == 5){
            break;
        }
        else{
            cout << "Opção inválida" << endl;
        }
    }
}
