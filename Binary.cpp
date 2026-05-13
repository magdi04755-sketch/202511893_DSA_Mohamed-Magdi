#include <iostream>
using namespace std;

int main() {

    int n;

    cout << "Enter number of family members: ";
    cin >> n;

    string names[n];
    int ages[n];

    // Input sorted names and ages
    for(int i = 0; i < n; i++) {

        cout << "Enter name: ";
        cin >> names[i];

        cout << "Enter age: ";
        cin >> ages[i];
    }

    string key;

    cout << "Enter name to search: ";
    cin >> key;

    int low = 0;
    int high = n - 1;
    bool found = false;

    // Binary Search
    while(low <= high) {

        int mid = (low + high) / 2;

        if(names[mid] == key) {

            cout << names[mid]
                 << " was found and is aged "
                 << ages[mid];

            found = true;
            break;
        }

        else if(names[mid] < key) {
            low = mid + 1;
        }

        else {
            high = mid - 1;
        }
    }

    if(found == false) {
        cout << "Not found";
    }

    return 0;
}



