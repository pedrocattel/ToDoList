#include <iostream>
#include <string>
#include <fstream>
#include "taskmanager.h"

using namespace std;

void criaTask ()
{
    ofstream myfile;
    string task;
    cin.ignore();
    cout << "Digite a tarefa desejada: ";
    getline(cin, task);
    task += "\n";
    myfile.open("lista.txt", std::ios_base::app);
    myfile << task;
    system("CLS");
    cout << "Tarefa adicionada com sucesso! \n";
    myfile.close();
}

void exibeLista()
{
    ifstream file("lista.txt");
    string task;
    for(string line; getline(file, line);)
    {
        task = task + line + "\n";
    }
    cout << task;
    file.close();

}

void printMenu()
{
    cout << "-----------------------------\n";
    cout << "1. Exibir Lista\n";
    cout << "2. Adicionar tarefa\n";
    cout << "3. Remover tarefa\n";
    cout << "4. Fechar programa\n";
    cout << "-----------------------------\n";
    cout << "Escolha um item! \n";
}
