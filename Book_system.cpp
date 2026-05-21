#include <iostream>
using namespace std;

void introCpp()
{
    cout << "\n===== Introduction to C++ =====\n";
    cout << "C++ is a powerful programming language.\n";
    cout << "It was created to improve the C language.\n";
    cout << "It supports both procedural and object-oriented programming.\n";
}

void oopConcept()
{
    cout << "\n===== Object Oriented Programming =====\n";
    cout << "C++ supports OOP concepts such as:\n\n";
    cout << "- Classes\n";
    cout << "- Objects\n";
    cout << "- Inheritance\n";
    cout << "- Encapsulation\n";
    cout << "- Polymorphism\n";
}

void cppVersions()
{
    cout << "\n===== C++ Versions =====\n";
    cout << "Different versions of C++ were released over time.\n\n";

    cout << "C++98\n";
    cout << "C++03\n";
    cout << "C++11\n";
    cout << "C++14\n";
    cout << "C++17\n";
    cout << "C++20\n";
    cout << "C++23\n";
}

void variables()
{
    cout << "\n===== Variables =====\n";
    cout << "Variables are used to store data.\n\n";

    cout << "Examples:\n";
    cout << "int age = 20;\n";
    cout << "float mark = 85.5;\n";
    cout << "char grade = 'A';\n";
}

void conditions()
{
    cout << "\n===== Conditions =====\n";
    cout << "Conditions help programs make decisions.\n\n";

    cout << "Examples:\n";
    cout << "- if\n";
    cout << "- if else\n";
    cout << "- switch\n";
}

void repetition()
{
    cout << "\n===== Loops =====\n";
    cout << "Loops repeat code multiple times.\n\n";

    cout << "Types of loops:\n";
    cout << "1. for loop\n";
    cout << "2. while loop\n";
    cout << "3. do while loop\n";
}

void lists()
{
    cout << "\n===== Arrays =====\n";
    cout << "Arrays store many values in one variable.\n\n";

    cout << "Example:\n";
    cout << "int data[3] = {1,2,3};\n";
}

void files()
{
    cout << "\n===== File Handling =====\n";
    cout << "Files are used to save and read information.\n\n";

    cout << "ofstream -> write to file\n";
    cout << "ifstream -> read from file\n";
    cout << "fstream  -> read and write\n";
}

void historySection()
{
    int option;

    do
    {
        cout << "\n========== C++ INFORMATION ==========\n";
        cout << "1. Introduction to C++\n";
        cout << "2. OOP Concept\n";
        cout << "3. C++ Versions\n";
        cout << "4. Back\n";
        cout << "Enter option: ";
        cin >> option;

        switch(option)
        {
            case 1:
                introCpp();
                break;

            case 2:
                oopConcept();
                break;

            case 3:
                cppVersions();
                break;

            case 4:
                cout << "\nReturning...\n";
                break;

            default:
                cout << "\nWrong option.\n";
        }

    } while(option != 4);
}

void learningSection()
{
    int option;

    do
    {
        cout << "\n========== C++ LESSONS ==========\n";
        cout << "1. Variables\n";
        cout << "2. Conditions\n";
        cout << "3. Loops\n";
        cout << "4. Arrays\n";
        cout << "5. File Handling\n";
        cout << "6. Back\n";
        cout << "Enter option: ";
        cin >> option;

        switch(option)
        {
            case 1:
                variables();
                break;

            case 2:
                conditions();
                break;

            case 3:
                repetition();
                break;

            case 4:
                lists();
                break;

            case 5:
                files();
                break;

            case 6:
                cout << "\nReturning...\n";
                break;

            default:
                cout << "\nWrong option.\n";
        }

    } while(option != 6);
}

int main()
{
    int choice;

    do
    {
        cout << "\n=================================\n";
        cout << "        C++ Learning System\n";
        cout << "=================================\n";
        cout << "1. C++ Information\n";
        cout << "2. C++ Lessons\n";
        cout << "3. Exit\n";
        cout << "Choose option: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                historySection();
                break;

            case 2:
                learningSection();
                break;

            case 3:
                cout << "\nProgram closed.\n";
                break;

            default:
                cout << "\nInvalid choice.\n";
        }

    } while(choice != 3);

    return 0;
}