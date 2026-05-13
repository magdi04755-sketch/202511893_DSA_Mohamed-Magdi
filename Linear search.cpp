#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of family members: ";
    cin >> n;

    string names[n];
    int ages[n];

    // Input names and ages
    for(int i = 0; i < n; i++) {

        cout << "Enter name: ";
        cin >> names[i];

        cout << "Enter age: ";
        cin >> ages[i];
    }

    string searchName;

    cout << "Enter name to search: ";
    cin >> searchName;

    bool found = false;

    // Linear Search
    for(int i = 0; i < n; i++) {

        if(names[i] == searchName) {

            cout << names[i] << " was found and is aged "
                 << ages[i];

            found = true;
            break;
        }
    }

    if(found == false) {
        cout << "Name not found";
    }

    return 0;
}
