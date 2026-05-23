
#include <iostream>
using namespace std;

int getTotal(int m1, int m2, int m3)
{
    int sum = m1 + m2 + m3;
    return sum;
}

void showResult(string sname, int tot, float avg)
{
    cout << "\nName: " << sname << endl;
    cout << "Total: " << tot << endl;
    cout << "Average: " << avg << endl;
    
    if (avg >= 50)
        cout << "Status: Pass" << endl;
    else
        cout << "Status: Fail" << endl;
}

int main()
{
    string studentName;
    int sub1, sub2, sub3;
    int total;
    float avg;
    char choice;

    do
    {
        cout << "Enter student name: ";
        cin >> studentName;

        cout << "Enter marks for subject 1: ";
        cin >> sub1;

        cout << "Enter marks for subject 2: ";
        cin >> sub2;

        cout << "Enter marks for subject 3: ";
        cin >> sub3;

        total = getTotal(sub1, sub2, sub3);
        avg = total / 3.0;

        showResult(studentName, total, avg);

        cout << "\nAdd another student? y/n: ";
        cin >> choice;

    } while (choice == 'y');

    cout << "\nProgram ended." << endl;
    return 0;
}
