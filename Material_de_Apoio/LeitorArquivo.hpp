// Iaçanã Ianiski Weber - 09/2023
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

#ifndef _LEITOR_ARQUIVO_
#define _LEITOR_ARQUIVO_
// ****************************
class LeitorArquivo{
private:
    ifstream file;

    bool isSpecialChar(char c);
public:
    
    LeitorArquivo(string nome);
    string proximaPalavra();
};

#endif


