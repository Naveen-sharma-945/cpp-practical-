#include <iostream>
#include <cctype>
using namespace std;

int main(int argc, char* argv[]) {

    int freq[26] = {0};

    // Check if input is given
    if (argc < 2) {
        cout << "Please enter text as command line arguments.\n";
        return 0;
    }

    // Count frequency
    for (int i = 1; i < argc; i++) {
        for (int j = 0; argv[i][j] != '\0'; j++) {

            char ch = tolower(argv[i][j]);

            if (ch >= 'a' && ch <= 'z') {
                freq[ch - 'a']++;
            }
        }
    }

    // Output table
    cout << "\n==============================\n";
    cout << "  Alphabet Frequency Table\n";
    cout << "==============================\n\n";

    for (int i = 0; i < 26; i++) {
        cout << char('A' + i) << "  :  " << freq[i] << endl;
    }

    cout << "\n==============================\n";

    return 0;
}
