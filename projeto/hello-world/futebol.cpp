#include <iostream>
#include <string>
#include <vector>
using namespace std; //fiz esse ai na AI mesmo, tava querendo pensar em uma branch diferenciada ai a IA me deu isso ai kk
struct Jogador {
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
    std::cout << "\n===== ELENCO DO TIME =====" << std::endl;
    for (Jogador j : elenco) {
        exibirJogador(j);
    }
}

Jogador artilheiro(std::vector<Jogador> elenco) {
    Jogador melhor = elenco[0];
    for (Jogador j : elenco) {
        if (j.gols > melhor.gols) {
            melhor = j;
        }
    }
    return melhor;
}

int totalGols(std::vector<Jogador> elenco) {
    int total = 0;
    for (Jogador j : elenco) {
        total += j.gols;
    }
    return total;
}

int main() {
    std::vector<Jogador> elenco = {
        {"Gabriel Barbosa", 99, "Atacante", 18},
        {"Rodrigo Caio",     3, "Zagueiro",  1},
        {"Arrascaeta",      14, "Meia",      12},
        {"Bruno Henrique",  27, "Atacante",  10},
        {"Everton Ribeiro",  7, "Meia",       8}
    };

    exibirElenco(elenco);

    Jogador craque = artilheiro(elenco);
    std::cout << "\nArtilheiro: " << craque.nome
              << " com " << craque.gols << " gols" << std::endl;

    std::cout << "Total de gols do time: " << totalGols(elenco) << std::endl;

    return 0;
}