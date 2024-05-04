# College Management

Trabalho avaliativo para a disciplina **SI300 Programação Orientada a Objetos I**.

## Descrição

O trabalho consiste na elaboração de um sistema simples capaz de realizar operações CRUD para o gerenciamento de um colégio.

## Inicio

### Dependencias

* Para executar o projeto, é necessário ter instalado o compilador g++ (testado na versão 13).
* Haverá scripts para a execução do sistema com CMake, script shell (para linux) e script powershell (para windows)

### Executando o Programa

Temos 3 opções para realizar a execução do programa: usando `cmake` (recomendado) ou usando um comando shell disponibilizado (extensão `.sh` para shell Linux e `.ps1` para Windows powershell).

* **CMake**: <br>
Acesse o diretório `build` do sistema usando o comando: 

```
cd build/
``` 
em seguida, execute o comando:
```
cmake ../; make .
```
por fim, se não ocorrer erros, haverá um arquivo chamado `MyExec` no diretório `build`. Execute-o com 
```
source MyExec
```

***

* **Linux shell**: <br>
No diretório raiz do projeto, caso esteja usando um terminal Linux, execute o arquivo `execute.sh` com o comando:

```
source execute.sh
``` 

***

* **Windows powershell**: <br>
No diretório raiz do projeto, caso esteja usando um terminal powershell, execute o arquivo `execute.ps1` com o comando:

```
.  ./execute.ps1
``` 

## Autores
* Pedro Evandro Martins - RA: 186791
