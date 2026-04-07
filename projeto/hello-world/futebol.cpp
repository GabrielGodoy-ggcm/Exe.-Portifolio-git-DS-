#include <iostream>
#include <string>
#include <vector>
using namespace std; //fiz esse ai na AI mesmo, tava querendo pensar em uma branch diferenciada ai a IA me deu isso ai kk
struct Jogador {    //esse vai ter um exe de conflito
    std::string nome;
    int numero;
    std::string posicao;
    int gols;
};

void exibirJogador(Jogador j) {
    std::cout << "[" << j.numero << "] " << j.nome
              << " | " << j.posicao
              << " | Gols: " << j.gols << std::endl;
}

void exibirElenco(std::vector<Jogador> elenco) {
    std::cout << "\n===== SPORT — VERSÃO B =====" << std::endl;
    for (Jogador j : elenco) {
        exibirJogador(j);
    }
}

int main() {
    std::vector<Jogador> elenco = {
        {"Gabriel Barbosa", 99, "Atacante", 18},
        {"Arrascaeta",      14, "Meia",      12}
    };
    exibirElenco(elenco);
    return 0;
}