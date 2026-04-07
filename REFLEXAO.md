# Reflexão Pessoal

## O que foi difícil

A parte mais complicada foi entender o estado do repositório durante operações de merge. Quando o Git apontava conflitos, não ficava imediatamente claro quais mudanças pertenciam a qual branch e por quê o conflito havia ocorrido naquele trecho específico. Além disso, entender a diferença entre `git pull` com e sem rebase exigiu tentativa e erro.

 No início, tinha o impulso de commitar com mensagens vagas como "ajustes" ou "atualização". Seguir o padrão commits forçou a pensar antes de commitar.

## O que ficou claro

Ficou claro que uma branch é simplesmente um ponteiro para um commit — não uma cópia separada do projeto. Isso mudou minha forma de enxergar o Git: em vez de pensar em "versões paralelas do código", passei a pensar em "linhas de trabalho que convergem". O merge é o momento em que essas linhas se encontram, e o conflito acontece quando o Git não consegue decidir sozinho qual caminho seguir.

Também ficou clara a utilidade dos Pull Requests como ferramenta de comunicação, não apenas de integração. escrever a descrição do PR forçou a articular o que foi feito, algo valioso para trabalho em equipe.

## O que ainda é confuso

Ainda não tenho total clareza sobre quando usar `git rebase` versus `git merge`. Entendo que o rebase reescreve o histórico de commits para que pareça linear, enquanto o merge preserva a história real do trabalho paralelo — mas na prática, ainda não sei identificar com segurança qual estratégia é mais adequada em cada situação.

## Ferramentas ultilizadas

Git 
Github
GithubDesktop
Gemini AI
Claude Code/AI
Youtube -> aprender a como mexer no github, principalmente no readme
