#include <iostream>
using namespace std;

int main() {
    int arr[100], n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Array to store unique elements
    int unique[100];
    int k = 0; // size of unique array

    // Loop to remove duplicates
    for(int i = 0; i < n; i++) {
        bool isDuplicate = false;

        // Check if arr[i] already exists in unique[]
        for(int j = 0; j < k; j++) {
            if(arr[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }

        // If not duplicate, add to unique[]
        if(!isDuplicate) {
            unique[k] = arr[i];
            k++;
        }
    }

    // Print result
    cout << "Array after removing duplicates:\n";
    for(int i = 0; i < k; i++) {
        cout << unique[i] << " ";
    }

    return 0;
}
