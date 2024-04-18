#include <iostream>

using namespace std;

class cricketer {
public:
    string name;
    int age;
    string country;
    string type;
    int total_matches;

    void initial_values() {
        name = "";
        age = 0;
        country = "";
        type = "";
        total_matches = 0;
    }

    void get_data() {
        cout << "Enter the name of the cricketer: ";
        cin >> name;
        cout << "Enter the age of the cricketer: ";
        cin >> age;
        cout << "Enter the country of the cricketer: ";
        cin >> country;
        cout << "Enter the type of the cricketer (bowler or batsman): ";
        cin >> type;
        cout << "Enter the total number of matches played by the cricketer: ";
        cin >> total_matches;
    }

    void show_data() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Country: " << country << endl;
        cout << "Type: " << type << endl;
        cout << "Total matches played: " << total_matches << endl;
    }
};

int main() {
    cricketer c[100];

    for (int i = 0; i < 100; i++) {
        c[i].initial_values();
    }

    for (int i = 0; i < 100; i++) {
        c[i].get_data();
    }

    for (int i = 0; i < 100; i++) {
        c[i].show_data();
    }

    return 0;
}