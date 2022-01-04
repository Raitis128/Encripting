#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void encrypt(int key, char text)
{
    cout << "\n\t\t\t\t     Key: ";
    cin >> key;

    ifstream fin("text.txt");
    ofstream fout("en.txt");

    while (fin >> noskipws >> text)
    {
        int temp = (text + key);
        fout << (char)temp;
    }

    fin.close();
    fout.close();
}

void decrypt(int key, char text)
{
    cout << "\n\t\t\t\t     Key: ";
    cin >> key;

    ifstream fin("en.txt");
    ofstream fout("dec.txt");

    while (fin >> noskipws >> text)
    {
        int temp = (text - key);
        fout << (char)temp;
    }

    fin.close();
    fout.close();
}

int main()
{
    int key = 0, x;
    char text{};
    while (1)
    {
    system("cls");

    cout << "\t\t\t\t _______________________________________" << endl;
    cout << "\t\t\t\t|                                       |" << endl;
    cout << "\t\t\t\t|\t\t1. Encrypt \t\t|" << endl;
    cout << "\t\t\t\t|\t\t2. Decrypt \t\t|" << endl;
    cout << "\t\t\t\t|\t\t3. Exit\t\t\t|" << endl;
    cout << "\t\t\t\t|_______________________________________|" << endl;
    cout << "\n\t\t\t\t     Enter your choice here : ";
    cin >> x;
        switch (x)
        {
        case 1:
            encrypt(key, text);
            system("pause>null");
            break;
        case 2:
            decrypt(key, text);
            system("pause>null");
            break;
        case 3:
            exit(0);
        default:
            cout << "\t\t\t\t\t     ERROR!" << endl;
            system("pause>null");
        }
    }
}