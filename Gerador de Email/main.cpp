#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main(){
    string nomeCompleto;
    string emailComponent = "@ufrn.edu.br";

    getline(cin, nomeCompleto);
    transform(nomeCompleto.begin(), nomeCompleto.end(), nomeCompleto.begin(), [](unsigned char c){
        return tolower(c);
    });

    size_t primeiroNomeIndex = nomeCompleto.find(" ");
    size_t ultimoNomeIndex = nomeCompleto.rfind(" ");

    string primeiroNome = nomeCompleto.substr(0, primeiroNomeIndex);
    string ultimoNome = nomeCompleto.substr(ultimoNomeIndex + 1);

    cout << primeiroNome + "." + ultimoNome + emailComponent << endl;
    
    return 0;
}