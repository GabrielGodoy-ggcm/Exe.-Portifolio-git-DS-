# Exercício 03 — Registro de Resolução de Conflito

## O que causou o conflito

O conflito ocorreu no arquivo `projeto/hello-world/futebol.cpp`, na função
`exibirElenco()`, na linha que exibe o nome do time. Duas branches criadas
a partir do mesmo commit da main modificaram exatamente essa linha com
conteúdos diferentes: `fix/conflito-a` definiu como "MENGÃO DO CORAÇÃO"
e `fix/conflito-b` definiu como "MAIOR DO BRASIL". Quando a segunda branch
foi mergeada na main, o Git apontou o seguinte erro:
CONFLICT (content): Merge conflict in projeto/hello-world/futebol.cpp
Automatic merge failed; fix conflicts and then commit the result.

O arquivo ficou marcado internamente assim:

std::cout << "NOME DO TIME: MENGÃO DO CORAÇÃO" << std::endl;
std::cout << "NOME DO TIME: MAIOR DO BRASIL" << std::endl;
## Como decidi qual versão manter

Optei por combinar as duas versões em uma terceira mensagem:

std::cout << "NOME DO TIME: MENGÃO — MAIOR DO BRASIL" << std::endl;

## Comandos usados para marcar como resolvido

Após editar o arquivo manualmente e remover os marcadores
(`<<<<<<<`, `=======`, `>>>>>>>`), rodei:
git add projeto/hello-world/futebol.cpp
git commit -m "fix(futebol): resolve conflito entre slogan da branch A e brunch B"

O `git add` marca o arquivo como resolvido e o `git commit` finaliza o merge.
