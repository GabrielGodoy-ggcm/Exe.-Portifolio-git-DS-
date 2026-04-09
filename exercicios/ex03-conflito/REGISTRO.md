# Exercício 03 — Registro de Resolução de Conflito

## O que causou o conflito

O conflito ocorreu no arquivo `projeto/hello-world/futebol.cpp`, na função
`exibirElenco()`, na linha que exibe o nome do time. Duas branches criadas
a partir do mesmo commit da main modificaram exatamente essa linha com
conteúdos diferentes: `feat/conflito-a` definiu como "Falso Campeão de 87"
e `feat/conflito-b` definiu como "Urubu do Pix". Quando o PR da branch B
foi aberto após o merge da branch A, o GitHub apontou conflito pois a main
já tinha um conteúdo diferente naquela linha.

## Como o conflito apareceu

O GitHub exibiu o aviso "This branch has conflicts that must be resolved"
no PR da branch B. Ao clicar em "Resolve conflicts", o arquivo apareceu
marcado assim:

<<<<<<< feat/conflito-b
std::cout << "NOME DO TIME: Urubu do Pix" << std::endl;
std::cout << "NOME DO TIME: Falso Campeão de 87" << std::endl;

## Como decidi qual versão manter

Optei por descartar as duas versões e escrever uma terceira:

```cpp
std::cout << "NOME DO TIME: Urubu do pix = falso campeao de 87" << std::endl;
```

Essa decisão deixa claro que a resolução foi feita de forma consciente,
combinando o espírito das duas branches em uma mensagem final.

## Como foi marcado como resolvido

Após editar o arquivo diretamente no editor de conflitos do GitHub,
removi os marcadores `<<<<<<<`, `=======` e `>>>>>>>`, deixando apenas
a linha final escolhida. Em seguida cliquei em **"Mark as resolved"**
e depois em **"Commit merge"** para finalizar o merge do PR.
