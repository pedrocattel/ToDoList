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
    cout << "\n-----------------------------\n";
    cout << "Bem vindo ao Cttl Todolist\n";
    cout << "-----------------------------\n";

    while (i != 1)
    {
        printMenu();
        cin >> item;
        system("CLS");
        string task;
        switch (item)
        {
        case 1:
            exibeLista();
            break;
        case 2:
            criaTask();
            break;
        case 3:
            break;
        case 4:
            i = 1;
            break;
        default:
            cout << "Digite um valor valido";
            system("CLS");
        }
    }
    return 0;
}

