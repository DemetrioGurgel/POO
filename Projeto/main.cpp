#include <iostream>
#include <string>
#include <vector>

#include "Pessoa.h"
#include "Ator.h"
#include "Diretor.h"
#include "Producao.h"
#include "Filme.h"
#include "Serie.h"
#include "App.h"
#include "Time.h"
#include "Streaming.h"
#include "SmartTv.h"

using namespace std;

    int main() {
    SmartTV Tv("TV", "OLED", "IOS");
    
    Hora h;
    Streaming netflix("NETFLIX", "Brasil");
    Streaming prime("PRIME", "Brasil");
    Streaming disney("DISNEY", "Brasil");

    //VECTOR DE F1 E F2 (Netflix)
    Diretor d1("Adam Sandler", 50);
    Diretor d2("Jack Giarraputo", 37);
    Diretor d3("Kevin Grady", 60);
    Diretor d4("Fred Wolf", 70);
    Ator a1("Adam Sandler", "56 anos");
    Ator a2("Chris Rock", "60 anos");
    Ator a3("Kevin James", "70 anos");
    Ator a4("Rob Schineider", "40 anos");
    Ator a5("Maya Rudolph", "30 anos");
    Ator a6("Joyce Van Patten", "20 anos");
    Ator a7("Cameron Boyce", "10 anos");
    vector<Diretor> diretoresf1;
    diretoresf1.push_back(d1), diretoresf1.push_back(d2), diretoresf1.push_back(d3), diretoresf1.push_back(d4);
    vector<Ator> atoresf1;
    atoresf1.push_back(a1), atoresf1.push_back(a2), atoresf1.push_back(a3), atoresf1.push_back(a4), atoresf1.push_back(a5), atoresf1.push_back(a6), atoresf1.push_back(a7);

    Filme f1("Gente Grande", atoresf1, diretoresf1, 175, "Filme");
    Filme f2("Gente Grande 2", atoresf1, diretoresf1, 200, "Filme");

    //VECTOR DE S1 (Netflix)
    Diretor d5("Koldo Serra", 50);
    Diretor d6("Jesús Colmenar", 37);
    Ator a8("Álvaro Morte", "56 anos");
    Ator a9("Pedro Alonso", "60 anos");
    Ator a10("Itziar Ituño", "70 anos");
    Ator a11("Miguel Herrán", "40 anos");
    Ator a12("Jaime Lorente", "30 anos");
    Ator a13("Esther Acebo", "20 anos");
    Ator a14("Belén Cuesta", "43 anos");
    Ator a15("Rodrigo de la Serna", "38 anos");
    vector<Diretor> diretoress1;
    diretoress1.push_back(d5), diretoress1.push_back(d6);
    vector<Ator> atoress1;
    atoress1.push_back(a8), atoress1.push_back(a9), atoress1.push_back(a10), atoress1.push_back(a11), atoress1.push_back(a12), atoress1.push_back(a13), atoress1.push_back(a14), atoress1.push_back(a15);

    Serie s1("La Casa de Papel", atoress1, diretoress1, 3, "Serie");

    //Vector de F3 (Amazon Prime)
    Diretor d7("Michael Grandage", 50);
    Ator a16("Harry Styles", "28 anos");
    Ator a17("Emma Corrin", "30 anos");
    Ator a18("Gina Mckee", "40 anos");
    Ator a19("Freya Mavor", "40 anos");
    Ator a20("Rupert Everett", "40 anos");
    vector<Diretor> diretoresf3;
    diretoresf3.push_back(d7);
    vector<Ator> atoresf3;
    atoresf3.push_back(a16), atoresf3.push_back(a17), atoresf3.push_back(a18), atoresf3.push_back(a19), atoresf3.push_back(a20);

    Filme f3("My Policeman", atoresf3, diretoresf3, 175, "Filme");

    //Vector de S3 (Amazon Prime)
    Diretor d8("Michael Uppendahl", 50);
    Diretor d9("Nelson McCormick", 37);
    Diretor d10("Dennie Gordon", 60);
    Diretor d11("Wayne yip", 70);
    Diretor d12("Millicent Shelton", 70);
    Ator a21("Al Pacino", "56 anos");
    Ator a22("Logan Lerman", "60 anos");
    Ator a23("Jerrika Hinton", "70 anos");
    Ator a24("Lena Olin", "40 anos");
    Ator a25("Saul Rubineck", "30 anos");
    Ator a26("Tiffany Boone", "20 anos");
    vector<Diretor> diretoress3;
    diretoress3.push_back(d8), diretoress3.push_back(d9), diretoress3.push_back(d10), diretoress3.push_back(d11), diretoress3.push_back(d12);
    vector<Ator> atoress3;
    atoress3.push_back(a21), atoress3.push_back(a22), atoress3.push_back(a23), atoress3.push_back(a24), atoress3.push_back(a25), atoress3.push_back(a26);

    Serie s3("Hunters", atoress3, diretoress3, 1, "Serie");

    //Vector de F4 (Disney+)
    Diretor d13("Robert Zemeckis", 50);
    Ator a27("Tom Hanks", "56 anos");
    Ator a28("Luke Evans", "60 anos");
    Ator a29("Cynthia Erivo", "55 anos");
    Ator a30("Bejamin Evan", "40 anos");
    Ator a31("Jamie Demetriou", "30 anos");
    Ator a32("Sheila Atim", "20 anos");
    Ator a33("Giuseppe Battinston", "59 anos");
    vector<Diretor> diretoresf4;
    diretoresf4.push_back(d13);
    vector<Ator> atoresf4;
    atoresf4.push_back(a27), atoresf4.push_back(a28), atoresf4.push_back(a29), atoresf4.push_back(a30), atoresf4.push_back(a31), atoresf4.push_back(a32), atoresf4.push_back(a33);

    Filme f4("Pinóquio", atoresf4, diretoresf4, 175, "Filme");

    //vector de S4 (Disney+)    
    Diretor d14("Debs Garner-Paterson", 50);
    Ator a34("Warwick Davis", "56 anos");
    Ator a35("Joel Fry", "60 anos");
    Ator a36("Lucy Punch", "55 anos");
    Ator a37("Aisling Bea", "40 anos");
    Ator a38("Tony Revolori", "40 anos");
    Ator a39("Amanda Abbington", "30 anos");
    Ator a40("Richard Ayoade", "20 anos");
    vector<Diretor> diretoress4;
    diretoress4.push_back(d14);
    vector<Ator> atoress4;
    atoress4.push_back(a34), atoress4.push_back(a35), atoress4.push_back(a36), atoress4.push_back(a37), atoress4.push_back(a38), atoress4.push_back(a39), atoress4.push_back(a40);

    Serie s4("Willow", atoress4, diretoress4, 2, "Serie");

    //Netflix
    netflix << f1;
    netflix << f2;
    netflix << s1;

    //Amazon Prime
    prime << f3;
    prime << s3;

    //Disney+
    disney << f4;
    disney << s4;

    //SmartTv
    Tv << netflix;
    Tv << prime;
    Tv << disney;
    Tv << h;
    
    Tv.run(string(" "));
    
    return 0;
}
