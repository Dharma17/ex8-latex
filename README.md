# Comparando Algoritmos de Busca

## Introduction

* Colocar uma explicação de cada algoritmo escolhido
* Colocar aqui uma breve explicação do programa
* Explicar o processamento

## Usage

* Colocar aqui a sintáxe de uso do programa
* Entradas esperadas
* Saída produzida

## Examples

* Colocar aqui alguns exemplos
* Casos de uso

## Arquivos

### Arquivos temporários e auxiliares

Os arquivos com extensão final:

* *.aux
* *.bbl
* *.blg
* *.log
* *.synctex.gz
* *.o
* *.err

são auxiliares, não devem ser adicionados no repositório, e podem ser apagados a qualquer tempo com o comando _make clean_

### Arquivos gerados

* Arquivo PDF

O arquivo _exN.pdf_ é gerado a partir dos arquivos fontes _exN.tex_ e _exN.bib_ com os comandos:

```
$ pdflatex exN.tex -o exN.pdf
$ bibtex exN
$ pdflatex exN.tex -o exN.pdf
```

* Arquivo binário (.x)

O arquivo exN.x é gerado a partir dos arquivos fontes _exN.c_ e _exN.h_ (se existir) com o comando:

```
$ gcc exN.c -o exN.x -Wall -Wextra -O0 -g
```

ou com o comando `make` no formato:

```
$ make exN.x
```

* Nunca adicione o binário no repositório git

### Arquivos no repositório

No repositório devem constar apenas e tão somente os arquivos:

* exN.c
* exN.tex
* Imagens usadas que foram incluídas no artigo .tex
* exN.bib
* exN.pdf
* README.md (este arquivo)
* AUTHORS
* LICENSE
* VERSION
* makefile

Atenção:

* Substitua o N pelo número do exercício onde for necessário. Exemplo: ex8.c, ex8.x, ex8.tex, ex8.bib, ex8.pdf, etc.

## Author

* Author: Prof. Dr. Ruben Carlo Benante
* Email: rcb@upe.br
* Date: 2021-0422-
* License: GNU/GPL v2.0

