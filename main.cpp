#include <iostream>
#include <string>
#include <fstream>

using namespace std;

void criaTask();
void exibeLista();
void printMenu();

int main()
{
    int i = 0, item;
    cout << "-----------------------------\n";
    cout << "Bem vindo ao Cttl Todolist\n";
    cout << "-----------------------------\n";
    printMenu();
    criaTask();
    cin >> item;
    while (i != 1)
    {
        switch (item)
        {
        case 1:
            exibeLista();
            cin >> item;
            break;
        case 2:
            criaTask();
            cin >> item;
            break;
        case 3:

            break;
        case 4:
            i = 1;
            break;
        default:
            cout << "Digite um valor valido";
            exibeLista();
        }
    }
    return 0;
}


void criaTask ()
{
    string task;
    cout << "Digite a tarefa desejada: ";
    getline(cin, task);
    task += "\n";
    ofstream arquivout;
    arquivout.open("lista.txt", std::ios_base::app);
    arquivout << task;
    arquivout.close();
}

void exibeLista()
{
    ifstream input("lista.txt");
    string task;
    for(string line; getline(input, line);)
    {
        task = task + line + "\n";
    }
    cout << task;

}

void printMenu()
{
    cout << "-----------------------------\n";
    cout << "1. Exibir Lista\n";
    cout << "2. Adicionar tarefa\n";
    cout << "1. Remover tarefa\n";
    cout << "4. Fechar programa\n";
    cout << "-----------------------------\n";
    cout << "Escolha um item! \n";
}
