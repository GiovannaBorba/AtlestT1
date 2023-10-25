// Iaçanã Ianiski Weber - 09/2023
#include <iostream>
#include <cstdlib>
#include <string>
#include "LeitorArquivo.hpp"
#include "menu.hpp"

using namespace std;

int main() {
    LeitorArquivo a = LeitorArquivo("Livros/alice.txt");

    int count = 0;
    while(1){
        string b = a.proximaPalavra(); 
        //cout << b << endl;
        count++;
        if(b.empty()){
            break;   
        }
    }

    cout << "Counter: " << count << endl;
    


    ////[Menu Do Usuario]///

    int menu = 0;
    int flag = 0;

    while(flag != 1){
    cout << str();
    cin >> menu; 
    if(menu != 7){cout << "------------------------------" << endl;}


    switch (menu){
    ////////////////////////////////////////////////
    case 1:
        cout << "1. Indice remissimo em ordem alfabética:" << endl; 

        /* code */

        if(saida() == 7){
            flag = 1;
            encerrando();
            cout << "Volte sempre!" << endl;
            } 

        break;

    ////////////////////////////////////////////////
    case 2:
        cout << "2. Indice remissimo em ordem decrescente:" << endl; 

            /* code */

        if(saida() == 7){
            flag = 1;
            encerrando();
            cout << "Até mais!" << endl;
            } 

        break;

    ////////////////////////////////////////////////
    case 3:
        cout << "3. Informações sobre a catalogação:" << endl; 

        int tres;
        tres = FuncaoTres();
        if(tres == 1){}

        if(tres == 2){}

        if(tres == 3){}

        if(tres == 4){}
            /* code */
        
        if(tres == 7){
            flag = 1;
            encerrando();
            cout << "Adios!" << endl;
        } 

        break;

    ////////////////////////////////////////////////
    case 4:
        cout << "4. Indice remissimo em ordem alfabética:" << endl; 

            /* code */

        if(saida() == 7){
            flag = 1;
            encerrando();
            cout << "Tchau-Tchau!" << endl;
            } 

        break;

    ////////////////////////////////////////////////
    case 5:
        cout << "1. Indice remissimo em ordem alfabética:" << endl; 

            /* code */

        if(saida() == 7){
            flag = 1;
            encerrando();
            cout << "Até a próxima!" << endl;
            } 

        break;

    ////////////////////////////////////////////////
    case 6:
        cout << "1. Indice remissimo em ordem alfabética:" << endl; 

            /* code */

        if(saida() == 7){
            flag = 1;
            encerrando();
            cout << "Arrivederci!" << endl;
            } 

        break;

    ////////////////////////////////////////////////
    case 7:
        flag = 1;
        encerrando();
        cout << "Até logo!" << endl;
        break;

    ////////////////////////////////////////////////
    default:
        break;
        }
    }
}