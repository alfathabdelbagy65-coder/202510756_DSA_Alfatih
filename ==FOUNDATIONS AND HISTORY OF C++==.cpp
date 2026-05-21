#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void showFile(string fileName)
{
    ifstream file(fileName);
    string line;

    if(!file)
    {
        cout << "\nError: File not found.\n";
        return;
    }

    while(getline(file, line))
    {
        cout << line << endl;
    }

    file.close();
}

void historyMenu()
{
    int choice;
    do
    {
        cout << "\n==== History Menu ====\n";
        cout << "1. Origin\n";
        cout << "2. Growth\n";
        cout << "3. Timeline\n";
        cout << "0. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                showFile("history.txt");
                break;
            case 2:
                showFile("history.txt");
                break;
            case 3:
                showFile("history.txt");
                break;
            case 0:
                cout << "\nBack to main menu.\n";
                break;
            default:
                cout << "\nWrong choice.\n";
        }
    } while(choice!= 0);
}

void learnMenu()
{
    int choice;
    do
    {
        cout << "\n==== Learning Menu ====\n";
        cout << "1. Data Types\n";
        cout << "2. Control\n";
        cout << "3. Loops\n";
        cout << "4. Arrays\n";
        cout << "5. Files\n";
        cout << "0. Back\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                showFile("learn.txt");
                break;
            case 2:
                showFile("learn.txt");
                break;
            case 3:
                showFile("learn.txt");
                break;
            case 4:
                showFile("learn.txt");
                break;
            case 5:
                showFile("learn.txt");
                break;
            case 0:
                cout << "\nBack to main menu.\n";
                break;
            default:
                cout << "\nWrong choice.\n";
        }
    } while(choice!= 0);
}

int main()
{
    int choice;
    do
    {
        cout << "\n===========================\n";
        cout << " Foundations and History of C++\n";
        cout << "===========================\n";
        cout << "1. History\n";
        cout << "2. Learning\n";
        cout << "0. Exit\n";
        cout << "Select: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                historyMenu();
                break;
            case 2:
                learnMenu();
                break;
            case 0:
                cout << "\nGoodbye.\n";
                break;
            default:
                cout << "\nInvalid choice.\n";
        }
    } while(choice!= 0);

    return 0;
}