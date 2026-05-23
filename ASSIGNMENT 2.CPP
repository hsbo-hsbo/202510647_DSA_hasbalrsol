#include <iostream>
using namespace std;

double averageMarks(int total)
{
    return total / 3.0;
}

int main()
{
    string name;
    int mark1, mark2, mark3;
    char choice;

    do
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter marks for subject 1: ";
        cin >> mark1;

        cout << "Enter marks for subject 2: ";
        cin >> mark2;

        cout << "Enter marks for subject 3: ";
        cin >> mark3;

        int total = mark1 + mark2 + mark3;
        double average = averageMarks(total);

        cout << "\nStudent Name: " << name << endl;
        cout << "Total Marks: " << total << endl;
        cout << "Average: " << average << endl;

        if (average >= 50)
        {
            cout << "Result: Passed" << endl;
        }
        else
        {
            cout << "Result: Failed" << endl;
        }

        cout << "\nEnter another student? (y/n): ";
        cin >> choice;

        cout << endl;

    } while (choice == 'y' || choice == 'Y');

    return 0;
}