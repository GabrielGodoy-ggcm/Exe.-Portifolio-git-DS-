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

void exibirElenco(std::vector<Jogador> elenco) {
    std::cout << "NOME DO TIME: Falso campeao de 87 = Urubu do Pix" << std::endl;
    for (Jogador j : elenco) {
        std::cout << j.nome << " | " << j.posicao << std::endl;
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
