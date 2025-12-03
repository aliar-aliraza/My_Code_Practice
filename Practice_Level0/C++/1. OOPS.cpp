#include <iostream>
using namespace std;

class Student {
private:
    int id;
    string name;
    float marks[3];

    static int counter;   // static data member

public:
    // Constructor
    Student() {
        id = ++counter;    // Assign unique ID
    }

    void getData() {
        cout << "\nEnter name: ";
        cin.ignore();
        getline(cin, name);

        cout << "Enter marks of 3 subjects:\n";
        for (int i = 0; i < 3; i++) {
            cout << "Subject " << i + 1 << ": ";
            cin >> marks[i];
        }
    }

    void show() {
        float total = 0;

        cout << "\n----- Student Details -----\n";
        cout << "ID    : " << id << endl;
        cout << "Name  : " << name << endl;

        cout << "Marks : ";
        for (int i = 0; i < 3; i++) {
            cout << marks[i] << " ";
            total += marks[i];
        }

        cout << "\nTotal : " << total << endl;
        cout << "Average : " << total / 3 << endl;
        cout << "---------------------------\n";
    }
};

// Initialization of static member
int Student::counter = 0;

int main() {
    Student s1, s2;

    cout << "\nEnter data for Student 1";
    s1.getData();

    cout << "\nEnter data for Student 2";
    s2.getData();

    s1.show();
    s2.show();

    return 0;
}