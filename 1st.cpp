#include <iostream>
#include <cstdlib>  // for atoi
using namespace std;

int main(int argc, char* argv[]) {
    int n;
    int sum = 0;

    // Check if command line argument is provided
    if (argc > 1) {
        n = atoi(argv[1]);
    } else {
        cout << "Enter the value of n: ";
        cin >> n;
    }

    // Validate input
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    // Compute sum: 1 + 2 + ... + n
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    cout << "Sum of first " << n << " terms = " << sum << endl;

    return 0;
}
