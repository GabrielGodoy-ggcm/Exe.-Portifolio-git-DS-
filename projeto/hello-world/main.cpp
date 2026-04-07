#include <iostream>
#include <string>
#include <vector>
using namespace std;
string saudacao(string nome) {
    return "Olá, " + nome + "! Bem-vindo ao portfólio Git.";
}

int somaLista(vector<int> numeros) {
    int total = 0;
    for (int n : numeros) {
        total += n;
    }
    return total;
}

int main() {
    string nome = "Gabriel";
    cout << saudacao(nome) << endl;
    vector<int> numeros = {1, 2, 3, 4, 5};
    cout << "Soma da lista: " << somaLista(numeros) << endl;
    return 0;
}